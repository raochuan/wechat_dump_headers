//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GetBankInfoRes, NSString;

@protocol WCPayT2BCGetBankInfoCgiDelegate <NSObject>
- (void)OnWCPayT2BCGetBankInfoCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCGetBankInfoCgiResponseOK:(GetBankInfoRes *)arg1;
@end

