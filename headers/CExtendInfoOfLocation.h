//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfLocation : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    double m_latitude;
    double m_longitude;
    double m_mapScale;
    NSString *m_locationLabel;
    NSString *m_poiName;
    NSString *m_mapType;
    NSString *m_infoUrl;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSString *m_infoUrl; // @synthesize m_infoUrl;
@property(retain, nonatomic) NSString *m_mapType; // @synthesize m_mapType;
@property(nonatomic) double m_mapScale; // @synthesize m_mapScale;
@property(nonatomic) double m_longitude; // @synthesize m_longitude;
@property(retain, nonatomic) NSString *m_poiName; // @synthesize m_poiName;
@property(retain, nonatomic) NSString *m_locationLabel; // @synthesize m_locationLabel;
@property(nonatomic) double m_latitude; // @synthesize m_latitude;
- (void).cxx_destruct;
- (id)messageFTSText;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
