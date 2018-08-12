//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNetworkStatusExt.h"
#import "FTSWebSearchDataSource.h"
#import "IWSViewControllerLifeCycleExt.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "WAAppCanvasWrapperViewDelegate.h"
#import "WASearchFromGlobalProxyDelegate.h"
#import "WAWidgetJSEventHandlerDelegate.h"
#import "WSContactSearchLogicDelegate.h"
#import "WSJSEventHandleDelegate.h"
#import "WSSuggestionLogicDelegate.h"
#import "WSTagSearchDelegate.h"
#import "WSVideoPlayerViewDelegate.h"

@class FTSWebSearchMgr, MMTagSearchBar, MMUIViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIColor, UIImageView, UISearchDisplayController, UITextField, UIView, UIView<YYWebViewInterface><WebSearchInterface>, WASearchFromGlobalProxy, WSContactSearchLogic, WSJSEventHandler, WSResultViewLogic, WSSuggestionLogic, WSTagSearchLogic;

@interface MMWebSearchController : NSObject <WSVideoPlayerViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UIScrollViewDelegate, WSJSEventHandleDelegate, FTSWebSearchDataSource, WSTagSearchDelegate, WSContactSearchLogicDelegate, WASearchFromGlobalProxyDelegate, WSSuggestionLogicDelegate, WAAppCanvasWrapperViewDelegate, IWSViewControllerLifeCycleExt, CNetworkStatusExt, WAWidgetJSEventHandlerDelegate>
{
    NSMutableDictionary *_videoPlayerCache;
    unsigned int _fullScreenVideoId;
    unsigned int _needResumeVideoId;
    unsigned int _maxSeqVideoId;
    _Bool _interuptExternalMusic;
    MMUIViewController *_contentVC;
    NSString *_lastShouldChangedFormatQuery;
    FTSWebSearchMgr *_webSearchMgr;
    NSMutableArray *_arrResultViews;
    WSResultViewLogic *_resultViewLogic;
    NSString *_query;
    UIImageView *_searchBarWrap;
    UIView *_searchBarSuperView;
    UIButton *_backButton;
    WSJSEventHandler *_jsEventHandler;
    WSContactSearchLogic *_searchContactLogic;
    WSTagSearchLogic *_tagSearchLogic;
    WSSuggestionLogic *_nativeSuggestionLogic;
    int _initSearchScene;
    int _searchContext;
    unsigned long long _mainBusinessType;
    unsigned long long _detailSearchType;
    NSString *_searchID;
    NSString *_browsingTID;
    NSMutableArray *_arrDeletedTID;
    UIImageView *_bottomViewShadow;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    double _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    _Bool _bHasStartRetrieveLocation;
    _Bool _bForbidSearchControllerCallBack;
    _Bool _isWeAppSearch;
    WASearchFromGlobalProxy *_weAppSearchProxy;
    UIView<YYWebViewInterface><WebSearchInterface> *_firstPageWebView;
    _Bool _hasInitResultView;
    int _currentShowViewType;
    NSString *_localSessionId;
    _Bool _isPopingFromDetailSearch;
    unsigned long long _pRequestId;
    UIView *m_fakeScreenView;
    _Bool _alwaysForbidVCInteractivePop;
    _Bool _bSkipBackButtonAtFirst;
    _Bool _bUseCustomSearchInput;
    _Bool _bUseBlurViewBeforeSearch;
    _Bool _bNeedsLuanchingWebViewBackgroundColor;
    _Bool _bNeedNavigateViewAsStack;
    id <MMWebSearchViewDelegate> _delegate;
    NSDictionary *_urlParams;
    UIView *_viewForBlur;
    UIColor *_luanchingWebViewBackgroundColor;
    NSString *_redDotMsgId;
    UIView *_resultContainerView;
    UIView *_blurView;
    UISearchDisplayController *_searchDisplayController;
    MMTagSearchBar *_searchBar;
    unsigned long long _eWebSearchType;
    UITextField *_searchTextField;
    UIImageView *_searchLeftIcon;
    UIView *_searchPromtLabel;
    NSMutableDictionary *_widgetViewCache;
    NSMutableArray *_eventHandlerList;
}

@property(retain, nonatomic) NSMutableArray *eventHandlerList; // @synthesize eventHandlerList=_eventHandlerList;
@property(retain, nonatomic) NSMutableDictionary *widgetViewCache; // @synthesize widgetViewCache=_widgetViewCache;
@property(retain, nonatomic) UIView *searchPromtLabel; // @synthesize searchPromtLabel=_searchPromtLabel;
@property(retain, nonatomic) UIImageView *searchLeftIcon; // @synthesize searchLeftIcon=_searchLeftIcon;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(readonly, nonatomic) unsigned long long eWebSearchType; // @synthesize eWebSearchType=_eWebSearchType;
@property(readonly, nonatomic) NSMutableArray *arrResultViews; // @synthesize arrResultViews=_arrResultViews;
@property(readonly, nonatomic) WSResultViewLogic *resultViewLogic; // @synthesize resultViewLogic=_resultViewLogic;
@property(readonly, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(retain, nonatomic) MMTagSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(readonly, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(readonly, nonatomic) UIView *resultContainerView; // @synthesize resultContainerView=_resultContainerView;
@property(readonly, nonatomic) UIView *searchBarWrap; // @synthesize searchBarWrap=_searchBarWrap;
@property(nonatomic) _Bool bNeedNavigateViewAsStack; // @synthesize bNeedNavigateViewAsStack=_bNeedNavigateViewAsStack;
@property(retain, nonatomic) NSString *redDotMsgId; // @synthesize redDotMsgId=_redDotMsgId;
@property(retain, nonatomic) UIColor *luanchingWebViewBackgroundColor; // @synthesize luanchingWebViewBackgroundColor=_luanchingWebViewBackgroundColor;
@property(nonatomic) _Bool bNeedsLuanchingWebViewBackgroundColor; // @synthesize bNeedsLuanchingWebViewBackgroundColor=_bNeedsLuanchingWebViewBackgroundColor;
@property(nonatomic) __weak UIView *viewForBlur; // @synthesize viewForBlur=_viewForBlur;
@property(nonatomic) _Bool bUseBlurViewBeforeSearch; // @synthesize bUseBlurViewBeforeSearch=_bUseBlurViewBeforeSearch;
@property(retain, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;
@property(nonatomic) _Bool bUseCustomSearchInput; // @synthesize bUseCustomSearchInput=_bUseCustomSearchInput;
@property(nonatomic) _Bool bSkipBackButtonAtFirst; // @synthesize bSkipBackButtonAtFirst=_bSkipBackButtonAtFirst;
@property(nonatomic) _Bool alwaysForbidVCInteractivePop; // @synthesize alwaysForbidVCInteractivePop=_alwaysForbidVCInteractivePop;
@property(nonatomic) __weak id <MMWebSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)onUpdateSuggestion;
- (id)getNativeSuggestionId;
- (void)clearHistoryOperation;
- (id)getSuggestionResult;
- (void)deleteHistorySuggestion:(id)arg1;
- (void)reportNativeSugFill:(id)arg1 withParams:(id)arg2;
- (void)reportNativeSugClick:(id)arg1 withParams:(id)arg2;
- (void)mainContentQueryChanged:(id)arg1;
- (void)onSearchInputSwitchSearchContext:(id)arg1;
- (void)onUiInit;
- (void)onBeginWebSearchAnimation;
- (void)onFocusSearchInput;
- (void)onSearchInputClickKeyboardCancel;
- (void)tryUpdateTitleView;
- (_Bool)onSearchInputHandleCancelClick;
- (_Bool)onSearchInputClickBack;
- (void)onSearchInputClickCancel:(unsigned long long)arg1;
- (void)onSearchInputClickSearch:(id)arg1;
- (void)onSearchInputTextChanged:(id)arg1;
- (_Bool)isWeAppSearch;
- (void)onSearchInputBeginEditting:(id)arg1;
- (void)onWAProxyCGISearch:(id)arg1;
- (void)onWAProxyWillBeginDetailSearch:(id)arg1;
- (void)onWAProxySetSearchPlaceHolder:(id)arg1;
- (void)onWAProxySearchInputChanged:(id)arg1;
- (void)onWAProxyHideKeyboard;
- (void)onReturnWSContactResult:(id)arg1;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (void)tryAsyncSearchContact:(id)arg1;
- (_Bool)tryParallelAsyncWebSearch:(unsigned long long)arg1 scene:(unsigned int)arg2 query:(id)arg3;
- (_Bool)tryParallelAsyncWebRecommend:(unsigned long long)arg1 reddotMsgId:(id)arg2;
- (id)getLocalSessionId;
- (_Bool)isCurrentSearchTypeSupportSuggestion;
- (int)getCurrentShowViewType;
- (unsigned int)getCorrectLevel:(id)arg1;
- (void)pushToKeywordStack:(id)arg1;
- (void)onWAWidgetJSEventHandler:(id)arg1 wrapperView:(id)arg2 endWithResult:(id)arg3;
- (void)onWrapperView:(id)arg1 showDatePickerView:(id)arg2;
- (void)onWrapperView:(id)arg1 showPickerView:(id)arg2;
- (void)onWrapperView:(id)arg1 dataUpdated:(id)arg2;
- (void)onWrapperView:(id)arg1 authorizeSuccess:(id)arg2;
- (void)onWrapperView:(id)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onWrapperView:(id)arg1 openApp:(id)arg2;
- (void)onWrapperView:(id)arg1 updateHeight:(double)arg2;
- (void)onOpenWebRecommend:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onActionSheet:(id)arg1 clickButtonAtIndex:(long long)arg2;
- (void)onWidgetClearCrashProtectCount:(id)arg1;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onOpenWAWidgetLogViewWithParams:(id)arg1;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (id)onGetSearchHistory:(id)arg1;
- (void)activeWebPage:(id)arg1;
- (void)onDeleteSearchHistory:(id)arg1;
- (void)onSearchHotWord:(id)arg1;
- (void)onSwitchSearchContext:(id)arg1;
- (void)onInsertHistoryOperation:(id)arg1;
- (void)onClearHistoryOperation:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onWSMusicStatusChanged:(id)arg1;
- (void)currentFriendScene:(unsigned int *)arg1 withParams:(id)arg2;
- (void)onDeleteBrowsingSnsItemOnH5;
- (void)onBrowsingSnsItem:(id)arg1;
- (_Bool)checkBrowsingSnsItem:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onViewTypeChange:(id)arg1;
- (void)onLaunchDetailPageForWeApp:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onWillJumpUrl:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)enableSearchBar;
- (void)hideSearchKeyboard;
- (unsigned int)searchScene;
- (id)viewStacks;
- (unsigned long long)businessType;
- (id)query;
- (void)onRemoveDetailView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)onTapBlurView;
- (void)moveMainViewToRight;
- (void)cancelMoveMainView;
- (void)updateMovingMainView;
- (void)handlePanGestureForMainView:(id)arg1;
- (void)cancelMoveDetailView;
- (void)moveDetailViewToRight;
- (void)updateMovingDetailView;
- (void)handlePanGestureForDetailView:(id)arg1;
- (void)popFromDetailSearch;
- (void)resetSearchIconFrame;
- (id)searchLeftView;
- (void)hideKeyboard;
- (void)enableButton:(id)arg1;
- (void)loadLocalHtmlForDetailPage:(id)arg1 andParams:(id)arg2;
- (id)makeNewDetailView:(id)arg1;
- (void)willBeginDetailSearchOfWeApp:(id)arg1;
- (void)willBeginDetailSearch:(id)arg1 context:(int)arg2 andParams:(id)arg3;
- (void)loadH5ForMainView;
- (double)getSearchTextFieldWidth;
- (void)beginSearch:(_Bool)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)reportClickSearch:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)asyncSearch:(id)arg1;
- (void)cancelSearch;
- (void)onClickSearchButton:(id)arg1;
- (int)currentWebSearchContext;
- (void)onBackBtnClick;
- (id)firstPageWebView;
- (id)secondLastResultView;
- (id)currentResultView;
- (_Bool)isSupportLocalSuggestion;
- (_Bool)isSupportSuggestion;
- (void)webSearchVC:(id)arg1 willDisappear:(_Bool)arg2;
- (void)webSearchVC:(id)arg1 willAppear:(_Bool)arg2;
- (unsigned long long)getCurrentBizType;
- (_Bool)isMainViewForMixSearch;
- (_Bool)isSpecialTopBarMode;
- (void)onNewIntentActivity;
- (void)onActivityStateChange:(int)arg1;
- (_Bool)isSubSearch;
- (_Bool)isVerticalSearch;
- (_Bool)isWebRecommendController;
- (void)initBackButton;
- (void)updateContentView;
- (void)updateSearchBarInfo;
- (void)initBlurView;
- (void)initResultView;
- (void)initSearchBar;
- (void)initView;
- (_Bool)shouldInitNativeSuggestionLogic:(unsigned int)arg1;
- (void)initNativeSuggestionLogic;
- (void)initContactSearchLogic;
- (void)initTagSearchLogic;
- (void)initSearchContext;
- (void)initWebSearchMgr;
- (void)initData;
- (void)startRetriveLocation;
- (void)clearSearchBarComponent;
- (void)clearFirstPageWebView;
- (void)clearAllResultWebviewsExceptFirstView;
- (void)clearArrResultWebviews;
- (void)clearResource;
- (void)cancelSearchAnimated:(_Bool)arg1;
- (id)getLatestSearchKeyword;
- (void)prepareSearchOperation:(_Bool)arg1;
- (void)prepareFirstPageSearch;
- (void)UISplitViewWillChangeSplitMode;
- (void)prepareSearchAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithScene:(int)arg1 contentVC:(id)arg2 webType:(unsigned long long)arg3;
- (id)initWithScene:(int)arg1 contentVC:(id)arg2;
- (void)onNetWorkChange:(id)arg1;
- (void)removeVideoWhenWebviewWillRemoved:(id)arg1;
- (void)playerVideoWillEnterForeground:(id)arg1;
- (void)playerVideoDidEnterBackground:(id)arg1;
- (void)removePlayerView:(id)arg1;
- (void)onVoiceButtonClick:(unsigned int)arg1 isMutedAfterClicked:(_Bool)arg2;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (void)onVideoStateChange:(long long)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)onOperateVideoPlayerWithParams:(id)arg1;
- (void)onUpdateVideoPlayerWithParams:(id)arg1;
- (void)onRemoveVideoPlayerWithParams:(id)arg1;
- (id)onInsertVideoPlayerWithParams:(id)arg1;
- (void)onPlayVideoFlowWithParams:(id)arg1;
- (id)getImageSnapShotOfWebViewForRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

