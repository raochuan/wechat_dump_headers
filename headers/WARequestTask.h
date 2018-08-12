//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession, NSURLSessionTask;

@interface WARequestTask : NSObject
{
    NSString *_appID;
    NSURLSession *_urlSession;
    NSString *_taskID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_url;
    NSString *_method;
    NSDictionary *_dicTaskContext;
    CDUnknownBlockType _completionHandler;
    NSURLSessionTask *_task;
    _Bool _isIgnoreCheckDomain;
    _Bool _isRedirectInvalid;
    id <WARequestTaskDelegate> delegate;
}

@property(nonatomic) _Bool isRedirectInvalid; // @synthesize isRedirectInvalid=_isRedirectInvalid;
@property(nonatomic) _Bool isIgnoreCheckDomain; // @synthesize isIgnoreCheckDomain=_isIgnoreCheckDomain;
@property __weak id <WARequestTaskDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(_Bool)arg5;
- (void)callCompletionHandlerWithError:(id)arg1 string:(id)arg2 buffer:(id)arg3 statusCode:(long long)arg4 responseHeader:(id)arg5;
- (void)callCompletionHandlerWithString:(id)arg1 buffer:(id)arg2 statusCode:(long long)arg3 responseHeader:(id)arg4;
- (void)callCompletionHandlerWithError:(id)arg1;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (id)headerDictionaryFromResponse:(id)arg1;
- (void)markRedirectFail;
- (id)task;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)workThread_onResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)anyThread_didReceiveResponse:(id)arg1;
- (void)onResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)startWithURL:(id)arg1 postData:(id)arg2 httpHeaders:(id)arg3 userAgent:(id)arg4 referer:(id)arg5 method:(id)arg6 context:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 taskID:(id)arg3 workQueue:(id)arg4;

@end

