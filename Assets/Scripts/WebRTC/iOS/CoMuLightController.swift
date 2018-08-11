import WebRTC


@objcMembers
class CoMuLightController: NSObject {
    public static let share = CoMuLightController()
    
    var comu: CoMuLight! = nil
    var pixelBuffer: CVPixelBuffer!
    var mtlDevice: MTLDevice!
    var inputTexture: MTLTexture!

    static var SendStringArr = [[UInt8]]()

    
    override init() {
        super.init()
        print("CoMuLightController is creating")
        
        pixelBuffer = CoMuLightUtils.createPixelBuffer(width: 480, height: 640) //1280x720
        
        mtlDevice = MTLCreateSystemDefaultDevice()!
        
        let texdescriptor = MTLTextureDescriptor.texture2DDescriptor(pixelFormat: .rgba8Unorm,
                                                                     width: 480,
                                                                     height: 640,
                                                                     mipmapped: false)
        texdescriptor.usage = .unknown
        inputTexture = mtlDevice.makeTexture(descriptor: texdescriptor)!
        
        
        comu = CoMuLight(encoder: .H264, decoder: .H264)
        comu.didGenerateCandidate { cIceCandidate in
            self.readySdp(description: "ice", message: cIceCandidate.sdp)
            //TODO: make iceJson
        }

    }
    public func hogehoge() {
        print("hogehoge func")
        DispatchQueue.main.asyncAfter(deadline: .now() + 3.0) {
            self.readySdp(description: "CoMuLightController", message: "hogegegegegegegegege")
        }
    }
    func readySdp(description: String, message: String) {
        print("readySdp : ", description, message)
        WebRtciOSPlugin.sdpReadyString(description, message)
    }
    public func makePeer() {
        print("make peer")
        
        comu.makeOffer { offer in
            self.readySdp(description: "offer", message: offer)
        }
        
    }
    public func inputMetalFrame(_ frame: MTLTexture) {
        if comu == nil { return }
        
        if comu.state != .connected { return }
        let kNanosecondsPerSecond: Double = 1000000000
        let since1970: TimeInterval = Date().timeIntervalSince1970
        let timestamp = Int64(since1970 * kNanosecondsPerSecond)
        
        
        inputTexture = frame
        let ci = CIImage(mtlTexture: inputTexture, options: nil)!
        CIContext().render(ci, to: pixelBuffer)
        
        let buffer = RTCCVPixelBuffer(pixelBuffer: pixelBuffer)
        let frame = RTCVideoFrame(buffer: buffer, rotation: RTCVideoRotation._0, timeStampNs: Int64(timestamp))
        
        comu.frameGate.input(rtcVideoFrame: frame)
        
    }
    public func getFrame(_ framePtr: UnsafeMutableRawPointer) {
        if comu == nil { return }
        
        if let tex = (comu.frameGate.outputter)!._rgbTexture {
            tex.getBytes(framePtr,
                         bytesPerRow: 4 * tex.width,
                         from: MTLRegionMake2D(0, 0, tex.width, tex.height),
                         mipmapLevel: 0)
        } else {
            print("no rgb texture")
        }
    }
    public func receivedSdp(_ description: String, message: String) {
        print("received sdp", description, message)
        if comu == nil { return }
        switch description {
        case "offer" :
            self.comu.recieveOffer(sdp: message) { answer in
                self.readySdp(description: "answer", message: answer)
            }
        case "answer":
            self.comu.recieveAnswer(sdp: message)
        case "ice"   :
            self.comu.recieveICE(sdp: message)
        default: break
        }
        
    }
    
    

}







