//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate.h"

@class QryHoneyUserDetailResp, WCPayBaseNetworkingError, WCPayQryHoneyUserDetailCgi;

@protocol WCPayQryHoneyUserDetailCgiDelegate <WCPayBaseCgiDelegate>
- (void)qryHoneyUserDetailCgi:(WCPayQryHoneyUserDetailCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)qryHoneyUserDetailCgi:(WCPayQryHoneyUserDetailCgi *)arg1 didGetResponse:(QryHoneyUserDetailResp *)arg2;
@end

