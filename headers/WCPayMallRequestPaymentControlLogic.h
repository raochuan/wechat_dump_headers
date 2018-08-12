//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCPayGenMallPrePayCgiDelegate.h"
#import "WCPayPayMoneyLogicDelegate.h"

@class GenMallPrepayResponse, NSDictionary, NSString, WCPayGenMallPrePayCgi, WCPayPayMoneyLogic;

@interface WCPayMallRequestPaymentControlLogic : WCPayControlLogic <WCPayPayMoneyLogicDelegate, WCPayGenMallPrePayCgiDelegate, WCBaseControlLogicDeleagte>
{
    id <WCPayMallRequestPaymentControlLogicDelegate> _logicDelegate;
    NSDictionary *_jsParams;
    WCPayGenMallPrePayCgi *_prepayCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
    GenMallPrepayResponse *_mallPrepayResp;
}

@property(retain, nonatomic) GenMallPrepayResponse *mallPrepayResp; // @synthesize mallPrepayResp=_mallPrepayResp;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayGenMallPrePayCgi *prepayCgi; // @synthesize prepayCgi=_prepayCgi;
@property(retain, nonatomic) NSDictionary *jsParams; // @synthesize jsParams=_jsParams;
@property(nonatomic) __weak id <WCPayMallRequestPaymentControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void).cxx_destruct;
- (_Bool)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)clickPrePayErrorAlert;
- (void)onGetMallPrePayResp:(id)arg1;
- (void)startLogic;
- (id)initWithJSParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
