//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class AttributeLabel, CContact, MMCPLabel, MMHeadImageView, MMWebImageView, NSString, SearchMatchTip, UIButton, UIImageView, UILabel;

@interface ContactsItemView : MMUIView
{
    MMHeadImageView *m_headImage;
    UIImageView *m_contactLogo;
    MMCPLabel *m_nickNameLabel;
    UILabel *m_labelNamePostfix;
    MMWebImageView *m_iconNamePostfix;
    AttributeLabel *m_descLabel;
    UIButton *m_rightButton;
    UILabel *m_rightLabel;
    id m_data;
    id <ContactsItemViewDelegate> m_delegate;
    CContact *m_contact;
    SearchMatchTip *m_matchTip;
    NSString *m_cpKeyForNickname;
    _Bool m_isNicknameUnsafe;
    _Bool m_bShowHeadImage;
    _Bool m_bShowUserDescription;
    _Bool m_bUseDynamicSize;
    _Bool m_bShowSearchResult;
    _Bool _m_bShowChatRoomCount;
    _Bool _m_bHideOpenIMDesc;
}

@property(nonatomic) _Bool m_bHideOpenIMDesc; // @synthesize m_bHideOpenIMDesc=_m_bHideOpenIMDesc;
@property(nonatomic) _Bool m_bShowChatRoomCount; // @synthesize m_bShowChatRoomCount=_m_bShowChatRoomCount;
@property(retain, nonatomic) SearchMatchTip *m_matchTip; // @synthesize m_matchTip;
@property(nonatomic) _Bool m_bShowSearchResult; // @synthesize m_bShowSearchResult;
@property(nonatomic) _Bool m_bUseDynamicSize; // @synthesize m_bUseDynamicSize;
@property(nonatomic) _Bool m_bShowUserDescription; // @synthesize m_bShowUserDescription;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) id m_data; // @synthesize m_data;
@property(nonatomic) __weak id <ContactsItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMHeadImageView *m_headImage; // @synthesize m_headImage;
@property(retain, nonatomic) UILabel *m_nickNameLabel; // @synthesize m_nickNameLabel;
@property(nonatomic) _Bool m_bShowHeadImage; // @synthesize m_bShowHeadImage;
- (void).cxx_destruct;
- (void)initDescLabel:(id)arg1;
- (void)initDescLabel:(id)arg1 color:(id)arg2;
- (void)initGreenRightButton:(id)arg1;
- (void)initGreyRightButton:(id)arg1;
- (void)initRightButton:(id)arg1 title:(id)arg2;
- (void)onRightBtnAction;
- (void)initRightLabel:(id)arg1;
- (void)initRightLabel:(id)arg1 color:(id)arg2 width:(double)arg3;
- (void)initNickNameLabel:(id)arg1;
- (double)calNameMaxWidth;
- (void)updateMatchLabel;
- (void)initNamePostfixIcon:(id)arg1;
- (void)initNamePostfixLabel:(id)arg1;
- (void)initView:(id)arg1 showChatRoomName:(id)arg2;
- (void)initView:(id)arg1;
- (_Bool)isShowMobileName:(id)arg1 mobileName:(id)arg2;
- (void)initContactLogo:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (void)initHeadImage:(id)arg1;
- (void)initHeadImage:(id)arg1 withUrl:(id)arg2;
- (void)layoutSubviews;
- (id)init;

@end

