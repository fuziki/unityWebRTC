#pragma once

#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>

#define UNITY_OBJC_FORWARD_TO_SUPER(self_, super_, selector, selectorType, ...) \
    do                                                                          \
    {                                                                           \
        struct objc_super super = { .receiver = self_, .super_class = super_ }; \
        selectorType msgSendFunc = (selectorType)objc_msgSendSuper;             \
        msgSendFunc(&super, selector, __VA_ARGS__);                             \
    }                                                                           \
    while(0)

#define UNITY_OBJC_CALL_ON_SELF(self_, selector, selectorType, ...) \
    do                                                              \
    {                                                               \
        selectorType msgSendFunc = (selectorType)objc_msgSend;      \
        msgSendFunc(self_, selector, __VA_ARGS__);                  \
    }                                                               \
    while(0)


// method type encoding for methods we override
// to get this you need to do: method_getTypeEncoding(class_getInstanceMethod(class, sel)) or method_getTypeEncoding(class_getClassMethod(class, sel))
#define UIView_LayerClass_Enc "#8@0:4"
#define UIViewController_viewWillTransitionToSize_Enc "v40@0:8{CGSize=dd}16@32"
#define UIViewController_willRotateToInterfaceOrientation_Enc "v32@0:8q16d24"
#define UIViewController_didRotateFromInterfaceOrientation_Enc "v24@0:8q16"
#define UIViewController_supportedInterfaceOrientations_Enc "Q16@0:8"
#define UIViewController_prefersStatusBarHidden_Enc "B16@0:8"
#define CADisplayLink_setPreferredFramesPerSecond_Enc "v24@0:8q16"
#define UIScreen_nativeScale_Enc "d16@0:8"
#define UIScreen_maximumFramesPerSecond_Enc "q16@0:8"
#define MTLDevice_supportsTextureSampleCount_Enc "c24@0:8Q16"
#define MTLTextureDescriptor_setUsage_Enc "v24@0:8Q16"
#define MTLTextureDescriptor_usage_Enc "Q16@0:8"
#define AVPlayerViewController_setAllowsPictureInPicturePlayback_Enc "v20@0:8B16"
#define UIView_safeAreaInsets_Enc "{UIEdgeInsets=dddd}16@0:8"
