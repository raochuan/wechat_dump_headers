//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindow.h"

@class UIImageView;

@interface MultiTalkMainWindow : MMWindow
{
    _Bool _m_hasStartQuitAnimation;
    id <MultiTalkMainWindowDelegate> m_mainWindowDelegate;
    UIImageView *m_blurView;
}

@property(nonatomic) _Bool m_hasStartQuitAnimation; // @synthesize m_hasStartQuitAnimation=_m_hasStartQuitAnimation;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(nonatomic) __weak id <MultiTalkMainWindowDelegate> m_mainWindowDelegate; // @synthesize m_mainWindowDelegate;
- (void).cxx_destruct;
- (void)changeStatusBarColor;
- (void)restoreStatusBarColor;
- (void)quitWithAnimationDidStop;
- (void)collapseWithAnimationDidStop;
- (_Bool)hasStartQuitAnimation;
- (void)quitWithAnimation;
- (void)extendFromCollapseWithAnimation;
- (void)collapseWithAnimation;
- (void)extendWithAnimation;
- (void)dealloc;
- (id)init;

@end

