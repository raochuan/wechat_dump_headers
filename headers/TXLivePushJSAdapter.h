//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISysCallCheckExt.h"
#import "MMImageLoaderObserver.h"
#import "MonoServiceLogicExt.h"
#import "TXLivePushListener.h"

@class NSString, TXLivePush, UIView;

@interface TXLivePushJSAdapter : NSObject <TXLivePushListener, MMImageLoaderObserver, ISysCallCheckExt, MonoServiceLogicExt>
{
    _Bool _previewing;
    _Bool _bIsMannualPause;
    unsigned char _mode;
    unsigned char _focusMode;
    unsigned char _aspect;
    _Bool _isPublishing;
    _Bool _isPreviewing;
    _Bool _enableCamera;
    _Bool _muted;
    _Bool _backgroundMute;
    _Bool _isDebug;
    _Bool _needEvent;
    _Bool _needNetStatus;
    _Bool _autoPush;
    _Bool _bIsBackgroundInterrupted;
    _Bool _enableTorch;
    unsigned int _pusherId;
    id <TXLivePushJSAdapterDelegate> _delegate;
    TXLivePush *_txLivePusher;
    UIView *_previewView;
    NSString *_appId;
    NSString *_pushUrl;
    NSString *_orientation;
    NSString *_audioQuality;
    NSString *_bgImageMd5;
}

@property(nonatomic) _Bool enableTorch; // @synthesize enableTorch=_enableTorch;
@property(retain, nonatomic) NSString *bgImageMd5; // @synthesize bgImageMd5=_bgImageMd5;
@property(nonatomic) _Bool bIsBackgroundInterrupted; // @synthesize bIsBackgroundInterrupted=_bIsBackgroundInterrupted;
@property(nonatomic) _Bool autoPush; // @synthesize autoPush=_autoPush;
@property(nonatomic) _Bool needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(nonatomic) _Bool needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) _Bool backgroundMute; // @synthesize backgroundMute=_backgroundMute;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool enableCamera; // @synthesize enableCamera=_enableCamera;
@property(nonatomic) _Bool isPreviewing; // @synthesize isPreviewing=_isPreviewing;
@property(nonatomic) _Bool isPublishing; // @synthesize isPublishing=_isPublishing;
@property(nonatomic) unsigned char aspect; // @synthesize aspect=_aspect;
@property(nonatomic) unsigned char focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) unsigned char mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *audioQuality; // @synthesize audioQuality=_audioQuality;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) unsigned int pusherId; // @synthesize pusherId=_pusherId;
@property(retain, nonatomic) TXLivePush *txLivePusher; // @synthesize txLivePusher=_txLivePusher;
@property(nonatomic) __weak id <TXLivePushJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onNetStatus:(id)arg1;
- (void)onPushEvent:(int)arg1 withParam:(id)arg2;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)resumeInterruptPush;
- (void)beginInterruptPush:(_Bool)arg1;
- (void)setOrientation;
- (void)enableCamera:(_Bool)arg1;
- (void)stopPush;
- (void)foregroundPush;
- (void)backgroundPush;
- (void)resumePush;
- (void)pausePush;
- (void)startPush;
- (void)parseConfigs:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (_Bool)operateLivePusherWithType:(id)arg1;
- (void)updateLivePusherWithConfigs:(id)arg1;
- (id)initLivePusherWithId:(unsigned int)arg1 configs:(id)arg2 preview:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

