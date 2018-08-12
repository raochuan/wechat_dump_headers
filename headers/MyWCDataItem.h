//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface MyWCDataItem : NSObject <WCTTableCoding>
{
    NSString *_m_maID;
    NSData *_m_maBuffer;
}

+ (const struct WCTProperty *)m_maBuffer;
+ (const struct WCTProperty *)m_maID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSData *m_maBuffer; // @synthesize m_maBuffer=_m_maBuffer;
@property(retain, nonatomic) NSString *m_maID; // @synthesize m_maID=_m_maID;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

