//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IUiUtilExt.h"
#import "MMScrollActionSheetIconViewDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMUILabel, NSArray, NSString, UIButton, UIPopoverController, UIViewController;

@interface MMScrollActionSheet : UIView <MMScrollActionSheetIconViewDelegate, IUiUtilExt, UIScrollViewDelegate, UIPopoverPresentationControllerDelegate>
{
    unsigned long long _rowCount;
    NSArray *_dataAry;
    NSString *_description;
    NSString *_subdescription;
    NSString *_cancelTitle;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    UIView *_containerView;
    UIView *_transparentView;
    UIButton *_cancelButton;
    UIPopoverController *_popoverController;
    UIViewController *_popoverControllerNew;
    NSArray *_bottomBtnDataAry;
    _Bool _isShowed;
    id <MMScrollActionSheetDelegate> _delegate;
}

@property(nonatomic) __weak id <MMScrollActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onMainWindowFrameChanged;
- (void)handleTap:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)onCustomBtnClicked:(id)arg1;
- (void)onCancelBtnClicked;
- (void)setupCancelButton;
- (void)setupTitle;
- (void)setupTransparentView;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (void)setupScrollViews;
- (void)setupContainerView;
- (id)initWithItemsAndBtnDataAry:(id)arg1 desciption:(id)arg2 subDesciption:(id)arg3 cancelButtonTitle:(id)arg4 bottomBtnDataAry:(id)arg5;
- (id)initWithItemsAndBtnDataAry:(id)arg1 desciption:(id)arg2 cancelButtonTitle:(id)arg3 bottomBtnDataAry:(id)arg4;
- (void)dealloc;
- (id)initWithItems:(id)arg1 desciption:(id)arg2 cancelButtonTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

