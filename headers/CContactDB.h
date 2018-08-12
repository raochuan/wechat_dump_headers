//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CContactDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (void)getContactQueryProperty:(struct WCTPropertyList *)arg1;
- (_Bool)isFriendExtTableExist:(id)arg1;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (unsigned int)GetFriendMetaFlag:(id)arg1;
- (unsigned int)GetLastUpdateTimeOfUser:(id)arg1;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (_Bool)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getContactList:(id)arg1 listType:(unsigned int)arg2 limit:(int)arg3;
- (unsigned int)getContactCount;
- (void)getFriendAndExtTableValue:(id)arg1 fromDBContact:(id)arg2 DBContactExt:(id)arg3;
- (_Bool)loadContactExtInfo:(id)arg1;
- (id)getContact:(id)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end

