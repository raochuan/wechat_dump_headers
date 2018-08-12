//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WAAppPackageInfo, WADynamicPageInfo, WAUpdatableMsgInfo;

@interface WAAppMsgItem : MMObject
{
    unsigned int _type;
    unsigned int _version;
    unsigned int _appServiceType;
    unsigned int _disableForward;
    unsigned int _scene;
    NSString *_username;
    NSString *_appid;
    NSString *_pagepath;
    NSString *_weappIconUrl;
    NSString *_shareId;
    NSString *_shareKey;
    NSString *_shareName;
    WAAppPackageInfo *_packInfo;
    WADynamicPageInfo *_dynamicPageInfo;
    WAUpdatableMsgInfo *_updatableMsgInfo;
}

@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int disableForward; // @synthesize disableForward=_disableForward;
@property(retain, nonatomic) WAUpdatableMsgInfo *updatableMsgInfo; // @synthesize updatableMsgInfo=_updatableMsgInfo;
@property(retain, nonatomic) WADynamicPageInfo *dynamicPageInfo; // @synthesize dynamicPageInfo=_dynamicPageInfo;
@property(retain, nonatomic) WAAppPackageInfo *packInfo; // @synthesize packInfo=_packInfo;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(retain, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *weappIconUrl; // @synthesize weappIconUrl=_weappIconUrl;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

