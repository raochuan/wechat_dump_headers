//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface EJFontCache : NSObject
{
    NSMutableDictionary *fonts;
}

- (id)outlineFontWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3;
- (id)fontWithDescriptor:(id)arg1 contentScale:(float)arg2;
- (void)clear;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

