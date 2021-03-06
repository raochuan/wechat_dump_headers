//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface WSVideoTagInfo : NSObject <NSCopying>
{
    unsigned int _actionType;
    unsigned int _category;
    NSString *_tagId;
    NSString *_tagWording;
    NSString *_nsUrl;
    NSString *_title;
    NSString *_subTitle;
    NSString *_prefixIconUrl;
}

+ (id)ArrayFromJSON:(id)arg1;
+ (id)FromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *prefixIconUrl; // @synthesize prefixIconUrl=_prefixIconUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *tagWording; // @synthesize tagWording=_tagWording;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (id)generateDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

