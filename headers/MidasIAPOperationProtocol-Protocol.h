//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIAPBaseReq, MidasIAPUserInfo, MidasIapOrderInfo, NSArray, NSError, SKPaymentQueue;

@protocol MidasIAPOperationProtocol <NSObject>
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo;
@property(retain, nonatomic) MidasIAPUserInfo *userInfo;
@property(retain, nonatomic) MidasIAPBaseReq *req;
@property(nonatomic) __weak id <MidasIAPPayDelegate> outerDelegate;
@property(nonatomic) __weak id delegate;
- (void)onDestroy;
- (_Bool)midas_paymentQueue:(SKPaymentQueue *)arg1 midas_updatedTransactions:(NSArray *)arg2;
- (void)start;

@optional
- (void)midas_paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentQueue *)arg1;
- (void)midas_paymentQueue:(SKPaymentQueue *)arg1 midas_restoreCompletedTransactionsFailedWithError:(NSError *)arg2;
@end

