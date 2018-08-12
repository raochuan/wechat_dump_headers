//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMScrollActionSheetItem, MMUILabel, NSString, UIButton, UIImage;

@interface MMScrollActionSheetIconView : UIView
{
    MMUILabel *_titleLabel;
    id <MMScrollActionSheetIconViewDelegate> _delegate;
    UIButton *_iconButton;
    UIImage *_iconImg;
    NSString *_title;
    MMScrollActionSheetItem *_item;
}

@property(retain, nonatomic) MMScrollActionSheetItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) __weak id <MMScrollActionSheetIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTaped;
- (id)initWithIconImg:(id)arg1 title:(id)arg2 alpha:(double)arg3 disable:(_Bool)arg4;

@end

