//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest;

@interface GetWxaUsageRecordRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int condition; // @dynamic condition;
@property(nonatomic) unsigned int historyCount; // @dynamic historyCount;
@property(nonatomic) unsigned int maxUpdatetime; // @dynamic maxUpdatetime;
@property(nonatomic) unsigned int reason; // @dynamic reason;

@end

