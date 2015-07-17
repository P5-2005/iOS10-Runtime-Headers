/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoBrowserController : UIViewController <PHAssetCollectionDataSource, PLDismissableViewController, PLPhotoBrowserControllerDelegate, PUAvalancheReviewControllerDelegate, PUCollectionViewLayoutProvider, PUEditPluginSessionDelegate, PUPhotoEditViewControllerDelegate, PUPhotoLibraryUIChangeObserver, PUPhotosSharingTransitionDelegate, PUPhotosSharingViewControllerDelegate, PUVideoEditPluginSessionDataSource, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    PUAirplayRoutePickerViewController *__airplayPickerViewController;
    _UIContentUnavailableView *__emptyPlaceholderView;
    id __lockScreenSharingObserver;
    PUSlideshowSettingsViewController *__slideshowSettingsViewController;
    unsigned int _allowedActions;
    PHFetchResult *_assetCollections;
    PUPhotoBrowserTitleView *_assetTitleView;
    BOOL _assetTitleViewWantsSubtitle;
    PUAvalancheReviewController *_avalancheReviewController;
    BOOL _browserIsPaging;
    BOOL _browserIsScrubbing;
    NSString *_cachedVideoAssetIdentifier;
    int _cachedVideoEditActionType;
    PUAirplayRoute *_currentAirplayRoute;
    PUSlideshowSettings *_deferredSlideshowSettings;
    <PUPhotoBrowserControllerDelegate> *_delegate;
    NSMutableDictionary *_downloadEndingProgressIndicatorViews;
    NSMutableDictionary *_downloadProgressIndicatorViews;
    NSMutableDictionary *_downloadResourcesRequests;
    BOOL _editingComments;
    BOOL _editingVideo;
    PLCloudSharedComment *_initialComment;
    BOOL _isBrowsingFavorites;
    BOOL _isDeletingCurrentAsset;
    BOOL _isTransitioningShareSheet;
    PLPhotoBrowserController *_legacyPhotoBrowserController;
    NSDictionary *_navbarButtons;
    BOOL _overlaysVisible;
    BOOL _photoBackgroundHidden;
    PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
    id /* block */ _ppt_onDidEndPagingBlock;
    PUPhotosSharingViewController *_sharingViewController;
    BOOL _shouldShowOverlaysWhenViewAppears;
    PLSlalomRegionEditor *_slalomRegionEditor;
    PUPhotoBrowserControllerSpec *_spec;
    NSMutableSet *_stableFavoriteIds;
    NSDictionary *_toolbarButtons;
    PUVideoEditPluginSession *_videoEditPluginSession;
    UIMovieScrubber *_videoScrubber;
    UIView *_videoScrubberClipView;
    _UINavigationControllerPalette *_videoScrubberPalette;
}

@property (setter=_setAirplayPickerViewController:, nonatomic) PUAirplayRoutePickerViewController *_airplayPickerViewController;
@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) _UIContentUnavailableView *_emptyPlaceholderView;
@property (setter=_setLockScreenSharingObserver:, nonatomic, retain) id _lockScreenSharingObserver;
@property (setter=_setSlideshowSettingsViewController:, nonatomic) PUSlideshowSettingsViewController *_slideshowSettingsViewController;
@property (nonatomic) unsigned int allowedActions;
@property (nonatomic, readonly) PHFetchResult *assetCollections;
@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (nonatomic, readonly) UIView *commentsView;
@property (nonatomic, readonly) PHAsset *currentAsset;
@property (nonatomic, readonly) PHAssetCollection *currentAssetContainer;
@property (nonatomic, readonly) PHAssetCollection *currentAssetContainerForZoomTransition;
@property (nonatomic, readonly) PHAsset *currentAssetForZoomTransition;
@property (nonatomic, readonly) PLPhotoTileViewController *currentTileForTransitions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoBrowserControllerDelegate> *delegate;
@property (nonatomic) BOOL deletesDuplicatesWhenNecessary;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PLCloudSharedComment *initialComment;
@property (nonatomic) BOOL isBrowsingFavorites;
@property (getter=areOverlaysVisible, setter=_setOverlaysVisible:, nonatomic) BOOL overlaysVisible;
@property (nonatomic, readonly) UIColor *photoBackgroundColor;
@property (getter=isPhotoBackgroundHidden, nonatomic) BOOL photoBackgroundHidden;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } photoFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } photoFrameForZoomTransition;
@property (nonatomic, readonly) UIImage *photoImage;
@property (nonatomic, readonly) UIImage *photoImageForZoomTransition;
@property (setter=ppt_setOnDidEndPagingBlock:, nonatomic, copy) id /* block */ ppt_onDidEndPagingBlock;
@property (nonatomic) BOOL shouldPlayVideoWhenViewAppears;
@property (nonatomic) BOOL shouldShowOverlaysWhenViewAppears;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_airplayPickerViewController;
- (BOOL)_allowsActions:(unsigned int)arg1;
- (void)_animateInPalette;
- (void)_animateOutPalette;
- (void)_applicationWillEnterForgroundHandler:(id)arg1;
- (id)_assetCollectionsDataSourceForCurrentModalViewController;
- (void)_beginEditingCurrentAsset:(id)arg1;
- (BOOL)_canShowCommentsForCurrentAsset;
- (BOOL)_canStartEditSession;
- (void)_cancelTrimmedVideo:(id)arg1;
- (void)_createVideoEditPluginSessionIfNeeded;
- (BOOL)_currentAssetIsMedia;
- (BOOL)_currentAssetIsRemote;
- (id)_currentFavoriteItemIdentifier;
- (BOOL)_currentItemHasAudio;
- (id)_currentMediaItemIdentifier;
- (id)_currentTile;
- (void)_deferSlideshowWithSettings:(id)arg1;
- (void)_deleteCurrentItem:(id)arg1;
- (void)_didFinishDownloadingAssetWithIdentifier:(id)arg1 success:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4;
- (BOOL)_dismissLegacyPopovers;
- (void)_dismissSharingViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_displayShareSheet:(id)arg1;
- (void)_displayShareSheet:(id)arg1 completion:(id /* block */)arg2;
- (void)_displayShareSheet:(id)arg1 completion:(id /* block */)arg2 isLockScreenCamera:(BOOL)arg3;
- (void)_downloadCurrentItem:(id)arg1;
- (int)_editActionTypeForCurrentAsset;
- (id)_emptyPlaceholderView;
- (void)_endEditingCurrentAsset;
- (void)_enterReviewMode:(id)arg1;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(BOOL)arg2 handler:(id /* block */)arg3;
- (void)_finalizeSharingViewControllerDismiss;
- (void)_finishSlideshowConfig:(id)arg1 withSettings:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(BOOL)arg3;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handleEditWithPluginItem:(id)arg1;
- (void)_handleHideMenuItem:(id)arg1;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (void)_handleRevertItem:(id)arg1;
- (void)_hideComments;
- (id)_initialSlideshowSettings;
- (BOOL)_isDownloadingAssetWithIdentifier:(id)arg1;
- (BOOL)_isTrashBin;
- (id)_legacyPhotoBrowserControllerForSubclassesOnly;
- (id)_lockScreenSharingObserver;
- (id)_navbarButtonForIdentifier:(id)arg1;
- (void)_navigateToAllPhotos;
- (void)_pauseCurrentMedia:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_photoFrameForTileController:(id)arg1;
- (void)_playCurrentMedia:(id)arg1;
- (void)_prepareForSharingViewControllerDismiss:(id)arg1;
- (void)_pushPhotoEditorForAsset:(id)arg1;
- (void)_removeAdjacentCommentsTables;
- (void)_removeCurrentItem:(id)arg1;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(id /* block */)arg4;
- (void)_returnToCamera:(id)arg1;
- (void)_revealComments;
- (void)_saveTrimmedVideo:(id)arg1;
- (void)_setAirplayPickerViewController:(id)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setLockScreenSharingObserver:(id)arg1;
- (void)_setOverlaysVisible:(BOOL)arg1;
- (void)_setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2 updateBarsVisibility:(BOOL)arg3;
- (void)_setOverlaysVisibleForModalTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setSlideshowSettingsViewController:(id)arg1;
- (void)_setupStandardNavigationItem:(id)arg1;
- (void)_showAirplayPicker:(id)arg1;
- (void)_showAllPhotos:(id)arg1;
- (id)_slideshowSettingsViewController;
- (id)_standardLeftNavigationItemsForCurrentAsset;
- (id)_standardRightNavigationItemsForCurrentAsset;
- (id)_standardToolbarItemsForCurrentAsset;
- (void)_startDownloadingAsset:(id)arg1;
- (void)_startLocalSlideshowWithSettings:(id)arg1;
- (void)_startRemoteSlideshowWithSettings:(id)arg1;
- (void)_startSlideshow:(id)arg1;
- (void)_stopDownloadingAssetWithIdentifier:(id)arg1;
- (int)_tileCountForCurrentModalViewController;
- (void)_toggleFavorite:(id)arg1;
- (id)_toolbarButtonForIdentifier:(id)arg1;
- (void)_updateAssetTitleView;
- (void)_updateBackButtonItem;
- (void)_updateBackgroundColor;
- (void)_updateBarItemsAnimated:(BOOL)arg1;
- (void)_updateBarsForCommentsEditingAnimated:(BOOL)arg1;
- (void)_updateBarsForVideoEditingAnimated:(BOOL)arg1;
- (void)_updateCenterOverlays;
- (void)_updateCurrentRoute:(id)arg1;
- (void)_updateDownloadProgressIndicatorForAssetWithIdentifier:(id)arg1;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (BOOL)_updateSpec;
- (void)_updateVideoEditActionType;
- (void)_updateVideoScrubberOffset;
- (void)_updateVideoScrubberToScrubberForCurrentVideoViewDelayed:(BOOL)arg1;
- (void)_updateVideoScrubberVisibility;
- (void)_updateVideoViewAttachments:(id)arg1;
- (id)_videoTrimSaveItem;
- (unsigned int)allowedActions;
- (BOOL)areOverlaysVisible;
- (id)assetCollections;
- (id)assetCollectionsFetchResult;
- (id)assetsInAssetCollection:(id)arg1;
- (void)avalancheReviewControllerDidComplete:(id)arg1;
- (id)cachingImageManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)commentsView;
- (void)commitPendingUpdatesWithCompletionHandler:(id /* block */)arg1;
- (id)contentScrollView;
- (void)copy:(id)arg1;
- (id)currentAsset;
- (id)currentAssetContainer;
- (id)currentAssetContainerForZoomTransition;
- (id)currentAssetForZoomTransition;
- (id)currentTileForTransitions;
- (void)dealloc;
- (id)delegate;
- (BOOL)deletesDuplicatesWhenNecessary;
- (void)didEndNavigationOperation:(int)arg1 inNavigationController:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(id /* block */)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (BOOL)editPluginSessionCanRevertToOriginal:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSpec:(id)arg1 assetAtIndexPath:(id)arg2 assetCollections:(id)arg3 dataSource:(id)arg4;
- (id)initialComment;
- (BOOL)isBrowsingFavorites;
- (BOOL)isEmpty;
- (BOOL)isPhotoBackgroundHidden;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)loadView;
- (id)photoBackgroundColor;
- (void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2;
- (void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2;
- (id)photoBrowserController:(id)arg1 customCenterOverlayForTileViewController:(id)arg2;
- (void)photoBrowserController:(id)arg1 didFailToStreamPhotoToCurrentRouteWithError:(id)arg2 retryBlock:(id /* block */)arg3;
- (BOOL)photoBrowserController:(id)arg1 isPhotoDeleteForSender:(id)arg2;
- (void)photoBrowserController:(id)arg1 overlayVisibilityWillChangeTo:(BOOL)arg2 withDuration:(double)arg3;
- (void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2;
- (void)photoBrowserController:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)photoBrowserController:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)photoBrowserController:(id)arg1 setRemakingVideo:(BOOL)arg2;
- (void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(BOOL)arg2 animated:(BOOL)arg3;
- (void)photoBrowserController:(id)arg1 tileController:(id)arg2 didAppear:(BOOL)arg3;
- (void)photoBrowserController:(id)arg1 tileController:(id)arg2 videoViewDidCreateAttachments:(id)arg3;
- (void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2;
- (void)photoBrowserController:(id)arg1 willShowMenuController:(id)arg2;
- (void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1;
- (void)photoBrowserControllerDidDeleteCurrentAsset:(id)arg1;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerDidScroll:(id)arg1;
- (void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(BOOL)arg2;
- (id)photoBrowserControllerMakeNavigationBar:(id)arg1;
- (id)photoBrowserControllerMakeToolbar:(id)arg1;
- (BOOL)photoBrowserControllerOverlaysVisible:(id)arg1;
- (id)photoBrowserControllerRequestsAirPlayRemoteSlideshowForCurrentRoute:(id)arg1;
- (id)photoBrowserControllerRequestsCurrentAirplayRouteDictionary:(id)arg1;
- (id)photoBrowserControllerRequestsMediaControlClientForCurrentRoute:(id)arg1;
- (BOOL)photoBrowserControllerShouldHandleLibraryChangesInternally:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPlayingVideo:(id)arg1;
- (void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
- (void)photoBrowserControllerWillDeleteCurrentAsset:(id)arg1;
- (void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
- (void)photoEditController:(id)arg1 didFinishWithSavedChanges:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoFrameForZoomTransition;
- (id)photoImage;
- (id)photoImageForZoomTransition;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (struct CGPoint { float x1; float x2; })photosSharingTransition:(id)arg1 contentOffsetForKeyAssetIndexPath:(id)arg2 inAssetCollectionsDataSource:(id)arg3;
- (id)photosSharingTransition:(id)arg1 layoutForKeyAssetIndexPath:(id)arg2 inAssetCollectionsDataSource:(id)arg3;
- (void)photosSharingTransition:(id)arg1 setVisibility:(BOOL)arg2 forKeyAssetIndexPath:(id)arg3 inAssetCollectionsDataSource:(id)arg4;
- (id)photosSharingTransition:(id)arg1 viewForTransitionWithAssetCollectionsDataSource:(id)arg2;
- (void)photosSharingTransition:(id)arg1 willAnimatePresent:(BOOL)arg2;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(BOOL)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(BOOL)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)ppt_dismissShareSheetWithCompletion:(id /* block */)arg1;
- (id)ppt_legacyPhotoBrowserIndexPath;
- (id /* block */)ppt_onDidEndPagingBlock;
- (void)ppt_presentShareSheetWithCompletion:(id /* block */)arg1;
- (BOOL)ppt_scrollToPhotoWithRelativeIndex:(int)arg1 completion:(id /* block */)arg2;
- (BOOL)ppt_scrubToAbsoluteIndex:(id)arg1 immediately:(BOOL)arg2;
- (void)ppt_setIsScrubbing:(BOOL)arg1;
- (void)ppt_setOnDidEndPagingBlock:(id /* block */)arg1;
- (void)ppt_setOverlaysVisible:(BOOL)arg1;
- (id)ppt_sharingViewController;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(int)arg2 transitionCoordinator:(id)arg3;
- (id)pu_debugRows;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)setAllowedActions:(unsigned int)arg1;
- (void)setAssetCollections:(id)arg1 dataSource:(id)arg2 currentImageIndexPath:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(BOOL)arg1;
- (void)setDoneItem:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInitialComment:(id)arg1;
- (void)setIsBrowsingFavorites:(BOOL)arg1;
- (void)setPhotoBackgroundHidden:(BOOL)arg1;
- (void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1;
- (void)setShouldShowOverlaysWhenViewAppears:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldPlayVideoWhenViewAppears;
- (BOOL)shouldShowOverlaysWhenViewAppears;
- (void)startSlideshowWithSettings:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginNavigationOperation:(int)arg1 inNavigationController:(id)arg2;

@end