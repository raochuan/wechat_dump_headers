//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString, TipsReportInfo, TipsShowInfo;

@interface NewTipsInfo : MMObject <PBCoding>
{
    _Bool disposed;
    _Bool hadBeginShow;
    _Bool loseEfficacyForPath;
    unsigned int tipsId;
    unsigned int version;
    unsigned int beginShowTime;
    unsigned int disappearTime;
    unsigned int overdueTime;
    unsigned long long tipsType;
    TipsShowInfo *showInfo;
    NSString *extInfo;
    TipsReportInfo *reportInfo;
}

+ (void)initialize;
@property(retain, nonatomic) TipsReportInfo *reportInfo; // @synthesize reportInfo;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(retain, nonatomic) TipsShowInfo *showInfo; // @synthesize showInfo;
@property(nonatomic) _Bool loseEfficacyForPath; // @synthesize loseEfficacyForPath;
@property(nonatomic) _Bool hadBeginShow; // @synthesize hadBeginShow;
@property(nonatomic) _Bool disposed; // @synthesize disposed;
@property(nonatomic) unsigned int overdueTime; // @synthesize overdueTime;
@property(nonatomic) unsigned int disappearTime; // @synthesize disappearTime;
@property(nonatomic) unsigned int beginShowTime; // @synthesize beginShowTime;
@property(nonatomic) unsigned long long tipsType; // @synthesize tipsType;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(nonatomic) unsigned int tipsId; // @synthesize tipsId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)getTipsPath;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

