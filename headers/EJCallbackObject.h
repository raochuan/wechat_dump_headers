//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EJCallbackObject : NSObject
{
    struct OpaqueJSValue *callback;
    struct OpaqueJSValue *thisObject;
    unsigned long long argc;
    const struct OpaqueJSValue **argv;
}

@property(nonatomic) const struct OpaqueJSValue **argv; // @synthesize argv;
@property(nonatomic) unsigned long long argc; // @synthesize argc;
@property(nonatomic) struct OpaqueJSValue *thisObject; // @synthesize thisObject;
@property(nonatomic) struct OpaqueJSValue *callback; // @synthesize callback;

@end

