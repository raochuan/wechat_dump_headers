//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSString;

@interface WSVideoModel : NSObject <NSCopying>
{
    _Bool _startByAutoPlay;
    _Bool _bForbidShare;
    _Bool _bForbidFeedBack;
    _Bool _bForbidFeedBackBySvr;
    unsigned int _fileSize;
    unsigned int _pxWidth;
    unsigned int _pxHeight;
    unsigned int _duration;
    unsigned int _playCount;
    unsigned int _category;
    unsigned int _resultType;
    unsigned int _itemType;
    int _eUrlStatus;
    unsigned int _replayCount;
    unsigned int _pauseCount;
    NSString *_vid;
    NSString *_title;
    NSString *_titleUrl;
    NSString *_desc;
    NSString *_docUrl;
    NSString *_docId;
    NSString *_videoPlatform;
    NSString *_videoApi;
    NSString *_thumbUrl;
    NSArray *_arrVideoUrl;
    NSString *_sourceImgUrl;
    NSString *_source;
    NSString *_sourceUrl;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_shareImgUrl;
    NSString *_strPlayCount;
    NSString *_expand;
    NSString *_searchId;
    NSString *_openId;
    NSString *_sessionId;
    NSString *_itemExpand;
    NSMutableArray *_extParams;
    NSArray *_arrTagInfo;
    double _cacheForTitleHeight;
    NSString *_bigThumbUrl;
    NSString *_smallThumbUrl;
    unsigned long long _ui64PlayStartTime;
    unsigned long long _ui64PlayEndTime;
    NSArray *_arrFeedBack;
}

+ (id)containerFromJSON:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseFromWCVideoFlowInfo:(id)arg1;
+ (id)ParseFromNewDictionary:(id)arg1;
+ (id)GetValidFeedBackArray:(id)arg1;
@property(retain, nonatomic) NSArray *arrFeedBack; // @synthesize arrFeedBack=_arrFeedBack;
@property(nonatomic) _Bool bForbidFeedBackBySvr; // @synthesize bForbidFeedBackBySvr=_bForbidFeedBackBySvr;
@property(nonatomic) _Bool bForbidFeedBack; // @synthesize bForbidFeedBack=_bForbidFeedBack;
@property(nonatomic) _Bool bForbidShare; // @synthesize bForbidShare=_bForbidShare;
@property(nonatomic) unsigned int pauseCount; // @synthesize pauseCount=_pauseCount;
@property(nonatomic) unsigned int replayCount; // @synthesize replayCount=_replayCount;
@property(nonatomic) unsigned long long ui64PlayEndTime; // @synthesize ui64PlayEndTime=_ui64PlayEndTime;
@property(nonatomic) unsigned long long ui64PlayStartTime; // @synthesize ui64PlayStartTime=_ui64PlayStartTime;
@property(nonatomic) _Bool startByAutoPlay; // @synthesize startByAutoPlay=_startByAutoPlay;
@property(retain, nonatomic) NSString *smallThumbUrl; // @synthesize smallThumbUrl=_smallThumbUrl;
@property(retain, nonatomic) NSString *bigThumbUrl; // @synthesize bigThumbUrl=_bigThumbUrl;
@property(nonatomic) int eUrlStatus; // @synthesize eUrlStatus=_eUrlStatus;
@property(nonatomic) double cacheForTitleHeight; // @synthesize cacheForTitleHeight=_cacheForTitleHeight;
@property(retain, nonatomic) NSArray *arrTagInfo; // @synthesize arrTagInfo=_arrTagInfo;
@property(retain, nonatomic) NSMutableArray *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *itemExpand; // @synthesize itemExpand=_itemExpand;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *expand; // @synthesize expand=_expand;
@property(retain, nonatomic) NSString *strPlayCount; // @synthesize strPlayCount=_strPlayCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl=_shareImgUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl=_sourceImgUrl;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int pxHeight; // @synthesize pxHeight=_pxHeight;
@property(nonatomic) unsigned int pxWidth; // @synthesize pxWidth=_pxWidth;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSArray *arrVideoUrl; // @synthesize arrVideoUrl=_arrVideoUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *videoApi; // @synthesize videoApi=_videoApi;
@property(retain, nonatomic) NSString *videoPlatform; // @synthesize videoPlatform=_videoPlatform;
@property(retain, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(retain, nonatomic) NSString *docUrl; // @synthesize docUrl=_docUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *titleUrl; // @synthesize titleUrl=_titleUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)generateJSONForArrTagInfo;
- (id)toXML;
- (id)parseToWCVideoFlowInfo;
- (_Bool)canAutoPlay;
- (void)compatShareModel;
- (void)adjustUrlIfNeeded;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

