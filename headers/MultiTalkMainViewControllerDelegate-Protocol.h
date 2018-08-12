//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WXCMultiTalkGroup;

@protocol MultiTalkMainViewControllerDelegate <NSObject>

@optional
- (struct CGRect)onMultiTalkMainViewControllerRequestMinimizeFrame;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerQuitAnimationDidEnd;
- (void)onMultiTalkMainViewControllerQuitAnimationWillStart;
- (void)onMultiTalkMainViewControllerResumeMultiTalkAudio;
- (void)onMultiTalkMainViewControllerHoldMultiTalkAudio;
- (_Bool)onMultiTalkMainViewControllerShouldBlockReceiveVideo;
- (_Bool)onMultiTalkMainViewControllerRequestLocalVideoDeviceStatus;
- (void)onMultiTalkMainViewControllerResubscribe;
- (void)onMultiTalkMainViewControllerRecoverVideoOn:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerCloseVideoSendAndRecv;
- (void)onMultiTalkMainViewControllerUpdateMessageWith:(WXCMultiTalkGroup *)arg1 duration:(unsigned int)arg2 messageId:(unsigned int)arg3;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (void)onMultiTalkMainViewControllerReceiveCancelCall:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerAddNewMemberArray:(NSArray *)arg1 withGroup:(WXCMultiTalkGroup *)arg2;
- (void)onMultiTalkMainViewControllerClickedCollapseButton;
- (void)onMultiTalkMainViewControllerVideoSelected:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerMicButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerSpeakerButtonSeclect:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerReceiveTimeOutWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerCancelJoinWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerRejectWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerAcceptWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerHangupWithGroup:(WXCMultiTalkGroup *)arg1;
@end

