//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMTipsViewControllerDelegate.h"

@class MMTipsViewController, NSString;

@interface FontSettingUtil : NSObject <MMTipsViewControllerDelegate>
{
    id <FontSettingUtilDelegate> _delegate;
    MMTipsViewController *_fontSettingTipsView;
}

@property(retain, nonatomic) MMTipsViewController *fontSettingTipsView; // @synthesize fontSettingTipsView=_fontSettingTipsView;
@property(nonatomic) __weak id <FontSettingUtilDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)checkFontSetting;
- (void)showUserFontSettingTips;
- (_Bool)canShowFontSettingTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

