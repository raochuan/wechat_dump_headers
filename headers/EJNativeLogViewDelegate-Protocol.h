//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol EJNativeLogViewDelegate <NSObject>
- (void)onFrameTimeout:(int)arg1;
- (void)logError:(NSString *)arg1 desc:(NSString *)arg2 stack:(NSString *)arg3;
- (void)systemLog:(NSString *)arg1;
- (void)log:(NSString *)arg1 func:(const char *)arg2 line:(int)arg3;
@end

