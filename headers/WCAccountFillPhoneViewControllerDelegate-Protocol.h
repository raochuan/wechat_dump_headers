//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WCAccountFillPhoneViewControllerDelegate <NSObject>

@optional
- (void)onFillPhoneSkip;
- (void)onFillPhoneBindAgreeMobileCanBeFound:(_Bool)arg1;
- (void)onFillPhoneNext:(NSString *)arg1 phoneNumber:(NSString *)arg2;
- (void)onFillPhoneBack;
- (void)onFillPhoneSetPrivate;
@end

