//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, WCADTurnActionInfo;

@interface WCADTurnInfo : NSObject <NSCoding>
{
    NSArray *_materialInfoArray;
    WCADTurnActionInfo *_actionInfo;
}

@property(retain, nonatomic) WCADTurnActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) NSArray *materialInfoArray; // @synthesize materialInfoArray=_materialInfoArray;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

