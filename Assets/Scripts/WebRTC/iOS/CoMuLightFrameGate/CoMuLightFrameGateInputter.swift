//
//  CoMuLightFrameGateInputter.swift
//  CoMuLight
//
//  Created by fuziki on 2018/07/01.
//  Copyright © 2018年 CoMuLight. All rights reserved.
//

import Foundation
import WebRTC

extension CMLFrameGate {
    class Inputter: RTCVideoCapturer {
        var source: RTCVideoSource!
        var latestDate: Date!
        var maxFrameRate: Double = .infinity
//        private weak var cmLight: CoMuLight?
        var sendingFlag: Bool = false
        private var sendFrameSize: CGSize? = nil

        
        var pixelBuffer: CVPixelBuffer!
        var frame: RTCVideoFrame!
        var buffer: RTCCVPixelBuffer!
        var mySampleBuffer: CMSampleBuffer!

        init(source s: RTCVideoSource/*, CoMuLight cml: CoMuLight*/) {
            super.init()
            source = s
            latestDate = Date()
            pixelBuffer = CoMuLightUtils.createPixelBuffer(width: 480, height: 640) //1280x720
//            cmLight = cml
        }
        open func set(sendFrameSize s: CGSize) {
            sendFrameSize = s
            pixelBuffer = CoMuLightUtils.createPixelBuffer(width: Int(s.width), height: Int(s.height)) //1280x720
        }

        open func capture(cmSampleBuffer sampleBuffer: CMSampleBuffer, state: RTCIceConnectionState = .connected) {

            let time = Date().timeIntervalSince(latestDate)
            if (1.0 / time) > maxFrameRate { return }   //faster than 33fps
            if state != RTCIceConnectionState.connected { return }
            
            if sendingFlag { return }
            sendingFlag = true
            
            let kNanosecondsPerSecond: Double = 1000000000
            let timestamp = CMTimeGetSeconds(CMSampleBufferGetPresentationTimeStamp(sampleBuffer)) * kNanosecondsPerSecond

            if let size = self.sendFrameSize {
                if pixelBuffer != nil {
                    CVPixelBufferUnlockBaseAddress(pixelBuffer, .readOnly)
                }
                
                mySampleBuffer = sampleBuffer
                
                let inputBuffer = CMSampleBufferGetImageBuffer(sampleBuffer)!
                
                let ctx = CIContext(options: [kCIContextUseSoftwareRenderer: true])
                
                CoMuLightUtils.resizePixelBuffer(inputBuffer,
                                                 width: Int(size.width), height: Int(size.height),
                                                 output: pixelBuffer, context: ctx)
                
                CVPixelBufferLockBaseAddress(pixelBuffer, .readOnly)
                buffer = RTCCVPixelBuffer(pixelBuffer: pixelBuffer)
                frame = RTCVideoFrame(buffer: buffer, rotation: RTCVideoRotation._0, timeStampNs: Int64(timestamp))
            } else {
                buffer = RTCCVPixelBuffer(pixelBuffer: sampleBuffer.toCVPixelBuffer!)
                frame = RTCVideoFrame(buffer: buffer, rotation: RTCVideoRotation._0, timeStampNs: Int64(timestamp))
            }
            
            self.capture(rtcVideoFrame: frame)
            self.latestDate = Date()
            self.sendingFlag = false
            
            
        }
        open func capture(rtcVideoFrame: RTCVideoFrame) {
            source.capturer(self, didCapture: rtcVideoFrame)
        }
    }
    
    
}








