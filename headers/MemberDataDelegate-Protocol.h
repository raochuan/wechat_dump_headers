//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@protocol MemberDataDelegate <NSObject>
- (void)commitEditingStyle:(long long)arg1 ForIndexPath:(NSIndexPath *)arg2;
- (long long)getEditingStyleForIndexPath:(NSIndexPath *)arg1;
- (void)didSelectRowAtIndexPath:(NSIndexPath *)arg1;
@end

