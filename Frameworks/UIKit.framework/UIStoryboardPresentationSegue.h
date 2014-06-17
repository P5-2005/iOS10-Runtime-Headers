/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPresentationSegue : UIStoryboardSegue <UIAdaptivePresentationControllerDelegate> {
    bool_useDefaultModalPresentationStyle;
    bool_useDefaultModalTransitionStyle;
    bool_animates;
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
}

@property bool useDefaultModalPresentationStyle;
@property bool useDefaultModalTransitionStyle;
@property long long modalPresentationStyle;
@property long long modalTransitionStyle;
@property bool animates;


- (bool)animates;
- (bool)useDefaultModalTransitionStyle;
- (bool)useDefaultModalPresentationStyle;
- (void)setAnimates:(bool)arg1;
- (void)setUseDefaultModalTransitionStyle:(bool)arg1;
- (void)setUseDefaultModalPresentationStyle:(bool)arg1;
- (void)perform;
- (void)_prepare;
- (void)setModalTransitionStyle:(long long)arg1;
- (long long)modalTransitionStyle;
- (void)setModalPresentationStyle:(long long)arg1;
- (long long)modalPresentationStyle;

@end