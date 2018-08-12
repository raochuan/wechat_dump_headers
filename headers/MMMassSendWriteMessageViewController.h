//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMassSendExt.h"
#import "IMsgExt.h"
#import "ImageControllerDelegate.h"
#import "MMInputToolViewDelegate.h"
#import "RecordControllerDelegate.h"
#import "StreamVoiceInputViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class ImageController, MMInputToolView, MMLoadingView, MMTableView, MMTimer, NSArray, NSMutableArray, NSString, RecordController, StreamVoiceInputViewController, UIBarButtonItem, UIView, UIWindow;

@interface MMMassSendWriteMessageViewController : MMUIViewController <MMInputToolViewDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, ImageControllerDelegate, IMsgExt, IMassSendExt, RecordControllerDelegate, UIAlertViewDelegate, WCActionSheetDelegate, StreamVoiceInputViewControllerDelegate>
{
    MMTableView *_tableView;
    UIView *_receiverView;
    MMInputToolView *_inputToolView;
    NSMutableArray *_arrContacts;
    ImageController *_imageController;
    RecordController *_recordController;
    MMLoadingView *_loadingView;
    unsigned int _uiTmpRecordID;
    MMTimer *m_popBackTimer;
    unsigned int _iFromSendAgain;
    unsigned int m_currentRecordFormat;
    StreamVoiceInputViewController *m_streamVoiceInputViewController;
    UIWindow *m_coverWindow;
    UIView *m_topBarView;
    UIBarButtonItem *m_voiceStreamCacheLeftBtnItem;
    UIBarButtonItem *m_voiceStreamCacheRightBtnItem;
    NSString *m_voiceStreamTitle;
    NSString *m_voiceStreamSavedText;
}

@property(nonatomic) unsigned int iFromSendAgain; // @synthesize iFromSendAgain=_iFromSendAgain;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
@property(retain, nonatomic) NSArray *arrContacts; // @synthesize arrContacts=_arrContacts;
- (void).cxx_destruct;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)initAllowRecommendApp;
- (void)initAllowWxTalk;
- (void)initAllowVoiceInput;
- (_Bool)isAllowVoiceInput;
- (void)initAllowVoip;
- (void)willDisappear;
- (void)PopBack;
- (void)OnMassSendOK;
- (void)OnMassSendFail:(unsigned int)arg1 WithErrorMsg:(id)arg2;
- (void)stopLoadingAndShowError:(id)arg1 withDelay:(double)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (id)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (unsigned int)CheckVoiceBtnState;
- (void)SetPeakPower:(float)arg1;
- (void)ShowTooLongTips;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (void)HideRecordTips;
- (void)ShowRecording;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendMultiImage;
- (id)getNavigationController;
- (id)getViewController;
- (void)CameraControllerDidTakeSightImage:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAddApp;
- (void)openServiceAppListController;
- (void)openMyFavoritesListController;
- (void)openCameraController;
- (void)openNewMediaBrowser:(id)arg1;
- (void)openMediaBrowser;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)onSendTextMsg:(id)arg1;
- (void)editStreamVoiceTxtDone;
- (void)editStreamVoiceTxtReturn;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardDidShow;
- (void)onStreamVoiceInputButtonClick;
- (void)CancelRecording;
- (void)StopRecording;
- (void)SendRecording;
- (_Bool)StartRecording;
- (void)onSelectLocation;
- (void)onVoipInvite;
- (void)onWXTalk;
- (void)onShareCard;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (id)GetCurrentViewController;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initLoadingView;
- (void)initReceiverView;
- (void)viewDidLayoutSubviews;
- (void)adjustSubviewRects;
- (void)initToolView;
- (void)initTableView;
- (void)MassSend:(id)arg1;
- (void)ShowAlert;
- (id)getAllUsrName;
- (void)viewDidTransitionToNewSize;
- (void)onBack:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

