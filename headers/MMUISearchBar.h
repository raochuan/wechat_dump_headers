//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBar.h"

@interface MMUISearchBar : UISearchBar
{
    _Bool m_bForceAdjustFrame;
    _Bool m_bNonControllerBind;
    _Bool m_bForbidCenterPlaceLabel;
}

@property(nonatomic) _Bool m_bForbidCenterPlaceLabel; // @synthesize m_bForbidCenterPlaceLabel;
@property(nonatomic) _Bool m_bNonControllerBind; // @synthesize m_bNonControllerBind;
@property(nonatomic) _Bool m_bForceAdjustFrame; // @synthesize m_bForceAdjustFrame;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)fixPlaceLabelCenterAlign:(_Bool)arg1;
- (void)fixIconAndFontSize;
- (void)fixTipsCenterAlign;
- (void)fixOrientationBug;
- (void)fixLayoutOnActiveSearch;
- (void)fixSearchIconSize;
- (id)findPlaceHolderIcon:(id)arg1;
- (id)findUISearchBarImage:(id)arg1;
- (id)findUISearchBarTextFieldLabel:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

