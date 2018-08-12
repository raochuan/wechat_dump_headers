//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext;

@interface EJCanvasContext : NSObject
{
    short width;
    short height;
    _Bool preserveDrawingBuffer;
    _Bool msaaEnabled;
    _Bool needsPresenting;
    int msaaSamples;
    EAGLContext *glContext;
    _Bool stopRender;
}

@property(nonatomic) _Bool stopRender; // @synthesize stopRender;
@property(nonatomic) _Bool preserveDrawingBuffer; // @synthesize preserveDrawingBuffer;
@property(nonatomic) int msaaSamples; // @synthesize msaaSamples;
@property(nonatomic) _Bool msaaEnabled; // @synthesize msaaEnabled;
@property(nonatomic) short height; // @synthesize height;
@property(nonatomic) short width; // @synthesize width;
@property(readonly, nonatomic) EAGLContext *glContext; // @synthesize glContext;
- (void)resumeUpdate;
- (void)prepare;
- (void)flushBuffers;
- (void)create;

@end

