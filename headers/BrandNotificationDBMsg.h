//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface BrandNotificationDBMsg : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _version;
    unsigned int _msgId;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _type;
    unsigned int _msgClusterType;
    long long lastInsertedRowID;
    long long _msgServerId;
    NSString *_message;
    NSString *_msgIdentify;
    NSString *_userName;
    NSString *_msgSource;
}

+ (const struct WCTProperty *)msgSource;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)msgIdentify;
+ (const struct WCTProperty *)msgClusterType;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)message;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)msgServerId;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)msgId;
+ (const struct WCTProperty *)version;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *msgIdentify; // @synthesize msgIdentify=_msgIdentify;
@property(nonatomic) unsigned int msgClusterType; // @synthesize msgClusterType=_msgClusterType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end
