//
//  WebRtciOSPlugin.h
//  Unity-iPhone
//
//  Created by fuziki on 2018/08/10.
//

#ifndef WebRtciOSPlugin_h
#define WebRtciOSPlugin_h

typedef void (*SDPREADY_CALLBACK) (const char* type, const char* sdp);

static SDPREADY_CALLBACK SdpReady_Callback;

@interface WebRtciOSPlugin : NSObject
+ (void)SdpReadyString :(NSString *)type :(NSString *)sdp;

@end


#endif /* WebRtciOSPlugin_h */
