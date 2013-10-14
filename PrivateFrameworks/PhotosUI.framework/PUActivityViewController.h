/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, PUActivityItemSourceController, <PUActivityViewControllerDelegate>, PUPhotoSharingManager, PLProgressView;

@interface PUActivityViewController : UIActivityViewController <PUPhotoSharingManagerDelegate> {
    PUPhotoSharingManager *_sharingManager;
    struct __CFString { } *_aggregateKey;
    NSArray *_photosActivities;
    PUActivityItemSourceController *_itemSourceController;
    <PUActivityViewControllerDelegate> *_delegate;
    int __numberOfRemakesNeeded;
    int __numberOfRemakesCompleted;
    float __currentRemakerProgress;
    PLProgressView *__remakerProgressView;
}

@property(readonly) NSArray * photosActivities;
@property(readonly) PUActivityItemSourceController * itemSourceController;
@property <PUActivityViewControllerDelegate> * delegate;
@property int _numberOfRemakesNeeded;
@property int _numberOfRemakesCompleted;
@property float _currentRemakerProgress;
@property(retain) PLProgressView * _remakerProgressView;

+ (void)trackUserActivity:(id)arg1 forAssets:(id)arg2;
+ (id)_defaultActivityTypeOrder;
+ (id)photosApplicationActivities;

- (void)set_remakerProgressView:(id)arg1;
- (id)_remakerProgressView;
- (void)set_currentRemakerProgress:(float)arg1;
- (float)_currentRemakerProgress;
- (void)set_numberOfRemakesCompleted:(int)arg1;
- (int)_numberOfRemakesCompleted;
- (void)set_numberOfRemakesNeeded:(int)arg1;
- (int)_numberOfRemakesNeeded;
- (void)activity:(id)arg1 showRemakerProgressView:(id)arg2;
- (void)sharingManager:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (void)_prepareVideoRemakerProgressForActivity:(id)arg1;
- (void)_puActivity:(id)arg1 didComplete:(BOOL)arg2;
- (void)_showRemakerProgressView:(id)arg1;
- (id)itemSourceController;
- (void)_removeVideoRemakerProgressView;
- (void)_activityItemSourceVideoRemakingProgressChanged:(id)arg1;
- (void)_activityItemSourceVideoRemakingDidEnd:(id)arg1;
- (id)photosActivities;
- (void)setAggregateKey:(struct __CFString { }*)arg1;
- (id)initWithManagedAssets:(id)arg1 photosApplicationActivities:(id)arg2;
- (void)_cancel;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)setCompletionHandler:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (void)_performActivity:(id)arg1;

@end