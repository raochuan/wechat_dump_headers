//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCPaySelectPayWayViewDelegate.h"

@class NSString, QryHoneyPayerDetailResp, UIButton, UISwitch;

@interface HoneyPayPayerCardDetailViewController : HoneyPayBaseViewController <ILinkEventExt, WCPaySelectPayWayViewDelegate>
{
    unsigned long long _entrance;
    id <HoneyPayPayerCardDetailViewControllerDelegate> _delegate;
    QryHoneyPayerDetailResp *_detail;
    UISwitch *_modifyNotificationSwitch;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UISwitch *modifyNotificationSwitch; // @synthesize modifyNotificationSwitch=_modifyNotificationSwitch;
@property(retain, nonatomic) QryHoneyPayerDetailResp *detail; // @synthesize detail=_detail;
@property(nonatomic) __weak id <HoneyPayPayerCardDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long entrance; // @synthesize entrance=_entrance;
- (void).cxx_destruct;
- (void)selectPayWayView:(id)arg1 didSelectCard:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickRecordCell:(id)arg1;
- (void)modifyPayWay;
- (void)modifyNotification:(id)arg1;
- (void)didClickUnbind;
- (void)onRightBarButtonClick;
- (void)clickDoneButton;
- (id)detailCellContentWithInfos:(id)arg1 cellWidth:(double)arg2;
- (void)makeCanceledDetailCell:(id)arg1;
- (id)canceledDetailCell;
- (void)makeCanceledStatusCell:(id)arg1;
- (id)canceledStatusCell;
- (void)makeExpiredDetailCell:(id)arg1;
- (id)expiredDetailCell;
- (void)makeExpiredStatusCell:(id)arg1;
- (id)expiredCell;
- (void)makeModifyCell:(id)arg1;
- (id)modifyCell;
- (void)makeNoRecordCell:(id)arg1;
- (id)noRecordCell;
- (void)makeFooterCell:(id)arg1;
- (id)footerCell;
- (void)makeRecordCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSeparatorCell:(id)arg1;
- (id)separatorCell;
- (void)makeInuseRecords:(id)arg1;
- (void)makeInuseStatusCell:(id)arg1;
- (id)inuseStatusCell;
- (void)makeCreatedStatusCell:(id)arg1;
- (id)createdStatusCell;
- (void)makeHeaderCell:(id)arg1;
- (id)headerCell;
- (void)addDoneButton;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

