//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "ShakeMgrExt.h"

@class MMWebImageView;

@interface ShakeMsgUnreadButton : UIButton <ShakeMgrExt>
{
    MMWebImageView *oIconImageView;
}

- (void).cxx_destruct;
- (void)onShakeMsgUnreadCountChanged;
- (void)updateSubViews;
- (void)initView;
- (void)dealloc;
- (id)init;

@end

