//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface EJSharedOpenALManager : NSObject
{
    struct ALCdevice_struct *device;
    NSMutableDictionary *buffers;
    NSMutableArray *contexts;
}

+ (id)instance;
- (void)dealloc;
@property(readonly, nonatomic) NSMutableDictionary *buffers;
- (struct ALCcontext_struct *)createContext;
- (void)releaseContext:(struct ALCcontext_struct *)arg1;
- (void)endInterruption:(struct ALCcontext_struct *)arg1;
- (void)beginInterruption:(struct ALCcontext_struct *)arg1;

@end

