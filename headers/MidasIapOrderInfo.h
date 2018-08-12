//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIapMonitorPersistance, NSData, NSMutableArray, NSMutableDictionary, NSString, SKMutablePayment, SKProduct;

@interface MidasIapOrderInfo : NSObject
{
    _Bool isDepositGameCoin;
    _Bool _showRiskAlert;
    _Bool _needGetPayResult;
    int productType;
    NSString *productId;
    NSString *amt;
    long long quantity;
    NSString *billNo;
    NSString *appUserName;
    NSString *varItem;
    NSString *currencyType;
    SKProduct *productObj;
    NSMutableArray *paymentTransactions;
    NSString *payItem;
    NSData *receipt;
    double time;
    NSMutableArray *providedProductIds;
    NSMutableDictionary *dictFailedProductIds;
    NSString *urlParams;
    NSString *_offerId;
    NSString *_uuid;
    MidasIapMonitorPersistance *_persistance;
    SKMutablePayment *_paymentObj;
    NSString *_h5Path;
    NSString *_serviceType;
    NSString *_serviceCode;
    NSString *_iapResultUrl;
    NSString *_portalSerialNum;
    NSString *_payResultTitle;
    NSString *_payResultBody;
}

@property(retain, nonatomic) NSString *payResultBody; // @synthesize payResultBody=_payResultBody;
@property(retain, nonatomic) NSString *payResultTitle; // @synthesize payResultTitle=_payResultTitle;
@property(nonatomic) _Bool needGetPayResult; // @synthesize needGetPayResult=_needGetPayResult;
@property(retain, nonatomic) NSString *portalSerialNum; // @synthesize portalSerialNum=_portalSerialNum;
@property(copy, nonatomic) NSString *iapResultUrl; // @synthesize iapResultUrl=_iapResultUrl;
@property(nonatomic) _Bool showRiskAlert; // @synthesize showRiskAlert=_showRiskAlert;
@property(copy, nonatomic) NSString *serviceCode; // @synthesize serviceCode=_serviceCode;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *h5Path; // @synthesize h5Path=_h5Path;
@property(retain, nonatomic) SKMutablePayment *paymentObj; // @synthesize paymentObj=_paymentObj;
@property(retain, nonatomic) MidasIapMonitorPersistance *persistance; // @synthesize persistance=_persistance;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(retain, nonatomic) NSString *urlParams; // @synthesize urlParams;
@property(readonly, nonatomic) NSMutableDictionary *dictFailedProductIds; // @synthesize dictFailedProductIds;
@property(readonly, nonatomic) NSMutableArray *providedProductIds; // @synthesize providedProductIds;
@property(nonatomic) double time; // @synthesize time;
@property(copy, nonatomic) NSData *receipt; // @synthesize receipt;
@property(copy, nonatomic) NSString *payItem; // @synthesize payItem;
@property(nonatomic) _Bool isDepositGameCoin; // @synthesize isDepositGameCoin;
@property(readonly, nonatomic) NSMutableArray *paymentTransactions; // @synthesize paymentTransactions;
@property(retain, nonatomic) SKProduct *productObj; // @synthesize productObj;
@property(copy, nonatomic) NSString *currencyType; // @synthesize currencyType;
@property(nonatomic) int productType; // @synthesize productType;
@property(copy, nonatomic) NSString *varItem; // @synthesize varItem;
@property(copy, nonatomic) NSString *appUserName; // @synthesize appUserName;
@property(copy, nonatomic) NSString *billNo; // @synthesize billNo;
@property(nonatomic) long long quantity; // @synthesize quantity;
@property(copy, nonatomic) NSString *amt; // @synthesize amt;
@property(copy, nonatomic) NSString *productId; // @synthesize productId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setForReprovide;
- (void)reset;
- (id)init;

@end

