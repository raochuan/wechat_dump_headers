//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, MMCPLabel, MMMaskHeadImageView, MMWebImageView, NSString, UIButton, UIColor, UIImageView;

@interface NewChatRoomMemberItemView : MMUIView
{
    UIButton *m_viewMemberBtn;
    UIButton *m_addMemberBtn;
    UIButton *m_deleteMemberBtn;
    UIButton *m_actionBtn;
    MMMaskHeadImageView *m_headImageView;
    MMCPLabel *m_labelDisplayName;
    UIImageView *m_trackIcon;
    UIImageView *m_talkIcon;
    UIImageView *m_ownerIcon;
    MMWebImageView *m_openimIcon;
    UIButton *m_smallDeleteBtn;
    CContact *m_contact;
    CContact *m_groupContact;
    id <NewChatRoomMemberItemViewDelegate> m_delegate;
    SEL m_updateItemViewForDeleteSel;
    _Bool m_bDeleteStatus;
    unsigned int m_uiIndex;
    UIColor *m_textColor;
    double m_fLeftMargin;
    double m_fRightMargin;
    _Bool m_noDisplayName;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
}

@property(readonly) double m_fRightMargin; // @synthesize m_fRightMargin;
@property(readonly) double m_fLeftMargin; // @synthesize m_fLeftMargin;
@property(nonatomic) unsigned int m_uiIndex; // @synthesize m_uiIndex;
@property(retain, nonatomic) CContact *m_groupContact; // @synthesize m_groupContact;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <NewChatRoomMemberItemViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)isDisplayNameUnsafe;
- (void)updateCPState;
- (void)setNoDisplayName:(_Bool)arg1;
- (id)initViewInChatRoomProfile:(double)arg1 nameSize:(double)arg2;
- (id)initViewInChatRoomProfile;
- (void)updateContactItemSubview;
- (void)updateWithViewMemberBtnAtIndexEx:(unsigned long long)arg1;
- (void)updateWithViewMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithDeleteMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithAddMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithContactEx:(id)arg1 atIndex:(unsigned long long)arg2 withColumn:(unsigned long long)arg3;
- (void)hiddenAllSubViews;
- (void)updateAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)handleLongPressEx:(id)arg1;
- (void)showTrackFlag;
- (void)showTalkFlag;
- (void)updateOpenimIcon;
- (void)updateAdminIcon;
- (void)setTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)updateItemViewForDelete:(_Bool)arg1;
- (void)updateContactItemViewForDelete;
- (void)updateDeleteItemViewForDelete;
- (void)updateAddItemViewForDelete;
- (void)updateContact;
- (void)OnClickViewBtn;
- (void)OnClickDeleteBtn;
- (void)OnClickHeadImage;

@end

