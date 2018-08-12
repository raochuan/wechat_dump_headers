//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseSearchViewController.h"

#import "FavFullScreenImageViewControllerDelegate.h"
#import "MsgFastBrowseViewDelegate.h"

@class MsgFastBrowseView, NSMutableArray, NSString;

@interface FavAlbumSearchViewController : FavBaseSearchViewController <MsgFastBrowseViewDelegate, FavFullScreenImageViewControllerDelegate>
{
    MsgFastBrowseView *_msgFastBrowseView;
    NSMutableArray *_arrImgInfo;
    double _browseTableViewHeight;
}

@property(nonatomic) double browseTableViewHeight; // @synthesize browseTableViewHeight=_browseTableViewHeight;
@property(retain, nonatomic) NSMutableArray *arrImgInfo; // @synthesize arrImgInfo=_arrImgInfo;
@property(retain, nonatomic) MsgFastBrowseView *msgFastBrowseView; // @synthesize msgFastBrowseView=_msgFastBrowseView;
- (void).cxx_destruct;
- (void)OnForwardDone;
- (void)onForward;
- (void)onEdit;
- (void)reloadViewAfterDataChanged;
- (void)processSearchResultDone;
- (void)processSearchResult;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (double)getContentViewY;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initFastBrowserView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

