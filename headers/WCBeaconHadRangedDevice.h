//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCBeaconHadRangedDevice : MMObject <PBCoding>
{
    _Bool isRead;
    _Bool isDiscovered;
    _Bool isFirstRead;
    NSString *uuid;
    NSString *major;
    NSString *minor;
}

+ (void)initialize;
@property(nonatomic) _Bool isFirstRead; // @synthesize isFirstRead;
@property(nonatomic) _Bool isDiscovered; // @synthesize isDiscovered;
@property(nonatomic) _Bool isRead; // @synthesize isRead;
@property(copy, nonatomic) NSString *minor; // @synthesize minor;
@property(copy, nonatomic) NSString *major; // @synthesize major;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

