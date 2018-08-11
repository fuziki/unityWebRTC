#import <UIKit/UIKit.h>
#import "ProductName-Swift.h"    // Required
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
+ (void)SdpReady :(char *)type :(char *)sdp {
    SdpReady_Callback(type, sdp);
}
@end

void CoMuLight_MakePeer() {
    //    CoMuLightSwift* cml = [[CoMuLightSwift alloc] init];
    //    return (__bridge_retained void*)cml;
    //    s_callback("konnitichiha", "sekai");
    [[CoMuLightController share] makePeer];
}

//void CoMuLight_releaseSelf(void* cmLight) {
//    cmLight = nil;
//}

//void  CoMuLight_InputFrame(unsigned char* frame) {
//    CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
//    [cml inputFrame:frame];
//}
void  CoMuLight_InputMetalFrame(unsigned char* frame) {
    //    CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
    //    id<MTLTexture> mtlTex = (__bridge id<MTLTexture>) (void*) frame;
    //    [cml inputMetalFrame:mtlTex];
    id<MTLTexture> mtlTex = (__bridge id<MTLTexture>) (void*) frame;
    [[CoMuLightController share] inputMetalFrame: mtlTex];
}

void  CoMuLight_GetFrame(unsigned char* frame) {
    //    CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
    //    [cml getFrame:frame];
    [[CoMuLightController share] getFrame: frame];
}

void  CoMuLogger_Log(char* msg) {
    //    [CoMuLogger Log:];
    NSLog(@"%@", [NSString stringWithUTF8String:msg]);
}

void CoMuLight_ReceivedSdp(char* descroption, char* message) {
    [[CoMuLightController share] receivedSdp: [NSString stringWithUTF8String:descroption]
                                     message: [NSString stringWithUTF8String:message]];
}

void  CoMuLight_RegisterSdpReady(SDPREADY_CALLBACK callback) {
    SdpReady_Callback = callback;
    //    s_callback("hello", "world");
}


/*
 #import <UIKit/UIKit.h>
 #import "unityswift-Swift.h"    // Required
 #import <Metal.h>
 #import <MetalKit.h>
 
 // C#へのエクスポートする関数の宣言
 extern "C" {
 void* CoMuLight_makeNative();
 void  CoMuLight_releaseSelf(void* cmLight);
 void  CoMuLight_inputFrame(void* cmLight, unsigned char* frame);
 void  CoMuLight_inputMetalFrame(void* cmLight, unsigned char* frame);
 void  CoMuLight_getFrame(void* cmLight, unsigned char* frame);
 void  CoMuLogger_Log(char* msg);
 }
 
 void* CoMuLight_makeNative() {
 CoMuLightSwift* cml = [[CoMuLightSwift alloc] init];
 return (__bridge_retained void*)cml;
 }
 
 void CoMuLight_releaseSelf(void* cmLight) {
 cmLight = nil;
 }
 
 void  CoMuLight_inputFrame(void* cmLight, unsigned char* frame) {
 CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
 [cml inputFrame:frame];
 }
 void  CoMuLight_inputMetalFrame(void* cmLight, unsigned char* frame) {
 CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
 MTLTexture* tex = (__bridge MTLTexture*)frame;
 [cml inputMetalFrame:tex];
 }
 
 void  CoMuLight_getFrame(void* cmLight, unsigned char* frame) {
 CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
 [cml getFrame:frame];
 }
 
 void  CoMuLogger_Log(char* msg) {
 [CoMuLogger Log:[NSString stringWithUTF8String:msg]];
 }
 */

/*
 void updateVideoCapture(void* capture, unsigned char* image) {
 VideoCapture* cap = (__bridge VideoCapture*)capture;
 [cap updateWithImage:image];
 }
 
 void _ex_callSwiftMethod(const char *message) {
 [Example swiftMethod:[NSString stringWithUTF8String:message]];
 }
 */







