//
//  CoMuLightFrameGate.swift
//  CoMuLight
//
//  Created by fuziki on 2018/07/01.
//  Copyright © 2018年 CoMuLight. All rights reserved.
//

import Foundation
import WebRTC

class CMLFrameGate {
    public private(set) var inputter: Inputter?
    public private(set) var outputter: Outputter?
    public var ignoreMakeOutputter: Bool = false
//    private weak var cmLight: CoMuLight?
    init(CoMuLight cml: CoMuLight) {
//        cmLight = cml
    }
    open func makeOutputter(availableGPU: Bool) {
        if !ignoreMakeOutputter /*&& cmLight != nil*/ {
            outputter = Outputter(availableGPU: availableGPU/*, CoMuLight: cmLight!*/)
        }
    }
    open func makeInputter(source: RTCVideoSource) {
//        if let cml = self.cmLight {
            inputter = Inputter(source: source/*, CoMuLight: cml*/)
//        }
    }
    open func input(rtcVideoFrame: RTCVideoFrame) {
        if let inputter = self.inputter {
            inputter.capture(rtcVideoFrame: rtcVideoFrame)
        }
    }
    open func input(cmSampleBuffer: CMSampleBuffer, state: RTCIceConnectionState = .connected) {
        if let inputter = self.inputter {
            inputter.capture(cmSampleBuffer: cmSampleBuffer, state: state)
        }
    }
    open func ouputFrameHandler(_ handler: @escaping (_ uiimage: UIImage) -> Void) {
        if let outputter = self.outputter {
            outputter.ouputFrame(handler: handler)
        }
    }
}










