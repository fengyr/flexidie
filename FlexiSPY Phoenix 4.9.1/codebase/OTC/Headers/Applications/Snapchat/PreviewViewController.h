//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "UIViewController.h"
//
//#import "DrawingDelegate.h"
//#import "SCCaptionManagerDelegate.h"
//#import "SCManageAdditionalServicesDelegate.h"
//#import "SCPromptMediaFilterViewDelegate.h"
//#import "SCSwipeFilterViewDelegate.h"
//#import "SnapVideoFilterSaveDelegate.h"
//#import "UIAlertViewDelegate.h"
//#import "UIGestureRecognizerDelegate.h"
//#import "UITextFieldDelegate.h"

@class AVPlayerLayer, DrawingButton, EphemeralMedia, LoadingView, NSMutableDictionary, NSString, NSURL, SCCaptionManager, SCDrawingView, SCGrowingButton, SCLocationController, SCSendArrow, SCSwipeFilterView, SendViewController, SnapVideoFilter, TimerButton, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;

@interface PreviewViewController : UIViewController // <UITextFieldDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate, DrawingDelegate, SCCaptionManagerDelegate, SCSwipeFilterViewDelegate, SnapVideoFilterSaveDelegate, SCPromptMediaFilterViewDelegate, SCManageAdditionalServicesDelegate>
{
    BOOL _fromGallery;
    BOOL _quickSend;
    BOOL _alertShown;
    BOOL _alreadyCanceledPreview;
    BOOL _audioEnabled;
    BOOL _audioPresent;
    BOOL _camera;
    BOOL _captionLogged;
    BOOL _editingCaption;
    BOOL _didPopularize;
    BOOL _drawing;
    BOOL _hasDeco;
    BOOL _mirrorVideo;
    BOOL _rotating;
    BOOL _savingVideo;
    BOOL _shouldRotateAfterCompletion;
    BOOL _showingStoriesAlertView;
    BOOL _videoSwipeFilterSetupCompleted;
    id <SendSnapNavigationControllerDelegate> _delegate;
    int _snapSource;
    float _initialCaptionVertical;
    SCGrowingButton *_audioButton;
    NSString *_captionText;
    UILabel *_captionHelp;
    SCCaptionManager *_captionManager;
    SCGrowingButton *_captionModeButton;
    UIView *_containerView;
    int _currentOrientation;
    DrawingButton *_drawingButton;
    UIImageView *_drawingOverlayView;
    SCDrawingView *_drawingView;
    EphemeralMedia *_ephemeralMedia;
    UIImageView *_imageView;
    LoadingView *_loadingView;
    SCLocationController *_locationController;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    int _nextOrientation;
    UIView *_optionsView;
    AVPlayerLayer *_playerLayer;
    NSMutableDictionary *_replyParameters;
    NSString *_replyUsername;
    SCGrowingButton *_saveButton;
    SCSendArrow *_sendButton;
    SendViewController *_sendVC;
    SnapVideoFilter *_snapVideoFilter;
    UIImage *_sourceImage;
    SCGrowingButton *_storyButton;
    SCSwipeFilterView *_swipeFilterView;
    UILabel *_swipeHelp;
    TimerButton *_timerButton;
    NSURL *_videoURL;
    SCGrowingButton *_xButton;
    UIView *_decoOverlay;
    UIImageView *_xDeco;
    UIImageView *_bottomOptionsDeco;
    UIImageView *_sendDeco;
    UIImageView *_penDeco;
    UIImageView *_captionModeButtonDeco;
}

@property(retain, nonatomic) UIImageView *captionModeButtonDeco; // @synthesize captionModeButtonDeco=_captionModeButtonDeco;
@property(retain, nonatomic) UIImageView *penDeco; // @synthesize penDeco=_penDeco;
@property(retain, nonatomic) UIImageView *sendDeco; // @synthesize sendDeco=_sendDeco;
@property(retain, nonatomic) UIImageView *bottomOptionsDeco; // @synthesize bottomOptionsDeco=_bottomOptionsDeco;
@property(retain, nonatomic) UIImageView *xDeco; // @synthesize xDeco=_xDeco;
@property(retain, nonatomic) UIView *decoOverlay; // @synthesize decoOverlay=_decoOverlay;
@property(retain, nonatomic) SCGrowingButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) BOOL videoSwipeFilterSetupCompleted; // @synthesize videoSwipeFilterSetupCompleted=_videoSwipeFilterSetupCompleted;
@property(retain, nonatomic) TimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property(retain, nonatomic) UILabel *swipeHelp; // @synthesize swipeHelp=_swipeHelp;
@property(retain, nonatomic) SCSwipeFilterView *swipeFilterView; // @synthesize swipeFilterView=_swipeFilterView;
@property(retain, nonatomic) SCGrowingButton *storyButton; // @synthesize storyButton=_storyButton;
@property(nonatomic) BOOL showingStoriesAlertView; // @synthesize showingStoriesAlertView=_showingStoriesAlertView;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) SnapVideoFilter *snapVideoFilter; // @synthesize snapVideoFilter=_snapVideoFilter;
@property(nonatomic) BOOL shouldRotateAfterCompletion; // @synthesize shouldRotateAfterCompletion=_shouldRotateAfterCompletion;
@property(retain, nonatomic) SendViewController *sendVC; // @synthesize sendVC=_sendVC;
@property(retain, nonatomic) SCSendArrow *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) BOOL savingVideo; // @synthesize savingVideo=_savingVideo;
@property(retain, nonatomic) SCGrowingButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) BOOL rotating; // @synthesize rotating=_rotating;
@property(retain, nonatomic) NSString *replyUsername; // @synthesize replyUsername=_replyUsername;
@property(retain, nonatomic) NSMutableDictionary *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) UIView *optionsView; // @synthesize optionsView=_optionsView;
@property(nonatomic) int nextOrientation; // @synthesize nextOrientation=_nextOrientation;
@property(nonatomic) BOOL mirrorVideo; // @synthesize mirrorVideo=_mirrorVideo;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SCLocationController *locationController; // @synthesize locationController=_locationController;
@property(retain, nonatomic) LoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL hasDeco; // @synthesize hasDeco=_hasDeco;
@property(retain, nonatomic) EphemeralMedia *ephemeralMedia; // @synthesize ephemeralMedia=_ephemeralMedia;
@property(retain, nonatomic) SCDrawingView *drawingView; // @synthesize drawingView=_drawingView;
@property(retain, nonatomic) UIImageView *drawingOverlayView; // @synthesize drawingOverlayView=_drawingOverlayView;
@property(retain, nonatomic) DrawingButton *drawingButton; // @synthesize drawingButton=_drawingButton;
@property(nonatomic) BOOL drawing; // @synthesize drawing=_drawing;
@property(nonatomic) BOOL didPopularize; // @synthesize didPopularize=_didPopularize;
@property(nonatomic) int currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL editingCaption; // @synthesize editingCaption=_editingCaption;
@property(retain, nonatomic) SCGrowingButton *captionModeButton; // @synthesize captionModeButton=_captionModeButton;
@property(retain, nonatomic) SCCaptionManager *captionManager; // @synthesize captionManager=_captionManager;
@property(nonatomic) BOOL captionLogged; // @synthesize captionLogged=_captionLogged;
@property(retain, nonatomic) UILabel *captionHelp; // @synthesize captionHelp=_captionHelp;
@property(retain, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(nonatomic) BOOL camera; // @synthesize camera=_camera;
@property(nonatomic) BOOL audioPresent; // @synthesize audioPresent=_audioPresent;
@property(nonatomic) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(retain, nonatomic) SCGrowingButton *audioButton; // @synthesize audioButton=_audioButton;
@property(nonatomic) BOOL alreadyCanceledPreview; // @synthesize alreadyCanceledPreview=_alreadyCanceledPreview;
@property(nonatomic) BOOL alertShown; // @synthesize alertShown=_alertShown;
@property(nonatomic) float initialCaptionVertical; // @synthesize initialCaptionVertical=_initialCaptionVertical;
@property(nonatomic) int snapSource; // @synthesize snapSource=_snapSource;
@property(nonatomic) BOOL quickSend; // @synthesize quickSend=_quickSend;
@property(nonatomic) BOOL fromGallery; // @synthesize fromGallery=_fromGallery;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)logSwipeFilterSwipesForEvent:(id)arg1;
- (void)handleFiltersEnabled;
- (void)turnOnFiltersButtonPressed:(id)arg1;
- (void)swipeViewDidEndDecelerating:(id)arg1;
- (void)swipeFilterViewDidScroll:(id)arg1;
- (BOOL)swipeFilterViewCanScroll:(id)arg1;
- (void)removeFilterFromSwipeFilterView:(id)arg1;
- (BOOL)removeFilterNameFromSwipeFilterView:(id)arg1;
- (void)removeVisualFiltersFromSwipeFilterView;
- (void)smartFilterUpdated:(id)arg1;
- (void)addSmartFiltersToSwipeFilterView:(id)arg1;
- (void)addVisualFiltersToSwipeFilterView;
- (id)videoSwipeFilterView;
- (id)imageSwipeFilterView;
- (BOOL)shouldUseAVPlayerForVideo;
- (BOOL)deviceMeetsMinimumRequirementForVideoFilters;
- (void)pan:(id)arg1;
- (void)press:(id)arg1;
- (void)tap:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)didEnterCode;
- (void)testSecretCode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setActionButtonsForDrawingHidden:(BOOL)arg1;
- (void)didEndDrawing;
- (void)didStartDrawing;
- (void)didAlterDrawing;
- (void)drawingEnabled:(BOOL)arg1;
- (void)captionTextChanged;
- (void)startedEditingCaption;
- (void)stoppedEditingCaption;
- (BOOL)canStartEditingCaption;
- (BOOL)shouldRotateToOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didRotate:(id)arg1;
- (void)rotateToOrientation:(int)arg1;
- (void)doRotation:(int)arg1;
- (struct CGRect)frameForOrientation:(struct CGRect)arg1 orientation:(int)arg2 anchorLeft:(BOOL)arg3 anchorTop:(BOOL)arg4;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setVolume:(float)arg1;
- (void)reshowFilteredVideo;
- (void)showVideo;
- (void)setupDrawingView;
- (void)removeVideo;
- (void)resetVideo;
- (void)setVideo:(id)arg1 front:(BOOL)arg2 audioPresent:(BOOL)arg3;
- (void)exitPreview;
- (void)setImage:(id)arg1 front:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)didFinishSavingSnapToAlbumWithError:(id)arg1 isVideo:(BOOL)arg2;
- (void)setActionButtonsHidden:(BOOL)arg1;
- (void)setActionButtonsEnabled:(BOOL)arg1;
- (void)setUIHiddenAndDisabled:(BOOL)arg1;
- (void)saveVideo;
- (float)videoDuration;
- (void)prepareMedia:(id)arg1;
- (void)prepareEphemeralMedia;
- (float)overlayScaleForVideo;
- (id)overlayImageForVideo;
- (id)getImage:(BOOL)arg1 withOverlay:(BOOL)arg2 withCaption:(BOOL)arg3;
- (id)getImage;
- (void)filterVideoAndSaveToGallery:(BOOL)arg1;
- (void)prepareToFilterVideo;
- (void)isImage:(BOOL)arg1;
- (void)setOpacityForActionButtons:(float)arg1;
- (void)xPressed;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)postStoryDirectly;
- (void)storyPressed;
- (void)resetCaptionViews;
- (void)captionModeButtonPressed;
- (void)savePressed;
- (id)snapSourceToString:(int)arg1;
- (void)presentSend;
- (void)sendPressed;
- (void)resetCaptionModeButtonHiddenState;
- (void)didShowKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (void)audioPressed;
- (void)requestToUseLocation;
- (void)createHelpLabels;
- (BOOL)shouldPopToRootViewController;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (BOOL)shouldDisplayStatusBar;
- (void)addDecoImagesToOverlay;
- (void)loadView;
- (void)setReplyUsername:(id)arg1 parameters:(id)arg2;
- (id)getPageViewParams;
- (id)getPageViewName;
- (id)initWithVideoURL:(id)arg1 captionText:(id)arg2 captionHeight:(float)arg3;
- (id)initWithVideoURL:(id)arg1 captionText:(id)arg2;

@end

