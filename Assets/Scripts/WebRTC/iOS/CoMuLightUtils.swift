//
//  CoMuLightUtils.swift
//  CoMuLight
//
//

import Foundation
import WebRTC


extension CMSampleBuffer {
    var toCVPixelBuffer: CVPixelBuffer? {
        return CMSampleBufferGetImageBuffer(self)
    }
}

extension CVPixelBuffer {
    var toCGImage: CGImage? {
        CVPixelBufferLockBaseAddress(self, CVPixelBufferLockFlags(rawValue: 0))
        let baseAddress = CVPixelBufferGetBaseAddressOfPlane(self, 0)
        let bytesPerRow = CVPixelBufferGetBytesPerRow(self)
        let width = CVPixelBufferGetWidth(self)
        let height = CVPixelBufferGetHeight(self)
        
        let colorSpace = CGColorSpaceCreateDeviceRGB()
        let bitmapInfo = (CGBitmapInfo.byteOrder32Little.rawValue | CGImageAlphaInfo.premultipliedFirst.rawValue)
        let context = CGContext(data: baseAddress, width: width, height: height, bitsPerComponent: 8, bytesPerRow: bytesPerRow, space: colorSpace, bitmapInfo: bitmapInfo)
        let imageRef = context!.makeImage()
        CVPixelBufferUnlockBaseAddress(self, CVPixelBufferLockFlags(rawValue: 0))
        return imageRef
    }
}

class CoMuLightUtils {
    static func resizePixelBuffer(_ pixelBuffer: CVPixelBuffer,
                                  width: Int, height: Int,
                                  output: CVPixelBuffer, context: CIContext) {
        let ciImage = CIImage(cvPixelBuffer: pixelBuffer)
        let sx = CGFloat(width) / CGFloat(CVPixelBufferGetWidth(pixelBuffer))
        let sy = CGFloat(height) / CGFloat(CVPixelBufferGetHeight(pixelBuffer))
        let scaleTransform = CGAffineTransform(scaleX: sx, y: sy)
        let scaledImage = ciImage.transformed(by: scaleTransform)
        context.render(scaledImage, to: output)
    }
    static func rotatePixelBuffer(_ pixelBuffer: CVPixelBuffer,
                                  angle: Float,
                                  output: CVPixelBuffer, context: CIContext) {
        let ciImage = CIImage(cvPixelBuffer: pixelBuffer)
        let pretransTransform = CGAffineTransform(translationX: -CGFloat(CVPixelBufferGetWidth(pixelBuffer)) / 2,
                                                  y: -CGFloat(CVPixelBufferGetHeight(pixelBuffer)) / 2)
        let rotateTransform = CGAffineTransform(rotationAngle: CGFloat(angle * .pi / 180))
        let transTransform = CGAffineTransform(translationX: CGFloat(CVPixelBufferGetHeight(pixelBuffer)) / 2,
                                               y: CGFloat(CVPixelBufferGetWidth(pixelBuffer)) / 2)
        let scaleTransform = CGAffineTransform(scaleX: -1, y: 1)
        let posttransTransform = CGAffineTransform(translationX: CGFloat(CVPixelBufferGetHeight(pixelBuffer)), y: 0)
        let pretransImage = ciImage.transformed(by: pretransTransform)
        let rotateImage = pretransImage.transformed(by: rotateTransform)
        let transImage = rotateImage.transformed(by: transTransform)
        let scaleImage = transImage.transformed(by: scaleTransform)
        let postImage = scaleImage.transformed(by: posttransTransform)
        context.render(postImage, to: output)
    }
    
    static func createPixelBuffer(width: Int, height: Int) -> CVPixelBuffer? {
        var pixelBuffer: CVPixelBuffer?
        let status = CVPixelBufferCreate(nil, width, height,
                                         kCVPixelFormatType_32BGRA, nil,
                                         &pixelBuffer)
        if status != kCVReturnSuccess {
            print("Error: could not create resized pixel buffer", status)
            return nil
        }
        return pixelBuffer
    }
    
    
    
}




