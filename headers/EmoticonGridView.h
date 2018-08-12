//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonDescMgrExt.h"
#import "EmoticonViewWithPreviewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface EmoticonGridView : MMUIView <EmoticonDescMgrExt, EmoticonViewWithPreviewDelegate>
{
    id <EmoticonGridViewDelegate> m_delegate;
    NSArray *m_emoticonWrapArray;
    NSMutableArray *m_emoticonViewArray;
    NSString *m_packageId;
    long long m_column;
    long long m_row;
    double m_itemWidth;
    double m_itemHeight;
    double m_edgeTop;
    double m_edgeLeft;
    double m_intervalX;
    double m_intervalY;
}

+ (double)heightForWidth:(double)arg1 totalCount:(unsigned long long)arg2;
+ (double)edgeLeftForWidth:(double)arg1;
+ (unsigned long long)emoticonCountPerPageForSize:(struct CGSize)arg1;
@property(nonatomic) __weak id <EmoticonGridViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) double m_intervalY; // @synthesize m_intervalY;
@property(nonatomic) double m_intervalX; // @synthesize m_intervalX;
@property(nonatomic) double m_edgeLeft; // @synthesize m_edgeLeft;
@property(nonatomic) double m_edgeTop; // @synthesize m_edgeTop;
@property(nonatomic) double m_itemHeight; // @synthesize m_itemHeight;
@property(nonatomic) double m_itemWidth; // @synthesize m_itemWidth;
@property(nonatomic) long long m_row; // @synthesize m_row;
@property(nonatomic) long long m_column; // @synthesize m_column;
@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId;
@property(retain, nonatomic) NSMutableArray *m_emoticonViewArray; // @synthesize m_emoticonViewArray;
@property(retain, nonatomic) NSArray *m_emoticonWrapArray; // @synthesize m_emoticonWrapArray;
- (void).cxx_destruct;
- (void)reLayout;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (id)getPreviewSuperview;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (long long)getRealIndexFromPoint:(struct CGPoint)arg1;
- (void)onLongPressOnEmoticon:(id)arg1;
- (void)reloadData;
- (void)calculateLayout;
- (id)buttonKey;
- (id)emoticonKey;
- (void)setGridViewDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)customPackageId;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

