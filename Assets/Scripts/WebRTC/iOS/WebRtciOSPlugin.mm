#import <UIKit/UIKit.h>
#import "webrtctest-Swift.h"    // Required
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import "WebRtciOSPlugin.h"


// C#へのエクスポートする関数の宣言
extern "C" {
    void CoMuLight_MakePeer();
    void CoMuLight_InputMetalFrame(unsigned char* frame);
    void CoMuLight_GetFrame(unsigned char* frame);
    void CoMuLight_RegisterSdpReady(SDPREADY_CALLBACK callback);
    void CoMuLight_ReceivedSdp(char* type, char* sdp);
    void CoMuLogger_Log(char* msg);
}

@implementation WebRtciOSPlugin
+ (void)SdpReadyString :(NSString *)type :(NSString *)sdp {
    const char* t = [type UTF8String];
    const char* s = [sdp UTF8String];
    SdpReady_Callback(t, s);
}
@end

void CoMuLight_MakePeer() {
    [[CoMuLightController share] makePeer];
}

void  CoMuLight_InputMetalFrame(unsigned char* frame) {
    id<MTLTexture> mtlTex = (__bridge id<MTLTexture>) (void*) frame;
    [[CoMuLightController share] inputMetalFrame: mtlTex];
}

void  CoMuLight_GetFrame(unsigned char* frame) {
    [[CoMuLightController share] getFrame: frame];
}

void  CoMuLogger_Log(char* msg) {
    NSLog(@"%@", [NSString stringWithUTF8String:msg]);
}

void CoMuLight_ReceivedSdp(char* descroption, char* message) {
    [[CoMuLightController share] receivedSdp: [NSString stringWithUTF8String:descroption]
                                     message: [NSString stringWithUTF8String:message]];
}

void  CoMuLight_RegisterSdpReady(SDPREADY_CALLBACK callback) {
    SdpReady_Callback = callback;
}








