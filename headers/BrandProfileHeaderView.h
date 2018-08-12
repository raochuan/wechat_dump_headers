//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BrandProfileCacheItem, CContact, MMBrandHeadImageView, MMUIButton, UIImageView, UILabel;

@interface BrandProfileHeaderView : UIView
{
    MMBrandHeadImageView *_brandAvatarView;
    UILabel *_nameLabel;
    UIImageView *_starView;
    UILabel *_descLabel;
    UILabel *_overviewLabel;
    MMUIButton *_focusButton;
    MMUIButton *_enterButton;
    MMUIButton *_unfocusButton;
    UIView *_dividingView;
    _Bool _isFetching;
    _Bool _isForceButtonHidden;
    id <BrandProfileHeaderViewDelegate> _delegate;
    CContact *_brandContact;
    BrandProfileCacheItem *_cacheItem;
}

@property(nonatomic) _Bool isForceButtonHidden; // @synthesize isForceButtonHidden=_isForceButtonHidden;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) BrandProfileCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) __weak id <BrandProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isInMyContactList;
- (void)layoutSubviews;
- (id)getOverviewString;
- (id)getDescString;
- (void)onUnfocusButtonClicked;
- (void)onEnterButtonClicked;
- (void)onFocusButtonClicked;
- (void)onBrandAvatarClicked;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (void)focusButtonTitleUsingFocus;
- (void)focusButtonTitleUsingBindDevice;
- (void)setupSubviews;
- (id)init;

@end

