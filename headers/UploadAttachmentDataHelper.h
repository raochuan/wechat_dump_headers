//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface UploadAttachmentDataHelper : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_uploadAttachmentQueue;
    _Bool m_bIsUploading;
    id <UploadAttachmentDataDelegate> m_delegate;
}

@property(nonatomic) __weak id <UploadAttachmentDataDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)popQueue;
- (_Bool)uploadAttachment;
- (void)cancelUpload:(id)arg1 fileName:(id)arg2;
- (void)startUploadAttachment:(id)arg1 fileName:(id)arg2;
- (void)removeAttachmentTempFile:(id)arg1;
- (_Bool)createAttachmentTempFile:(id)arg1 data:(id)arg2;
- (id)getLocalPathWithClientID:(id)arg1;
- (id)getFileNameWithClientID:(id)arg1;
- (id)getClientID;
- (id)getAttachmentTempPath:(id)arg1;
- (id)init;

@end

