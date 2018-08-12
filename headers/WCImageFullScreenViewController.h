//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "EditImageForwardAndEditLogicDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMExposeViewControllerDelegate.h"
#import "ShareDataToOpenSDKControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCImageFullScreenViewContainerDelegate.h"
#import "WCPayControlMgrExt.h"
#import "WCShareAuthViewControllerExt.h"
#import "scrollViewDelegate.h"

@class EditImageForwardAndEditLogicController, ForwardMessageLogicController, MMScrollView, NSArray, NSMutableArray, NSString, ShareDataToOpenSDKController, UIPageControl, UIView;

@interface WCImageFullScreenViewController : FullScreenViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageFullScreenViewContainerDelegate, IVOIPUILogicMgrExt, MMExposeViewControllerDelegate, ShareDataToOpenSDKControllerDelegate, ForwardMessageLogicDelegate, WCShareAuthViewControllerExt, EditImageForwardAndEditLogicDelegate, WCPayControlMgrExt>
{
    UIView *m_fakeScreenView;
    NSArray *m_arrOriginView;
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSArray *m_arrMediaDataWrap;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    _Bool m_hasScroll;
    long long m_lastDeviceOrientation;
    _Bool m_isAnimationShowing;
    _Bool m_isRotating;
    _Bool m_forbidPreloadImg;
    ShareDataToOpenSDKController *m_shareDataToOpenSDKController;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned int _startTime;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    _Bool m_isAllowRotate;
    double m_lastScreenWidth;
    id <WCImageFullScreenViewControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCImageFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
- (void).cxx_destruct;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onForwardMessageCancelInEditView;
- (void)onForwardMessageSendOKInEditView;
- (double)onBeforeForwardMessageAndReturnDelayTime:(id)arg1;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onShareToOpenSDKWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)onPushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)onGetViewController;
- (void)onExposeWithDataItem:(id)arg1;
- (void)onContainerDidZoomWithScale:(double)arg1 andIndex:(unsigned int)arg2;
- (void)onLongPressedEditImage:(id)arg1 atPath:(id)arg2 withFavItem:(id)arg3 editAtFirst:(_Bool)arg4;
- (void)onLongPressedWithMediaItem:(id)arg1;
- (void)onLongPressedAddFav:(id)arg1;
- (void)captureScreen;
- (void)hideWithoutAnimation;
- (void)animationHideWithRotate;
- (void)hideVCAnimation;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStop;
- (void)onWindowHide;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)animationHideStop;
- (_Bool)shouldHideContainerOnRotate;
- (_Bool)isContainerVisible:(id)arg1;
- (void)shouldHideFullScreenForWCPay;
- (void)onTryHideWCImageFullScreen;
- (void)onShareDataToOpenSDKCancel;
- (void)onExposeComplete;
- (void)onExposeCancel;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (id)getVisibleViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getCurMediaItemWrap;
- (void)downloadImage;
- (void)setMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4;
- (void)setMediaDataArray:(id)arg1 mediaDataWrapArray:(id)arg2 originView:(id)arg3 index:(unsigned int)arg4 needEdit:(_Bool)arg5;
- (void)showVCAnimation;
- (void)resetScrollView;
- (void)clearStatus;
- (void)viewDidLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
