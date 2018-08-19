//
//  CoMuLight.swift
//  CoMuLight
//
//  Created by fuziki on 2018/07/01.
//  Copyright © 2018年 CoMuLight. All rights reserved.
//

import Foundation
import WebRTC


class CoMuLight: NSObject  {
    
    public var peerConnectionFactory: RTCPeerConnectionFactory!

    public var frameGate: CMLFrameGate!
    
    private var peerConnection: RTCPeerConnection!
    
    
    func constraints() -> RTCMediaConstraints {
        return RTCMediaConstraints(mandatoryConstraints: ["OfferToReceiveVideo": kRTCMediaConstraintsValueTrue,
                                                          "OfferToReceiveAudio": kRTCMediaConstraintsValueTrue],
                                   optionalConstraints: nil)
    }
    
    private var localMediaStream: RTCMediaStream!
    private var remoteMediaStream: RTCMediaStream? = nil

    private var didGenerateCandidateHandler: ((_ cIceCandidate: RTCIceCandidate) -> Void)?
    
    private var didReceiveStringDataHandler: ((_ str: String) -> Void)?
    private var didReceiveBinaryDataHandler: ((_ data: Data) -> Void)?

    var dataChannel: RTCDataChannel!
    
    init(encoder: Codec = .H264, decoder: Codec = .H264) {
        super.init()
        
        var hasEncoderCodec: Bool = false
        let ef = RTCDefaultVideoEncoderFactory()
        for cinf in ef.supportedCodecs() {
            if cinf.name == encoder.rawValue { hasEncoderCodec = true }
        }
        if hasEncoderCodec {
            ef.preferredCodec = RTCVideoCodecInfo(name: encoder.rawValue)
        } else {
            fatalError()
        }
        
        var hasDeocoderCodec: Bool = false
        let df = RTCDefaultVideoDecoderFactory()
        for cinf in df.supportedCodecs() {
            if cinf.name == decoder.rawValue { hasDeocoderCodec = true }
        }
        if hasDeocoderCodec {
            ef.preferredCodec = RTCVideoCodecInfo(name: decoder.rawValue)
        } else {
            fatalError()
        }
        
        peerConnectionFactory = RTCPeerConnectionFactory(encoderFactory: ef, decoderFactory: df)
        localMediaStream = peerConnectionFactory.mediaStream(withStreamId: "CoMulightStream")
        
        let videoSource = peerConnectionFactory.videoSource()
        frameGate = CMLFrameGate(CoMuLight: self)
        frameGate.makeInputter(source: videoSource)
//        frameGate.makeOutputter(availableGPU: true)
        self.makeOutputter()
        localMediaStream.addVideoTrack(peerConnectionFactory.videoTrack(with: videoSource, trackId: "CoMulightStreamVideo"))
        
        localMediaStream.addAudioTrack(peerConnectionFactory.audioTrack(withTrackId: "CoMulightStreamAudio"))
        let rtcConf = RTCConfiguration()
        let server: RTCIceServer = RTCIceServer(urlStrings: ["stun:stun.l.google.com:19302"] as [String])
        rtcConf.iceServers.append(server)
        peerConnection = peerConnectionFactory.peerConnection(with: rtcConf,
                                                              constraints: constraints(),
                                                              delegate: self)
        peerConnection.add(localMediaStream)
        
        let dataChCong = RTCDataChannelConfiguration()
        dataChCong.isOrdered = false
        dataChCong.isNegotiated = true
        dataChCong.maxRetransmits = -1
        dataChCong.maxPacketLifeTime = 0
        dataChCong.channelId = 3
        dataChannel = peerConnection.dataChannel(forLabel: "CoMuLightDataChannnel", configuration: dataChCong)
        dataChannel.delegate = self
        
    }
    func makeOutputter() {
        frameGate.makeOutputter(availableGPU: true)
    }
/*    func addAudioTeack() {
        localMediaStream.addAudioTrack(peerConnectionFactory.audioTrack(withTrackId: "CoMulightStreamAudio"))
    }*/
    open var state: RTCIceConnectionState {
        return peerConnection.iceConnectionState
    }
    
    
    
    open func makeOffer(completHandler: @escaping (_ offer: String) -> Void) {
        peerConnection.offer(for: constraints()) { [weak self] (description, error) in
            if error != nil {
                return
            }
            guard let mydescription = description else {
                return
            }
            self?.peerConnection.setLocalDescription(mydescription) { /*[weak self]*/ error in
                if error != nil /*|| self?.peerConnection.signalingState == .haveLocalOffer*/ {
                    return
                }
                completHandler(mydescription.sdp)
            }
        }
    }
    
    open func recieveOffer(sdp: String, completHandler: @escaping (_ answer: String) -> Void) {
        let remoteDescription = RTCSessionDescription(type: .offer, sdp: sdp)
        peerConnection.setRemoteDescription(remoteDescription) { [weak self] error in
            if error != nil /*|| self?.peerConnection.signalingState == .haveRemoteOffer*/ {
                return
            }
            self?.peerConnection.answer(for: (self?.constraints)!()) { [weak self] (description, error) in
                if error != nil {
                    return
                }
                guard let mydescription = description else {
                    return
                }
                self?.peerConnection.setLocalDescription(mydescription) { error in
                    if error != nil {
                        return
                    }
                    completHandler(mydescription.sdp)
                }
            }
        }
    }
    
    open func recieveAnswer(sdp: String) {
        let remoteDescription = RTCSessionDescription(type: .answer, sdp: sdp)
        peerConnection.setRemoteDescription(remoteDescription) { error in
            if error != nil {
                return
            }
        }
    }
    
    open func didGenerateCandidate(handler: @escaping (_ cIceCandidate: RTCIceCandidate) -> Void) {
        didGenerateCandidateHandler = handler
    }
    open func recieveICE(sdp: String) {
        let can = RTCIceCandidate(sdp: sdp, sdpMLineIndex: 0, sdpMid: nil)
        peerConnection.add(can)
    }
    

}

extension CoMuLight: RTCDataChannelDelegate {
    open func didReceiveStringData(handler: @escaping (_ str: String) -> Void) {
        didReceiveStringDataHandler = handler
    }
    open func didReceiveBinaryData(handler: @escaping (_ data: Data) -> Void) {
        didReceiveBinaryDataHandler = handler
    }
    
    func dataChannel(_ dataChannel: RTCDataChannel, didReceiveMessageWith buffer: RTCDataBuffer) {
        if buffer.isBinary {
            let data = buffer.data
            if let hoge = self.didReceiveBinaryDataHandler {
                hoge(data)
            }
        } else {
            if let str = String(data: buffer.data, encoding: .utf8), let hoge = self.didReceiveStringDataHandler {
                hoge(str)
            }
        }
    }
    func dataChannelDidChangeState(_ dataChannel: RTCDataChannel) {
        print("CoMuLight call \(#function), ", dataChannel.readyState)
    }
    func dataChannel(_ dataChannel: RTCDataChannel, didChangeBufferedAmount amount: UInt64) {
        print("CoMuLight call \(#function), ", amount)
    }
}


extension CoMuLight: RTCPeerConnectionDelegate {
    func peerConnection(_ peerConnection: RTCPeerConnection, didGenerate candidate: RTCIceCandidate) {
        if let handler = self.didGenerateCandidateHandler {
            handler(candidate)
        }
    }
    
    func peerConnection(_ peerConnection: RTCPeerConnection, didAdd stream: RTCMediaStream) {
        if let outputter = self.frameGate.outputter {
            remoteMediaStream = stream
            stream.videoTracks.last?.add(outputter)
        }
    }
    
    func peerConnection(_ peerConnection: RTCPeerConnection, didRemove stream: RTCMediaStream) {
    }
    
    func peerConnection(_ peerConnection: RTCPeerConnection, didOpen dataChannel: RTCDataChannel) {
    }
    
    func peerConnection(_ peerConnection: RTCPeerConnection, didRemove candidates: [RTCIceCandidate]) {
    }
    
    func peerConnection(_ peerConnection: RTCPeerConnection, didChange newState: RTCIceGatheringState) {
    }
    
    func peerConnection(_ peerConnection: RTCPeerConnection, didChange newState: RTCIceConnectionState) {
    }
    
    func peerConnection(_ peerConnection: RTCPeerConnection, didChange stateChanged: RTCSignalingState) {
    }
    
    func peerConnectionShouldNegotiate(_ peerConnection: RTCPeerConnection) {
    }
    
}

extension CoMuLight {
    enum Codec: String {   //H264, VP8, VP9 ?? i dont know ....
        case VP8 = "VP8"
        case VP9 = "VP9"
        case H264 = "H264"
    }
}
















