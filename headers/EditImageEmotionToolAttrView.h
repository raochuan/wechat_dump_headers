//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"

@class EmoticonBoardView, NSString, UIToolbar;

@interface EditImageEmotionToolAttrView : MMUIView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
    EmoticonBoardView *_emoticonBoardView;
    UIToolbar *_toolBar;
    id <EditImageEmotionToolAttrDelegate> _delegate;
}

@property(nonatomic) __weak id <EditImageEmotionToolAttrDelegate> _delegate; // @synthesize _delegate;
@property(retain, nonatomic) UIToolbar *_toolBar; // @synthesize _toolBar;
@property(retain, nonatomic) EmoticonBoardView *_emoticonBoardView; // @synthesize _emoticonBoardView;
- (void).cxx_destruct;
- (void)onSendButtonClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)onDoneBtnClicked;
- (void)setFrame:(struct CGRect)arg1;
- (void)initEmoticonView;
- (void)initToolBar;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

