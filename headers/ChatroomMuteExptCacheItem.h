//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface ChatroomMuteExptCacheItem : MMObject <PBCoding>
{
    _Bool isHardCodeExpt;
    unsigned int chatroomExptFlag;
    unsigned int chatroomExptStartTime;
    unsigned int isFinishExpt;
    NSMutableArray *chatroomList;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *chatroomList; // @synthesize chatroomList;
@property(nonatomic) _Bool isHardCodeExpt; // @synthesize isHardCodeExpt;
@property(nonatomic) unsigned int isFinishExpt; // @synthesize isFinishExpt;
@property(nonatomic) unsigned int chatroomExptStartTime; // @synthesize chatroomExptStartTime;
@property(nonatomic) unsigned int chatroomExptFlag; // @synthesize chatroomExptFlag;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

