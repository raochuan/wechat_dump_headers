//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnProgressInfo, CdnTaskInfo, NSString;

@protocol DownloadVideoCDNMgrExt <NSObject>
- (void)OnUpdateDownloadProgress:(CdnProgressInfo *)arg1;
- (void)OnVideoUpdatePreloadInfo:(CdnTaskInfo *)arg1;
- (void)OnVideoStartDownload:(NSString *)arg1;
- (void)OnLocalCacheDownloadSuccess:(CMessageWrap *)arg1;
- (void)OnRecievedFristPartAVData:(CdnComVideoProcessInfo *)arg1;
- (void)OnVideoCDNDataAvaiable:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnDownloadToEnd:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnDownloadSuccess:(CdnDownloadTaskInfo *)arg1;
- (void)OnVideoMoovReady:(NSString *)arg1 moovWaitTime:(unsigned int)arg2 Offset:(unsigned int)arg3;
- (void)OnDownloadError:(CdnDownloadTaskInfo *)arg1;
@end
