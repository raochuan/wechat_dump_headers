//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "MMDatabaseRecoverMgrDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMDBRecoverContext, MMLoadingView, MMTimer, NSString, UIButton, UILabel;

@interface MMDBRecoverViewController : MMWindowViewController <MMDatabaseRecoverMgrDelegate, UIAlertViewDelegate>
{
    MMTimer *_progressTimer;
    float _progress;
    _Bool m_hasClickCancel;
    _Bool m_hasClickConfirm;
    _Bool m_isLowSpace;
    MMDBRecoverContext *m_recoverContext;
    MMLoadingView *m_loadingView;
    NSString *m_tip;
    UILabel *m_tipLabel;
    unsigned long long m_suggestSize;
    unsigned long long m_restSize;
    MMTimer *m_timer;
    UIButton *m_btnConfirm;
}

@property(retain, nonatomic) UIButton *m_btnConfirm; // @synthesize m_btnConfirm;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer;
@property(nonatomic) unsigned long long m_restSize; // @synthesize m_restSize;
@property(nonatomic) unsigned long long m_suggestSize; // @synthesize m_suggestSize;
@property(nonatomic) _Bool m_isLowSpace; // @synthesize m_isLowSpace;
@property(nonatomic) _Bool m_hasClickConfirm; // @synthesize m_hasClickConfirm;
@property(nonatomic) _Bool m_hasClickCancel; // @synthesize m_hasClickCancel;
@property(retain, nonatomic) UILabel *m_tipLabel; // @synthesize m_tipLabel;
@property(retain, nonatomic) NSString *m_tip; // @synthesize m_tip;
@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) MMDBRecoverContext *m_recoverContext; // @synthesize m_recoverContext;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAutoRecoverEndWithResult:(_Bool)arg1 errorMsg:(id)arg2;
- (void)checkIsLowSpace;
- (void)setupData;
- (void)stopLoading;
- (void)startLoading;
- (void)onRecoverProgressUpdate:(float)arg1;
- (void)updateProgress;
- (id)lowFreeDiskTip;
- (void)delayExecuteConfirm;
- (void)onConfirm;
- (void)onCancel;
- (void)onStopRenewLowSpaceTipLoading;
- (void)renewLowSpaceTip;
- (void)hideRecoverView;
- (void)showRecoverView;
- (void)updateConfirmBtnStatus;
- (void)setupView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

