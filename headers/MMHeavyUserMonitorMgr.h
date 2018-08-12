//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMCustomInfoReportMgrDelegate.h"
#import "MMHeavyUserClassifierDelegate.h"
#import "MMHeavyUserDataSourceDelegate.h"
#import "MMHeavyUserEvaluatorDelegate.h"
#import "MMService.h"

@class MMCustomInfoReporter, MMHeavyUserClassifier, MMHeavyUserDataSource, MMHeavyUserEvaluator, NSObject<OS_dispatch_queue>, NSString;

@interface MMHeavyUserMonitorMgr : MMService <MMHeavyUserDataSourceDelegate, MMHeavyUserClassifierDelegate, MMHeavyUserEvaluatorDelegate, MMService, MMCustomInfoReportMgrDelegate>
{
    unsigned long long m_uiHeavyUserType;
    MMCustomInfoReporter *m_customInfoReporter;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    NSObject<OS_dispatch_queue> *m_heavyUsrQueue;
    MMHeavyUserDataSource *_heavyUserDataSource;
    MMHeavyUserClassifier *_heavyUserClassifier;
    MMHeavyUserEvaluator *_heavyUserEvaluator;
}

+ (id)getHeavyUserInfoPath;
@property(retain, nonatomic) MMHeavyUserEvaluator *heavyUserEvaluator; // @synthesize heavyUserEvaluator=_heavyUserEvaluator;
@property(retain, nonatomic) MMHeavyUserClassifier *heavyUserClassifier; // @synthesize heavyUserClassifier=_heavyUserClassifier;
@property(retain, nonatomic) MMHeavyUserDataSource *heavyUserDataSource; // @synthesize heavyUserDataSource=_heavyUserDataSource;
- (void).cxx_destruct;
- (void)onCustomInfoUploadSuccess:(_Bool)arg1;
- (void)onHeavyUserPointChange:(unsigned long long)arg1;
- (void)p_updateIDKeySetting:(unsigned long long)arg1;
- (void)p_reportToMMTestWithHeavyUserType:(unsigned long long)arg1;
- (void)p_reportHeavyUserSubtype:(unsigned long long)arg1;
- (void)onHeavyUserTypeChange:(unsigned long long)arg1;
- (void)onHeavyUserDataUpdate;
- (void)clearCache;
- (void)addDumpCount;
- (void)updateWechatSize:(unsigned long long)arg1;
- (void)updateContactCount:(unsigned long long)arg1;
- (void)updateSessionCount:(unsigned long long)arg1;
- (void)p_checkFirstReport;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

