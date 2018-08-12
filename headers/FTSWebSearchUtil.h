//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface FTSWebSearchUtil : MMObject
{
}

+ (id)GetNetType;
+ (void)showSearchPrivacyWebviewForEU:(id)arg1 delegate:(id)arg2;
+ (void)markConfirmSearchForEuUser:(_Bool)arg1;
+ (_Bool)hasConfirmOpenSearchForEuUser;
+ (_Bool)isUserRegInEuCountry;
+ (_Bool)isNeedShowPrivacyH5WhenCloseFFSearch;
+ (_Bool)isNeedShowPrivacyH5BeforeSearch;
+ (void)ReportWebRecommendReddotCovered:(id)arg1;
+ (void)ReportWebRecommendReddotExpired:(id)arg1;
+ (void)ReportWebRecommendReddotCgiConsumed:(id)arg1;
+ (void)ReportWebRecommendReddotConsumed:(id)arg1;
+ (void)ReportWebRecommendReddotDisplay:(id)arg1;
+ (void)ReportWebRecommendReddotReceived:(id)arg1;
+ (void)InternalReportWebRecommendReddot:(id)arg1 opCode:(unsigned int)arg2;
+ (id)extractWidgetJumpAppInfoFromUrl:(id)arg1;
+ (_Bool)shouldIgnoreLink:(id)arg1;
+ (_Bool)isRecordHistoryOpen;
+ (id)getFFWebSearchTitle;
+ (id)getFFBrowseEntryTitle;
+ (_Bool)shouldPreloadFFSearchViewController;
+ (_Bool)shouldPreloadFFBrowseViewController;
+ (id)stringByReplaceCommaWithBlank:(id)arg1;
+ (void)reportWebSearchActionFlow:(int)arg1 scene:(unsigned int)arg2 sessionId:(id)arg3 subSessionId:(id)arg4 searchId:(id)arg5 offset:(unsigned int)arg6 isHomePage:(_Bool)arg7 requestId:(id)arg8 successType:(int)arg9 query:(id)arg10 tagId:(id)arg11 bizType:(unsigned long long)arg12 h5Version:(unsigned int)arg13 isPreload:(_Bool)arg14;
+ (id)getNetworkInfo;
+ (id)makeGeneralFailParam;
+ (id)makeEmptyJSONResultParam;
+ (id)getHightlightString:(id)arg1 searchText:(id)arg2 matchWordTip:(id)arg3;
+ (id)makeJSONResultParamWithQuery:(id)arg1 allContacts:(id)arg2 sortedArray:(id)arg3 offset:(long long)arg4 count:(long long)arg5;
+ (id)getWebViewPresetUI:(id)arg1;
+ (id)tryGetNavTitleWithParams:(id)arg1;
+ (int)convertViewTypeWithViewTypeStr:(id)arg1;
+ (id)tryAppendNewKeyForUrlStr:(id)arg1 andKey:(id)arg2 andUrlParams:(id)arg3;
+ (void)tryCloseWslocalWebview;
+ (_Bool)applyToDevelopH5:(id)arg1;
+ (void)deleteDevelopH5;
+ (id)pathForDevelopH5;
+ (id)pathForDevelopH5Dir;
+ (unsigned int)getVersionForDevelopH5;
+ (_Bool)verifyDevelopH5;
+ (_Bool)isUseDevelopH5;
+ (int)verifyModuleContent:(id)arg1 isRecommend:(_Bool)arg2;
+ (id)GenerateSearchSessionUniqeID:(unsigned int)arg1;
+ (void)removeUpdatedH5;
+ (void)removeGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (void)removeAllGuideData;
+ (id)getSearchGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBysinessType:(unsigned long long)arg3;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3 andBusinessType:(unsigned long long)arg4;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3;
+ (_Bool)shouldUpdateGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBusinessType:(unsigned long long)arg3;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1;
+ (id)pathForGuideCache;
+ (id)pathForGuideCacheDir;
+ (void)removeRecommendUpdatedH5;
+ (_Bool)applyToRecommendDevelopH5:(id)arg1;
+ (void)deleteRecommendDevelopH5;
+ (id)pathForRecommendDevelopH5;
+ (id)pathForRecommendDevelopH5Dir;
+ (unsigned int)getVersionForRecommendDevelopH5;
+ (_Bool)verifyRecommendDevelopH5;
+ (_Bool)isUseRecommendDevelopH5;
+ (void)reloadRecommendDownloadConfig;
+ (void)reloadRecommendDefaultConfig;
+ (unsigned int)getRecommendVersionForUpdateH5;
+ (unsigned int)getRecommendVersionForDefaultH5;
+ (id)pathForIOS8RecommendWKH5;
+ (_Bool)verifyForRecommendUpdatedH5;
+ (id)pathForRecommendUpdatedH5;
+ (id)pathForRecommendUpdatedH5Dir;
+ (id)pathForRecommendH5Root;
+ (id)pathForRecommendDefaultH5;
+ (id)pathForRecommendDefaultH5Dir;
+ (id)pathForRecommendH5Dir;
+ (id)pathForRecommendH5ConfigData;
+ (id)pathForRecommendH5;
+ (unsigned int)getRecommendVersion;
+ (id)makeDictionaryFromPath:(id)arg1;
+ (void)reloadDownloadConfig;
+ (void)reloadDefaultConfig;
+ (unsigned int)getVersionForUpdateH5;
+ (unsigned int)getVersionForDefaultH5;
+ (id)pathForUpdatedGuidePage;
+ (id)pathForIOS8WKH5;
+ (_Bool)verifyForUpdatedH5;
+ (id)pathForUpdatedH5;
+ (id)pathForUpdatedH5Dir;
+ (id)pathForH5Root;
+ (id)pathForDefaultH5;
+ (id)pathForDefaultH5Dir;
+ (id)pathForSearchH5ConfigData;
+ (id)pathForMainH5Dir;
+ (id)pathForMainH5;
+ (unsigned int)getVersion;
+ (_Bool)isUpdatedGuidePageExist;
+ (_Bool)isUpdatedH5Exist;
+ (id)searchTextField:(id)arg1 shouldChangeRange:(struct _NSRange)arg2 replaceText:(id)arg3 shouldNotify:(_Bool *)arg4;
+ (id)formatMultiStageInputText:(id)arg1;

@end

