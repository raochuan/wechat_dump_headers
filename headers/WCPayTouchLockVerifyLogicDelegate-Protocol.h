//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayTouchLockVerifyLogic;

@protocol WCPayTouchLockVerifyLogicDelegate <NSObject>
- (void)touchLockVerifyCancel:(WCPayTouchLockVerifyLogic *)arg1;
- (void)touchLockVerifySuccess:(WCPayTouchLockVerifyLogic *)arg1;

@optional
- (_Bool)needBlockUntilVerified:(WCPayTouchLockVerifyLogic *)arg1;
@end

