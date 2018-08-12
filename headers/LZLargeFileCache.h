//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZFileCacheRef.h"

@class NSMutableData;

@interface LZLargeFileCache : LZFileCacheRef
{
    long long _curFileOffset;
    NSMutableData *_readBufData;
}

@property(retain, nonatomic) NSMutableData *readBufData; // @synthesize readBufData=_readBufData;
@property(nonatomic) long long curFileOffset; // @synthesize curFileOffset=_curFileOffset;
- (void).cxx_destruct;
- (_Bool)readFileInner:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
- (_Bool)openFileAndSetupMapInner:(id)arg1;
- (void)releaseMapping;
- (void)endRead:(id)arg1;
- (void)finishWirte:(id)arg1;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isFinish:(_Bool *)arg3;
- (id)initWithFile:(id)arg1 queue:(id)arg2 context:(void *)arg3 type:(unsigned long long)arg4;
- (id)init;

@end

