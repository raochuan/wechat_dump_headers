//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class QryHoneyPayCardDetailReq;

@interface WCPayQryHoneyPayCardDetailCgi : WCPayBaseCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayQryHoneyPayCardDetailCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QryHoneyPayCardDetailReq *request; // @dynamic request;

@end
