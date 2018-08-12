//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CContact, CMessageWrap;

@interface BTBaseItemCellViewModel : MMObject
{
    double _viewWidth;
    double _viewHeight;
    CMessageWrap *_msgWrap;
    CContact *_contact;
}

@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
- (void).cxx_destruct;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (id)initWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (id)createItemCellView;
- (id)itemViewClassName;
@property(readonly, nonatomic) double viewHeight;

@end
