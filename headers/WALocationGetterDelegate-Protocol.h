//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation;

@protocol WALocationGetterDelegate <NSObject>

@optional
- (void)onGetLocationSuccess:(CLLocation *)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
@end

