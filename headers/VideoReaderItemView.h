//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderItemView.h"

#import "AsyncImageViewDelegate.h"

@class CALayer, MMUILabel, NSString, UIImageView, UIView;

@interface VideoReaderItemView : ReaderItemView <AsyncImageViewDelegate>
{
    UIImageView *m_playBtnView;
    UIView *m_titleTimeView;
    MMUILabel *m_timeLabel;
    CALayer *m_maskLayer;
    unsigned int _playLength;
}

@property(nonatomic) unsigned int playLength; // @synthesize playLength=_playLength;
- (void).cxx_destruct;
- (void)onAsyncLoadImageOK:(id)arg1;
- (void)setViewLoadingState:(_Bool)arg1;
- (void)initPlayBtnView:(_Bool)arg1;
- (void)initCoverImageView;
- (void)topView;
- (void)setHighlighted:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

