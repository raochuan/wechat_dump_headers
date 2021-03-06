//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IStrangerContactMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayBizF2FTransferControlLogicDelegate.h"
#import "WCPayF2FMiddleViewControllerDelegate.h"
#import "WCPayF2FPayCheckCgiDelegate.h"
#import "WCPayPayMoneyLogicDelegate.h"
#import "WCPaySubLogicDelegate.h"
#import "WCPayTransferMoneyViewControllerDelegate.h"
#import "WCPayTransferPayCheckCgiDelegate.h"
#import "WCPayTransferSelectContactsViewControllerDelegate.h"
#import "WCPayTransferSelectSessionViewControllerDelegate.h"

@class JSEvent, NSString, WCPayBizF2FTransferControlLogic, WCPayF2FMiddlePageSubLogic, WCPayF2FPayCheckCgi, WCPayPayMoneyLogic, WCPayTransferPayCheckCgi;

@interface WCPayTransferMoneyControlLogic : WCPayControlLogic <WCPaySubLogicDelegate, WCPayF2FMiddleViewControllerDelegate, UIAlertViewDelegate, WCPayF2FPayCheckCgiDelegate, WCPayBizF2FTransferControlLogicDelegate, WCPayTransferPayCheckCgiDelegate, WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayTransferSelectContactsViewControllerDelegate, WCPayTransferSelectSessionViewControllerDelegate, WCPayTransferMoneyViewControllerDelegate, WCBaseControlMgrExt, IStrangerContactMgrExt, MMTipsViewControllerDelegate>
{
    WCPayPayMoneyLogic *m_payLogic;
    int m_enWCPayTransferMoneyControlLogicScene;
    NSString *m_nsA8KeyResponseUrl;
    JSEvent *m_jsEvent;
    _Bool _disableEditMoney;
    _Bool _stopFromBizF2FLogic;
    unsigned int _doubleCheckAmount;
    unsigned int _m_dynamicCodeSource;
    NSString *_curAlertRightUrl;
    WCPayF2FPayCheckCgi *_f2fPayCheckCgi;
    WCPayBizF2FTransferControlLogic *_bizF2FTransferLogic;
    WCPayTransferPayCheckCgi *_transferPayCheckCgi;
    NSString *_doubleCheckWording;
    NSString *_interruptDesc;
    WCPayF2FMiddlePageSubLogic *_m_middlePageSubLogic;
}

@property(nonatomic) unsigned int m_dynamicCodeSource; // @synthesize m_dynamicCodeSource=_m_dynamicCodeSource;
@property(retain, nonatomic) WCPayF2FMiddlePageSubLogic *m_middlePageSubLogic; // @synthesize m_middlePageSubLogic=_m_middlePageSubLogic;
@property(retain, nonatomic) NSString *interruptDesc; // @synthesize interruptDesc=_interruptDesc;
@property(nonatomic) unsigned int doubleCheckAmount; // @synthesize doubleCheckAmount=_doubleCheckAmount;
@property(retain, nonatomic) NSString *doubleCheckWording; // @synthesize doubleCheckWording=_doubleCheckWording;
@property(retain, nonatomic) WCPayTransferPayCheckCgi *transferPayCheckCgi; // @synthesize transferPayCheckCgi=_transferPayCheckCgi;
@property(nonatomic) _Bool stopFromBizF2FLogic; // @synthesize stopFromBizF2FLogic=_stopFromBizF2FLogic;
@property(retain, nonatomic) WCPayBizF2FTransferControlLogic *bizF2FTransferLogic; // @synthesize bizF2FTransferLogic=_bizF2FTransferLogic;
@property(retain, nonatomic) WCPayF2FPayCheckCgi *f2fPayCheckCgi; // @synthesize f2fPayCheckCgi=_f2fPayCheckCgi;
@property(retain, nonatomic) NSString *curAlertRightUrl; // @synthesize curAlertRightUrl=_curAlertRightUrl;
- (void).cxx_destruct;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onWCPayF2FMiddleViewControllerClickTransfer:(unsigned int)arg1;
- (void)onWCPayF2FMiddleViewControllerBack;
- (void)clickContinueInUnarriveMoneyAlert;
- (void)showTransferDoubleCheckTipsView:(id)arg1 transferAmount:(unsigned int)arg2;
- (void)onGetTransferPayCheckResp:(id)arg1;
- (void)onBizF2FTransferControlLogicStop;
- (void)onPayMoneyLogicSuccess;
- (void)onGetF2FPayCheckCgiResp:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showTransferChargeTipsView;
- (void)OnThreeInterruptContinueTransfer;
- (void)OnInterruptContinueTransfer;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)handleGotoViewControllerAfterGetTransferContactSucc;
- (void)OnGetTransferUserName:(id)arg1 Error:(id)arg2;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetTransferPrepayRequest:(id)arg1 Error:(id)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)WCPayTransferMoneyViewControllerNext:(id)arg1;
- (void)WCPayTransferMoneyViewControllerRightActionCancel:(_Bool)arg1;
- (void)WCPayTransferMoneyViewControllerCancel:(_Bool)arg1;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnWCPayTransferSelectChatRoomContactViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerBack;
- (void)OnWCPayTransferSelectSessionViewControllerNewSession;
- (void)OnWCPayTransferSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnWCPayTransferSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectSessionViewControllerBack;
- (void)OnWCPayTransferSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnWCPayTransferSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectContactsViewControllerBack;
- (void)OnOpenOrderList;
- (void)OnContinueTransfer;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)dealloc;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithSessionSelectedUserName:(id)arg1 placeHolderMoney:(long long)arg2 disableEditMoney:(_Bool)arg3;
- (id)initWithSessionSelectedUserName:(id)arg1;
- (id)initWithA8KeyResponseUrl:(id)arg1 payChannel:(int)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

