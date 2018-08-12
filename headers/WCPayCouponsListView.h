//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, WCPayControlData, WCPayFavorComposeInfo;

@interface WCPayCouponsListView : MMUIView <CAAnimationDelegate>
{
    WCPayFavorComposeInfo *m_oOldSelectedComposeInfo;
    UIImageView *m_backgroundView;
    UIButton *comleteButton;
    UILabel *topTitleLabel;
    NSMutableArray *m_arrCouponsView;
    NSMutableArray *m_arrFilterTradeFavInfo;
    WCPayControlData *m_data;
    id <WCPayCouponsListViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)OnSelectedFavor:(id)arg1;
- (void)onCancelButtonDone;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

