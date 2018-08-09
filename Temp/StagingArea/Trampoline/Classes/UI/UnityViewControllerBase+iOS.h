#pragma once

@interface UnityViewControllerBase (iOS)
- (BOOL)shouldAutorotate;

- (BOOL)prefersStatusBarHidden;
- (UIStatusBarStyle)preferredStatusBarStyle;
@end

// for better handling of user-imposed screen orientation we will have specific ViewController implementations

// view controllers constrained to one orientation

@interface UnityPortraitOnlyViewController : UnityViewControllerBase            {}
@end
@interface UnityPortraitUpsideDownOnlyViewController : UnityViewControllerBase  {}
@end
@interface UnityLandscapeLeftOnlyViewController : UnityViewControllerBase       {}
@end
@interface UnityLandscapeRightOnlyViewController : UnityViewControllerBase      {}
@end

// this is default view controller implementation (autorotation enabled)

@interface UnityDefaultViewController : UnityViewControllerBase                 {}
@end


// this is helper to add proper rotation handling methods depending on ios version
extern "C" void AddViewControllerRotationHandling(Class class_, IMP willRotateToInterfaceOrientation, IMP didRotateFromInterfaceOrientation, IMP viewWillTransitionToSize);
extern "C" void AddViewControllerDefaultRotationHandling(Class class_);

NSUInteger EnabledAutorotationInterfaceOrientations();
