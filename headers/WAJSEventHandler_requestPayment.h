//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWCPayJSApiMgrExt.h"
#import "IWCPayPayMoneyLogicExt.h"
#import "WCPayPayJSApiLogicParamDelegate.h"

@class NSMutableDictionary, NSString;

@interface WAJSEventHandler_requestPayment : WAJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate, IWCPayJSApiMgrExt, IWCPayPayMoneyLogicExt>
{
    NSMutableDictionary *_dic;
}

@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void).cxx_destruct;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2;
- (void)onWCPayPayMoneySuccess:(id)arg1;
- (id)getWCPayPayParam;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

