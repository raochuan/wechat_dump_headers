//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAAppItemData, WAMainFrameTaskBarView;

@protocol WAMainFrameTaskBarViewDelegate <NSObject>

@optional
- (void)taskBarViewDidSelectStarMore:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarViewDidSelectTaskMore:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 heightDidChangeTo:(double)arg2;
- (void)taskBarViewDidSelectMore:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 didSelectStarItem:(WAAppItemData *)arg2 onPosition:(unsigned long long)arg3;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 didSelectTaskItem:(WAAppItemData *)arg2 onPosition:(unsigned long long)arg3;
- (void)taskBarViewStarDidEndDragging:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarViewTaskDidEndDragging:(WAMainFrameTaskBarView *)arg1;
@end

