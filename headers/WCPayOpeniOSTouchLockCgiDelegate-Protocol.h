//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate.h"

@class OpeniOSTouchLockResp, WCPayBaseNetworkingError, WCPayOpeniOSTouchLockCgi;

@protocol WCPayOpeniOSTouchLockCgiDelegate <WCPayBaseCgiDelegate>
- (void)openiOSTouchLockCgi:(WCPayOpeniOSTouchLockCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)openiOSTouchLockCgi:(WCPayOpeniOSTouchLockCgi *)arg1 didGetResponse:(OpeniOSTouchLockResp *)arg2;
@end

