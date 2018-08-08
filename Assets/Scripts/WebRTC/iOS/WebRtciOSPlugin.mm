#import <UIKit/UIKit.h>
#import "unityswift-Swift.h"    // Required
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>

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
    id<MTLTexture> mtlTex = (__bridge id<MTLTexture>) (void*) frame;
    [cml inputMetalFrame:mtlTex];
}

void  CoMuLight_getFrame(void* cmLight, unsigned char* frame) {
    CoMuLightSwift* cml = (__bridge CoMuLightSwift*)cmLight;
    [cml getFrame:frame];
}

void  CoMuLogger_Log(char* msg) {
    [CoMuLogger Log:[NSString stringWithUTF8String:msg]];
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




/*
 
#import <UIKit/UIKit.h>
#import <opencv2/opencv.hpp>
#import "unityswift-Swift.h"    // Required
 

// OpenCV実装部分
@interface VideoCapture : NSObject
{
    cv::VideoCapture* camera;
    int width;
    int height;
}
@end

@implementation VideoCapture
- (instancetype)initWithWidth:(int)w height:(int)h {
    self = [super self];
    if (self) {
        // カメラの生成
        camera = new cv::VideoCapture(0);
        
        width = w;
        height = h;
    }
    return self;
}

- (void)dealloc {
    // カメラの解放
    delete camera;
}

- (void)updateWithImage:(unsigned char*)data {
    cv::Mat img;
    // カメラから画像(BGR)を取得
    *camera >> img;
    
    // 指定サイズへリサイズ
    cv::Mat output(height, width, img.type());
    cv::resize(img, output, output.size(), cv::INTER_AREA);
    
    // 画像をグレースケールへ変換
//    cv::cvtColor(output, output, CV_BGR2GRAY);
//    cv::cvtColor(output, output, CV_GRAY2BGR);
    
    // Unityのテクスチャ形式(RGBA)に変換
    cv::Mat argb;
    cv::cvtColor(output, argb, CV_BGR2RGBA);
    
    // Unity側で確保されているバッファへコピー
    memcpy(data, argb.data, argb.total() * argb.elemSize());
}
@end


// C#へのエクスポートする関数の宣言
extern "C" {
    void* allocateVideoCapture(int width, int height);
    void releaseVideoCapture(void* capture);
    void updateVideoCapture(void* capture, unsigned char* image);
    void _ex_callSwiftMethod(const char *message);
}

// オブジェクトの生成
void* allocateVideoCapture(int width, int height) {
    VideoCapture* capture = [[VideoCapture alloc] initWithWidth:width height:height];
    return (__bridge_retained void*)capture;
}

// オブジェクトの破棄
void releaseVideoCapture(void* capture) {
    VideoCapture* cap = (__bridge_transfer VideoCapture*)capture;
    cap = nil;
}

// 毎フレーム呼び出す用
void updateVideoCapture(void* capture, unsigned char* image) {
    VideoCapture* cap = (__bridge VideoCapture*)capture;
    [cap updateWithImage:image];
}

 void _ex_callSwiftMethod(const char *message) {
    [Example swiftMethod:[NSString stringWithUTF8String:message]];
 }
 */






