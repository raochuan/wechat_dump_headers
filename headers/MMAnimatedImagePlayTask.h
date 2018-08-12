//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMAnimatedImageDecoder, MMAnimatedImagePlayConfig, NSMutableArray, UIImageView;

@interface MMAnimatedImagePlayTask : NSObject
{
    MMAnimatedImagePlayConfig *m_config;
    unsigned long long m_timeTickCount;
    _Bool m_isUpdating;
    NSMutableArray *m_frameCache;
    int m_currentFrameId;
    int m_totalFrameCount;
    double m_currentDuration;
    UIImageView *_imageView;
    MMAnimatedImageDecoder *_decoder;
}

@property(retain, nonatomic) MMAnimatedImageDecoder *decoder; // @synthesize decoder=_decoder;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)onSeekNextFrameFinished;
- (void)seekToNextFrame;
- (void)updateWithTickCount:(unsigned long long)arg1;
- (id)init;
- (id)initWithPlayConfig:(id)arg1;

@end

