//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSString;

@interface ChatroomMuteExptDebugViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MMTableView *_tableView;
    _Bool _isClickDB;
}

- (void).cxx_destruct;
- (id)genShowLable:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickGetDb:(id)arg1;
- (void)onClickCalc:(id)arg1;
- (void)onClickRefresh:(id)arg1;
- (void)onClickReset:(id)arg1;
- (void)onClickDelDB:(id)arg1;
- (void)onClickExperience:(id)arg1;
- (id)genTableHeaderView;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

