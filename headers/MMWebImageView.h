//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "MMImageLoaderObserver.h"

@class MMAnimatedImageDecoder, NSString, NSURL, UIImage, UIView;

@interface MMWebImageView : MMUIImageView <MMImageLoaderObserver>
{
    UIImage *_defaultImage;
    NSURL *_url;
    _Bool _loadCachedImageFileOnMainThread;
    id <MMWebImageViewDelegate> m_loadingDelegate;
    MMAnimatedImageDecoder *m_animatedImageDecoder;
    UIView *m_view;
    _Bool _isImageStatic;
    _Bool _alwaysShowDefaultWhenBadUrl;
    double _imageScale;
}

+ (id)getLoadedImageData:(id)arg1;
+ (_Bool)CanLoadImage:(id)arg1;
@property(nonatomic) _Bool alwaysShowDefaultWhenBadUrl; // @synthesize alwaysShowDefaultWhenBadUrl=_alwaysShowDefaultWhenBadUrl;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) _Bool isImageStatic; // @synthesize isImageStatic=_isImageStatic;
@property(nonatomic) _Bool loadCachedImageFileOnMainThread; // @synthesize loadCachedImageFileOnMainThread=_loadCachedImageFileOnMainThread;
@property(nonatomic) __weak id <MMWebImageViewDelegate> m_loadingDelegate; // @synthesize m_loadingDelegate;
- (void).cxx_destruct;
- (_Bool)setImageFromCacheImage:(id)arg1;
- (void)removeGifView;
- (_Bool)setImageFromImageLoaderForUrl:(id)arg1;
- (_Bool)setImageFromData:(id)arg1;
- (void)dealloc;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
@property(readonly, nonatomic) _Bool isSingleFrame;
- (id)getUrl;
- (id)getDefaultImage;
- (id)getImage;
- (void)setDefaultImage:(id)arg1;
- (void)setImageURL:(id)arg1 withAuthorizationCode:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1;
- (void)setEmptyableImageUrl:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setEmptyableImageUrl:(id)arg1;
- (void)setEmptyImageURL;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLoadingDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

