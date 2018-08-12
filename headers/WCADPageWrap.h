//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCADShareInfo, WCStatTimerHelper;

@interface WCADPageWrap : NSObject
{
    WCADShareInfo *shareInfo;
    unsigned int clickActionType;
    unsigned int _logType;
    unsigned int _eventType;
    unsigned int _scene;
    unsigned int _adType;
    unsigned int _source;
    int _canvasPageScene;
    unsigned int _flipStatus;
    NSString *_adID;
    NSString *_publishID;
    NSString *_uxInfo;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _clickTime;
    NSString *_snsStatExt;
    WCStatTimerHelper *_timer;
}

@property(nonatomic) unsigned int flipStatus; // @synthesize flipStatus=_flipStatus;
@property(retain, nonatomic) WCStatTimerHelper *timer; // @synthesize timer=_timer;
@property(nonatomic) int canvasPageScene; // @synthesize canvasPageScene=_canvasPageScene;
@property(retain, nonatomic) NSString *snsStatExt; // @synthesize snsStatExt=_snsStatExt;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned int adType; // @synthesize adType=_adType;
@property(nonatomic) unsigned long long clickTime; // @synthesize clickTime=_clickTime;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) unsigned int logType; // @synthesize logType=_logType;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(nonatomic) unsigned int clickActionType; // @synthesize clickActionType;
@property(retain, nonatomic) WCADShareInfo *shareInfo; // @synthesize shareInfo;
- (void).cxx_destruct;
- (id)init;

@end

