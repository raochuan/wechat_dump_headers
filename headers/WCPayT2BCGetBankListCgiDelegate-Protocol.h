//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@protocol WCPayT2BCGetBankListCgiDelegate <NSObject>
- (void)OnGetBankListWithError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetBankListOK:(NSMutableArray *)arg1 allBankList:(NSMutableArray *)arg2;
@end

