//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

@class UIButton;

@interface WCTimeLineAdFullCardView : WCContentItemBaseView
{
    UIButton *_adTouchButton;
}

+ (double)heightForMedia:(id)arg1;
@property(retain, nonatomic) UIButton *adTouchButton; // @synthesize adTouchButton=_adTouchButton;
- (void).cxx_destruct;
- (void)onClick;
- (void)delayClearTouchButtonColor;
- (void)delayClickAdTouchButton;
- (void)onClickAdTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)addButtonForItem:(id)arg1;
- (void)addTitleAndDescriptionForItem:(id)arg1;
- (void)addSightViewWithMediaItem:(id)arg1;
- (void)addImageViewWithMediaItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

@end

