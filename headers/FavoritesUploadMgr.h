//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoritesBaseUploadMgr.h"

#import "FavoritesUploaderDelegate.h"
#import "IClearDataMgrExt.h"

@class FavoritesUploader, NSString;

@interface FavoritesUploadMgr : FavoritesBaseUploadMgr <IClearDataMgrExt, FavoritesUploaderDelegate>
{
    FavoritesUploader *_favUploader;
    id <FavoritesUploadMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)reUploadFavItem:(id)arg1;
- (void)onUploadFavItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onUploadFail:(id)arg1 ErrCode:(int)arg2;
- (void)onUploadFinished:(id)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (id)getUploadFailedItemList;
- (id)getUploadPausedItemList;
- (id)getUploadItemList;
- (void)changeToNoWifi;
- (void)changeToWifi;
- (void)stopUploadAllFavItem;
- (void)stopUploadFavoritesItem:(unsigned int)arg1;
- (_Bool)pauseUploadFavoritesItem:(unsigned int)arg1;
- (_Bool)restartAllUploadFailedItems;
- (_Bool)startUploadItem:(id)arg1 IsPriority:(_Bool)arg2;
- (void)removeItemByLocalId:(unsigned int)arg1 inQueue:(id)arg2;
- (_Bool)deleteCdnInfoByFavoritesItemLocalIdIgnoringStatus:(unsigned int)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (id)getUploadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (_Bool)updateCdnInfo:(id)arg1;
- (_Bool)updateCdnInfoByExistCheckCDNItem:(id)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)tryStartUpload;
- (void)setItemUploadFail:(id)arg1 ErrCode:(int)arg2;
- (_Bool)delUploadItem:(id)arg1;
- (_Bool)addUploadItem:(id)arg1 delayUpload:(_Bool)arg2;
- (_Bool)addUploadItem:(id)arg1;
- (_Bool)loadFailedQueue;
- (_Bool)loadUploadingQueue;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

