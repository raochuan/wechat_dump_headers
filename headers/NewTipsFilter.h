//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NewTipsFilter : NSObject
{
    NSString *_configPath;
}

@property(retain, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
- (void).cxx_destruct;
- (_Bool)canShowTipsWithTipsInfo:(id)arg1;
- (_Bool)validateNewTipsXmlByNewTipsInfo:(id)arg1;

@end

