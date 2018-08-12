//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WAUpdatableMsgInfo : NSObject <WCTTableCoding>
{
    _Bool _shouldUseUpdatableMsg;
    _Bool _isSystemPushFinished;
    int _updatableContentUpdateInterval;
    unsigned int _lastUpdateTime;
    NSString *_shareKey;
    NSString *_appId;
    unsigned long long _subscriptionEntryState;
    NSString *_subscriptionEntryContent;
    NSString *_subscriptionEntryButtonWording;
    NSString *_subscriptionConfirmedContent;
    NSString *_updatableContentText;
    NSString *_updatableContentColor;
}

+ (id)infoFromResp:(id)arg1;
+ (const struct WCTProperty *)lastUpdateTime;
+ (const struct WCTProperty *)updatableContentUpdateInterval;
+ (const struct WCTProperty *)updatableContentColor;
+ (const struct WCTProperty *)updatableContentText;
+ (const struct WCTProperty *)subscriptionConfirmedContent;
+ (const struct WCTProperty *)subscriptionEntryButtonWording;
+ (const struct WCTProperty *)subscriptionEntryContent;
+ (const struct WCTProperty *)isSystemPushFinished;
+ (const struct WCTProperty *)subscriptionEntryState;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)shouldUseUpdatableMsg;
+ (const struct WCTProperty *)shareKey;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) int updatableContentUpdateInterval; // @synthesize updatableContentUpdateInterval=_updatableContentUpdateInterval;
@property(retain, nonatomic) NSString *updatableContentColor; // @synthesize updatableContentColor=_updatableContentColor;
@property(retain, nonatomic) NSString *updatableContentText; // @synthesize updatableContentText=_updatableContentText;
@property(retain, nonatomic) NSString *subscriptionConfirmedContent; // @synthesize subscriptionConfirmedContent=_subscriptionConfirmedContent;
@property(retain, nonatomic) NSString *subscriptionEntryButtonWording; // @synthesize subscriptionEntryButtonWording=_subscriptionEntryButtonWording;
@property(retain, nonatomic) NSString *subscriptionEntryContent; // @synthesize subscriptionEntryContent=_subscriptionEntryContent;
@property(nonatomic) _Bool isSystemPushFinished; // @synthesize isSystemPushFinished=_isSystemPushFinished;
@property(nonatomic) unsigned long long subscriptionEntryState; // @synthesize subscriptionEntryState=_subscriptionEntryState;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool shouldUseUpdatableMsg; // @synthesize shouldUseUpdatableMsg=_shouldUseUpdatableMsg;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
- (void).cxx_destruct;
- (unsigned int)nextTimeToUpdate;
- (_Bool)isUpdateAllowed;
- (_Bool)shouldUpdateNow;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
