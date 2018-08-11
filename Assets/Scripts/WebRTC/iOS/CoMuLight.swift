
@objcMembers
class CoMuLightController: NSObject {
    public static let share = CoMuLightController()
    override init() {
        super.init()
    }
    public func hogehoge() {
        print("hogehoge func")
        DispatchQueue.main.asyncAfter(deadline: .now() + 3.0) {
            self.readySdp(description: "CoMuLightController", message: "hogegegegegegegegege")
        }
    }
    func readySdp(description: String, message: String) {
        WebRtciOSPlugin.sdpReady(description.toCharArr, message.toCharArr)
    }
    public func makePeer() {
        
        
    }
    public func inputMetalFrame(_ frame: MTLTexture) {
        
    }
    public func getFrame(_ framePtr: UnsafeMutableRawPointer) {
        
    }
    public func receivedSdp(_ description: String, message: String) {
        
    }
    
    

}

extension String {
    var toCharArr: UnsafeMutablePointer<Int8>? {
        guard let data = self.data(using: .utf8) else { return nil }
        var arr: [Int8] = [UInt8](data).map{ Int8(bitPattern: $0) }
        return UnsafeMutablePointer<Int8>(&arr)
    }
}










