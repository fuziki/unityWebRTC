//
//  CoMuLightFrameGateOutputter.swift
//  CoMuLight
//
//  Created by fuziki on 2018/07/01.
//  Copyright © 2018年 CoMuLight. All rights reserved.
//

import Foundation
import WebRTC

extension CMLFrameGate {
    class Outputter: NSObject,  RTCVideoRenderer  {
        var availableGPU: Bool!
        
        var frame: RTCVideoFrame? = nil
        
        var _yTexture: MTLTexture!
        var _uTexture: MTLTexture!
        var _vTexture: MTLTexture!
        var _rgbTexture: MTLTexture? = nil
        
        var _descriptor: MTLTextureDescriptor!
        var _chromaDescriptor: MTLTextureDescriptor!
        
        var _width: Int = 0
        var _height: Int = 0
        var _chromaWidth: Int = 0
        var _chromaHeight: Int = 0
        
        var currentMetalDevice: MTLDevice?
        var computePipelineState: MTLComputePipelineState?
        var commandQueue: MTLCommandQueue?
        
        private let threadsPerThreadgroup = MTLSize(width: 16, height: 16, depth: 1)
        
        private var ouputFrameHandler: ((_ uiimage: UIImage) -> Void)?
        
//        private weak var cmLight: CoMuLight?

        init(availableGPU avbl: Bool/*, CoMuLight cml: CoMuLight*/) {
            super.init()
            availableGPU = avbl
//            cmLight = cml
            if !availableGPU {
                return
            }
            currentMetalDevice = MTLCreateSystemDefaultDevice()
            computePipelineState = makeComputePipelineState()
            commandQueue = currentMetalDevice?.makeCommandQueue()
        }
        open func ouputFrame(handler: @escaping (_ uiimage: UIImage) -> Void) {
            ouputFrameHandler = handler
        }
        func makeComputePipelineState() -> MTLComputePipelineState? {
            guard let device = self.currentMetalDevice else {
                return nil
            }
            let library = device.makeDefaultLibrary()!
            let computeProgram = library.makeFunction(name: "kernelYuvToRgb")!
            let mycomputePipelineState: MTLComputePipelineState
            do {
                mycomputePipelineState = try device.makeComputePipelineState(function: computeProgram)
            } catch {
                print("could not prepare compute pipeline state")
                return nil
            }
            return mycomputePipelineState
        }
        
        func setupTexturesForFrame(frame: RTCVideoFrame) -> Bool {
            guard let device = currentMetalDevice else {
                return false
            }
            let buffer: RTCI420BufferProtocol = frame.buffer.toI420()
            
            if _descriptor == nil || (_width != frame.width && _height != frame.height) {
                _width = Int(frame.width)
                _height = Int(frame.height)
                _descriptor = MTLTextureDescriptor.texture2DDescriptor(pixelFormat: .r8Uint,
                                                                       width: _width,
                                                                       height: _height,
                                                                       mipmapped: false)
                _descriptor.usage = .shaderRead
                _yTexture = device.makeTexture(descriptor: _descriptor)
                
/*                let _rgbdescriptor = MTLTextureDescriptor.texture2DDescriptor(pixelFormat: .rgba32Float,
                                                                              width: _width,
                                                                              height: _height,
                                                                              mipmapped: false)*/
                let _rgbdescriptor = MTLTextureDescriptor.texture2DDescriptor(pixelFormat: .rgba8Unorm,
                                                                              width: _width,
                                                                              height: _height,
                                                                              mipmapped: false)
                _rgbdescriptor.usage = .unknown
                _rgbTexture = device.makeTexture(descriptor: _rgbdescriptor)
            }
            _yTexture.replace(region: MTLRegionMake2D(0, 0, _width, _height),
                              mipmapLevel: 0,
                              withBytes: buffer.dataY,
                              bytesPerRow: Int(buffer.strideY))
            
            if _chromaDescriptor == nil || (_chromaWidth != frame.width / 2 && _chromaHeight != frame.height / 2) {
                _chromaWidth = Int(frame.width / 2);
                _chromaHeight = Int(frame.height / 2);
                
                _chromaDescriptor = MTLTextureDescriptor.texture2DDescriptor(pixelFormat: .r8Uint,
                                                                             width: _chromaWidth,
                                                                             height: _chromaHeight,
                                                                             mipmapped: false)
                _chromaDescriptor.usage = .shaderRead
                _uTexture = device.makeTexture(descriptor: _chromaDescriptor)
                _vTexture = device.makeTexture(descriptor: _chromaDescriptor)
            }
            _uTexture.replace(region: MTLRegionMake2D(0, 0, _chromaWidth, _chromaHeight),
                              mipmapLevel: 0,
                              withBytes: buffer.dataU,
                              bytesPerRow: Int(buffer.strideU))
            
            _vTexture.replace(region: MTLRegionMake2D(0, 0, _chromaWidth, _chromaHeight),
                              mipmapLevel: 0,
                              withBytes: buffer.dataV,
                              bytesPerRow: Int(buffer.strideV))
            
            return (_uTexture != nil) && (_yTexture != nil) && (_vTexture != nil);
        }
        
        
        func renderFrame(_ frame: RTCVideoFrame?) {
            self.frame = frame
            guard let _frame = self.frame else {
                return
            }
            let rst = setupTexturesForFrame(frame: _frame)
            if !rst {
                print("faild change frame")
                return
            }
            guard let commandQueue = self.commandQueue else {
                return
            }
            guard let commandBuffer: MTLCommandBuffer = commandQueue.makeCommandBuffer() else {
                return
            }
            guard let computeCommandEncoder = commandBuffer.makeComputeCommandEncoder() else {
                return
            }
            guard let computePipelineState = self.computePipelineState else {
                return
            }
            computeCommandEncoder.setComputePipelineState(computePipelineState)
            guard let texture = self._rgbTexture else {
                return
            }
            let threadgroupsPerGrid = MTLSize(width: (texture.width + threadsPerThreadgroup.width - 1) / threadsPerThreadgroup.width,
                                              height: (texture.height + threadsPerThreadgroup.height - 1) / threadsPerThreadgroup.height,
                                              depth: 1)
            computeCommandEncoder.setTexture(_yTexture, index: 0)
            computeCommandEncoder.setTexture(_uTexture, index: 1)
            computeCommandEncoder.setTexture(_vTexture, index: 2)
            computeCommandEncoder.setTexture(_rgbTexture, index: 3)
            computeCommandEncoder.dispatchThreadgroups(threadgroupsPerGrid, threadsPerThreadgroup: threadsPerThreadgroup)
            computeCommandEncoder.endEncoding()
            
            commandBuffer.commit()
            commandBuffer.waitUntilCompleted()
            
            guard let rbg = self._rgbTexture else {
                return
            }
            guard let ci = CIImage(mtlTexture: rbg, options: nil) else {
                return
            }
            let image = UIImage(ciImage: ci)
            guard let handler = self.ouputFrameHandler else {
                return
            }
            handler(image)
        }
        
        func setSize(_ size: CGSize) {
        }
    }
}






