//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMSafeModeInfo : NSObject
{
    int m_version;
    NSString *m_path;
    _Bool _shouldNotUpdateConfig;
    _Bool _isCrashBySpecialCharacter;
    _Bool _isBootTimeNotEnough;
    int _appContinuousCrashCount;
    int _appLastCrashSignalNumber;
    int _appLastCrashSignalCode;
    int _appTimeoutCount;
    int _appTimeoutSceneCount;
    long long _appLastBootTime;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isBootTimeNotEnough; // @synthesize isBootTimeNotEnough=_isBootTimeNotEnough;
@property(nonatomic) _Bool isCrashBySpecialCharacter; // @synthesize isCrashBySpecialCharacter=_isCrashBySpecialCharacter;
@property(nonatomic) _Bool shouldNotUpdateConfig; // @synthesize shouldNotUpdateConfig=_shouldNotUpdateConfig;
@property(nonatomic) int appTimeoutSceneCount; // @synthesize appTimeoutSceneCount=_appTimeoutSceneCount;
@property(nonatomic) long long appLastBootTime; // @synthesize appLastBootTime=_appLastBootTime;
@property(nonatomic) int appTimeoutCount; // @synthesize appTimeoutCount=_appTimeoutCount;
@property(nonatomic) int appLastCrashSignalCode; // @synthesize appLastCrashSignalCode=_appLastCrashSignalCode;
@property(nonatomic) int appLastCrashSignalNumber; // @synthesize appLastCrashSignalNumber=_appLastCrashSignalNumber;
@property(nonatomic) int appContinuousCrashCount; // @synthesize appContinuousCrashCount=_appContinuousCrashCount;
- (void).cxx_destruct;
- (id)infoPath;
- (void)clearAll;
- (void)saveInfo;
- (_Bool)loadInfo;
- (id)init;

@end

