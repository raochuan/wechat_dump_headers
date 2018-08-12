//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameCenterBaseMsg.h"

@class GameCenterMsgBubbleInfo, GameCenterMsgMessageCenterInfo, GameCenterMsgReportInfo, GameCenterMsgTimeInfo, NSString;

@interface GameCenterCommMsg : GameCenterBaseMsg
{
    NSString *_appId;
    GameCenterMsgBubbleInfo *_bubbleInfo;
    GameCenterMsgTimeInfo *_timeInfo;
    GameCenterMsgMessageCenterInfo *_msgCenterInfo;
    GameCenterMsgReportInfo *_reportInfo;
}

@property(retain, nonatomic) GameCenterMsgReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) GameCenterMsgMessageCenterInfo *msgCenterInfo; // @synthesize msgCenterInfo=_msgCenterInfo;
@property(retain, nonatomic) GameCenterMsgTimeInfo *timeInfo; // @synthesize timeInfo=_timeInfo;
@property(retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (int)getMsgReportType;
- (id)getNoticeid;
- (id)appid;
- (unsigned int)createTime;
- (_Bool)notInMsgCenter;
- (_Bool)isExpired;
- (id)getMsgCenterContent;
- (id)getNotifyContent;
- (id)parseMsgSourceInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSecondLineInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseUserInfoList:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgCardInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseContentPic:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSender:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgCenterInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseReportInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseBubbleInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseFloatLayerInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseEntranceInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseTimeInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseWePkgPreloadInfo:(struct XmlReaderNode_t *)arg1;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end

