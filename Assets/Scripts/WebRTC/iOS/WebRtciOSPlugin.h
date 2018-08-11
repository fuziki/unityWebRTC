//
//  WebRtciOSPlugin.h
//  Unity-iPhone
//
//  Created by fuziki on 2018/08/10.
//

#ifndef WebRtciOSPlugin_h
#define WebRtciOSPlugin_h

typedef void (*SDPREADY_CALLBACK) (char* type, char* sdp);

static SDPREADY_CALLBACK SdpReady_Callback;

@interface WebRtciOSPlugin : NSObject
+ (void)SdpReady :(char *)type :(char *)sdp;

@end


#endif /* WebRtciOSPlugin_h */
