//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayLotteryView;

@protocol WCPayLotteryViewDelegate <NSObject>

@optional
- (void)lotteryViewDidClickButton:(id)arg1;
- (void)lotteryViewDidFinishScratchOrShake:(WCPayLotteryView *)arg1;
- (void)lotteryViewDidScratchOrShake:(WCPayLotteryView *)arg1 drawType:(unsigned int)arg2;
@end

