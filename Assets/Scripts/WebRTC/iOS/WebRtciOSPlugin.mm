#import <UIKit/UIKit.h>
//#import "unityswift-Swift.h"    // Required
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>

typedef void (*SDPREADY_CALLBACK) (char* type, char* sdp);
static SDPREADY_CALLBACK s_callback;


// C#へのエクスポートする関数の宣言
extern "C" {
    void* CoMuLight_makeNative();
    void  CoMuLight_releaseSelf(void* cmLight);
    void  CoMuLight_inputFrame(void* cmLight, unsigned char* frame);
    void  CoMuLight_inputMetalFrame(void* cmLight, unsigned char* frame);
    void  CoMuLight_getFrame(void* cmLight, unsigned char* frame);
    void  CoMuLogger_Log(char* msg);
    void  CoMuLight_RegisterSdpReady(SDPREADY_CALLBACK callback);
}



void* CoMuLight_makeNative() {
//    CoMuLightSwift* cml = [[CoMuLightSwift alloc] init];
//    return (__bridge_retained void*)cml;
    s_callback("konnitichiha", "sekai");
    return nil;
}

void CoMuLight_releaseSelf(void* cmLight) {
    cmLight = nil;
}

void  CoMuLight_inputFrame(void* cmLight, unsigned char* frame) {
//    CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
//    [cml inputFrame:frame];
}
void  CoMuLight_inputMetalFrame(void* cmLight, unsigned char* frame) {
//    CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
//    id<MTLTexture> mtlTex = (__bridge id<MTLTexture>) (void*) frame;
//    [cml inputMetalFrame:mtlTex];
}

void  CoMuLight_getFrame(void* cmLight, unsigned char* frame) {
//    CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
//    [cml getFrame:frame];
}

void  CoMuLogger_Log(char* msg) {
//    [CoMuLogger Log:[NSString stringWithUTF8String:msg]];
    NSLog(@"%@", [NSString stringWithUTF8String:msg]);
}

void  CoMuLight_RegisterSdpReady(SDPREADY_CALLBACK callback) {
    s_callback = callback;
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







