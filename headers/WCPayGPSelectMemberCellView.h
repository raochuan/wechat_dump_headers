//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, UIImageView;

@interface WCPayGPSelectMemberCellView : MMUIView
{
    CContact *_contact;
    CContact *_chatroomContact;
    UIImageView *_checkMarkImgView;
}

@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)getCheckMarkImageWithContactState:(unsigned long long)arg1;
- (void)updateItemView:(id)arg1 withCellSelectState:(unsigned long long)arg2;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2 chatroomContact:(id)arg3;
- (void)dealloc;

@end

