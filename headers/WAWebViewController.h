//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IUiUtilExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WAAppActionSheetDelegate.h"
#import "WAContactMgrExtension.h"
#import "WAPopInteractiveTransitionDelegate.h"
#import "WAWebViewJSLogicDelegate.h"
#import "WCActionSheetDelegate.h"
#import "YYWebViewDelegate.h"

@class ForwardMessageLogicController, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSURLRequest, UIImageView, UILongPressGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView, UIView<YYWebViewInterface>, WAAppActionSheet, WABaseInfoToast, WACacheVersionChecker, WAHTMLWebViewController, WAMenuPopInteractiveTransition, WANavLoadingLayer, WAWebViewJSLogicImpl, WAWebViewMenuNavBarProperties, WAWebViewMutiFuncMenuView, WAWebViewPluginScheduler;

@interface WAWebViewController : MMUIViewController <WAAppActionSheetDelegate, MMTipsViewControllerDelegate, WCActionSheetDelegate, WAPopInteractiveTransitionDelegate, UIGestureRecognizerDelegate, IUiUtilExt, WAContactMgrExtension, WAWebViewJSLogicDelegate, UIScrollViewDelegate, YYWebViewDelegate>
{
    _Bool _bIsStatusBarBlack;
    UIView<YYWebViewInterface> *webView;
    NSString *m_initUrl;
    WAWebViewJSLogicImpl *m_jsLogicImpl;
    NSMutableDictionary *m_jsInitInfo;
    NSString *m_preloadBaseURL;
    NSString *m_preloadPageRelativeURL;
    NSString *m_preloadPageQuery;
    NSString *m_preloadFrameURL;
    NSString *m_preloadIndexURL;
    _Bool m_isPreloadFrameLoaded;
    _Bool m_isPreloadIndexLoaded;
    NSDictionary *m_dicPageAttribute;
    _Bool m_isPreloadLoadTabAttribute;
    _Bool m_isPreloadSetTabBarAttribute;
    NSDictionary *m_dicTabBarAttribute;
    _Bool m_isViewWillAppearAlready;
    _Bool m_isViewDidAppear;
    _Bool m_isSetPreloadViewAttribute;
    _Bool m_isFinishLoaded;
    NSString *m_nsCurrentUrl;
    _Bool m_isGetTabInfoFinished;
    NSDictionary *m_dicURL2TabInfo;
    NSMutableSet *m_setRequestTabInfoResourceURL;
    NSMutableDictionary *m_dicTabIndex2TabInfo;
    WAWebViewMutiFuncMenuView *_menuView;
    WAWebViewMenuNavBarProperties *_navBarProperties;
    UIView *_tailBgView;
    _Bool _bIsDraggingScroll;
    double _fLastStartOffsetY;
    _Bool _bFullScreen;
    _Bool _bHideStatusBar;
    long long _eContentMode;
    _Bool m_bDisableSwipeBack;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    WAMenuPopInteractiveTransition *_popBackInteractiveTransition;
    UIView *_webInfoTopView;
    WABaseInfoToast *_webViewToast;
    WANavLoadingLayer *_webLoadingLayer;
    ForwardMessageLogicController *m_forwardLogic;
    WAAppActionSheet *_actionSheet;
    long long _loadPageFrameStartTime;
    long long _loadPageIndexStartTime;
    _Bool m_bWebviewReceiveTerminateSignal;
    _Bool m_bWebviewReceiveTerminateSignalManually;
    WACacheVersionChecker *_moduleCacheVersionChecker;
    _Bool _isModuleDataLoaded;
    _Bool _isLoadingModuleData;
    NSString *_strOfPreloadTaskPageFrameJS;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    _Bool m_bIFrame;
    long long m_loadingCount;
    _Bool m_bShouldForcedRotationToPortrait;
    _Bool m_bIsBeingPopedFromNewMainFrame;
    NSDictionary *_cacheRouteInfo;
    long long _orientation;
    _Bool m_bWebViewTerminatedManually;
    _Bool _bHasSupplyAppInfo;
    UIImageView *_shadowView;
    _Bool m_isLanscape;
    _Bool m_isTopTabBar;
    _Bool m_bNeedOnAppRouteReload;
    _Bool m_bIsInsertCamera;
    _Bool m_bIsInsertLivePusher;
    _Bool m_bIsFromPreloadTaskWithNotAppInfo;
    _Bool _m_bIsDelayPushWebView;
    unsigned int m_uiWebviewID;
    int _enmPullRefreshMode;
    unsigned int _tagNativeMax;
    unsigned int _appServiceType;
    id <WAWebViewDelegate> m_delegate;
    NSMutableDictionary *m_extraInfo;
    double m_fTabBarHeight;
    WAWebViewPluginScheduler *_pluginScheduler;
    CDUnknownBlockType _m_onLoadInitReady;
    CDUnknownBlockType _m_onLoadViewDidAppear;
    CDUnknownBlockType _m_onViewDidAppearThenCreateTab;
    NSMutableDictionary *_nativeViews;
    NSMutableDictionary *_containerViews;
    WAHTMLWebViewController *_htmlWebVC;
}

+ (void)setNavigationRightButton:(id)arg1 webView:(id)arg2;
+ (void)setNavigationAttribute:(id)arg1 webView:(id)arg2;
+ (id)pagePathFromURL:(id)arg1;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(retain, nonatomic) WAHTMLWebViewController *htmlWebVC; // @synthesize htmlWebVC=_htmlWebVC;
@property(retain, nonatomic) NSMutableDictionary *containerViews; // @synthesize containerViews=_containerViews;
@property(retain, nonatomic) NSMutableDictionary *nativeViews; // @synthesize nativeViews=_nativeViews;
@property(nonatomic) unsigned int tagNativeMax; // @synthesize tagNativeMax=_tagNativeMax;
@property(copy, nonatomic) CDUnknownBlockType m_onViewDidAppearThenCreateTab; // @synthesize m_onViewDidAppearThenCreateTab=_m_onViewDidAppearThenCreateTab;
@property(copy, nonatomic) CDUnknownBlockType m_onLoadViewDidAppear; // @synthesize m_onLoadViewDidAppear=_m_onLoadViewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType m_onLoadInitReady; // @synthesize m_onLoadInitReady=_m_onLoadInitReady;
@property(nonatomic) _Bool m_bIsDelayPushWebView; // @synthesize m_bIsDelayPushWebView=_m_bIsDelayPushWebView;
@property(retain, nonatomic) WAWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) int enmPullRefreshMode; // @synthesize enmPullRefreshMode=_enmPullRefreshMode;
@property(nonatomic) _Bool m_bIsFromPreloadTaskWithNotAppInfo; // @synthesize m_bIsFromPreloadTaskWithNotAppInfo;
@property(nonatomic) _Bool m_bIsInsertLivePusher; // @synthesize m_bIsInsertLivePusher;
@property(nonatomic) _Bool m_bIsInsertCamera; // @synthesize m_bIsInsertCamera;
@property(nonatomic) _Bool m_bNeedOnAppRouteReload; // @synthesize m_bNeedOnAppRouteReload;
@property(readonly, nonatomic) _Bool m_bWebviewReceiveTerminateSignalManually; // @synthesize m_bWebviewReceiveTerminateSignalManually;
@property(readonly, nonatomic) _Bool m_bWebviewReceiveTerminateSignal; // @synthesize m_bWebviewReceiveTerminateSignal;
@property(retain, nonatomic) WAWebViewMenuNavBarProperties *m_navBarProperties; // @synthesize m_navBarProperties=_navBarProperties;
@property(retain, nonatomic) WAWebViewMutiFuncMenuView *m_menuView; // @synthesize m_menuView=_menuView;
@property(nonatomic) double m_fTabBarHeight; // @synthesize m_fTabBarHeight;
@property(nonatomic) _Bool m_isTopTabBar; // @synthesize m_isTopTabBar;
@property(readonly, nonatomic) NSString *m_initUrl; // @synthesize m_initUrl;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo; // @synthesize m_extraInfo;
@property(nonatomic) _Bool m_isLanscape; // @synthesize m_isLanscape;
@property(readonly, nonatomic) _Bool m_isFinishLoaded; // @synthesize m_isFinishLoaded;
@property(readonly, nonatomic) WAWebViewJSLogicImpl *m_jsLogicImpl; // @synthesize m_jsLogicImpl;
@property(nonatomic) __weak id <WAWebViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) unsigned int m_uiWebviewID; // @synthesize m_uiWebviewID;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView;
@property(nonatomic) _Bool m_bIsStatusBarBlack; // @synthesize m_bIsStatusBarBlack=_bIsStatusBarBlack;
- (void).cxx_destruct;
- (void)setRecordSubTitleIfNeed;
- (id)tagForCurrentPage;
- (id)popWebViewCountFromSelf:(int)arg1;
- (void)enableGestureBack:(_Bool)arg1;
- (id)getLeftBarButton;
- (unsigned int)getViewId:(id)arg1;
- (id)getChildViews;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)bringNativeToFront:(id)arg1;
- (id)getPluginScheduler;
- (id)getWxaExternalInfo;
- (void)remoteDomEvent:(id)arg1 webViewID:(unsigned int)arg2;
- (_Bool)isPreloadWebView;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isOpenDebugAndVConsole;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (_Bool)checkRunModeOnWebview:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)webviewController;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)startForcedRotation:(long long)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllNativeViewsAndNotifyPlugin;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)finishLoadAction;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)showPublicJSSpendTime;
- (void)checkJSBridgeObjects:(_Bool)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (id)getPreInjectScriptStr;
- (void)goToURL:(id)arg1;
- (void)stop;
- (void)reload;
- (void)viewDidLayoutSubviews;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidPresent:(id)arg1 animated:(_Bool)arg2;
- (void)willDismissAndShow;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onWebViewLeave;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)onLongPressOnWebview:(id)arg1;
- (void)enableLongPressDetect;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)adjustSubviewRects;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)realTriggerPageReload;
- (void)onWebViewReadyToTerminate;
- (void)terminateManually;
- (void)pageReloadByManuallyTerminateWithRouteInfo:(id)arg1;
- (void)pageReloadWithRouteInfo:(id)arg1;
- (void)recoverWebView;
- (void)initWebViewIfNeeded;
- (void)internalInitWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)supplyAppInfoWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (id)initForPreloadAppTask;
- (id)initWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (void)setPrivacySubTitleIfNeed;
- (void)setBackgroundColor;
- (void)notifyToJSBridgeVisibilityChanged:(_Bool)arg1;
- (id)taskExtInfo;
- (id)extraInfo;
- (void)printConsoleLog:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)publishEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)doJsApiInitEvent;
- (void)setCurrentUrl:(id)arg1;
- (id)getCurrentUrl;
- (long long)webviewContentMode;
- (_Bool)isNeedShowReturnItem;
- (void)onRouteToHome;
- (void)onKill;
- (void)onAllExit;
- (void)OnReturn;
- (void)doBackActionCleanWithType;
- (void)DismissMyWebViewAnimated:(_Bool)arg1;
- (_Bool)isWeAppUseModule;
- (id)getSessionID;
- (id)getPackageConfig;
- (id)getCurrentContact;
- (id)getCurrentUserName;
- (_Bool)isViewDidAppear;
- (_Bool)isAlreadyViewWillAppear;
- (id)getPresentingWebVC;
- (_Bool)isFirstPage;
- (_Bool)isLastWebVC;
- (_Bool)isChildTabVC;
- (_Bool)isTabWebVC;
- (_Bool)isThisPageUsePreload;
- (_Bool)isOpenAtSubPage;
- (unsigned long long)debugMode;
- (_Bool)isDebugMode;
- (_Bool)isAppLaunchFirstWebview;
- (unsigned int)getAppType;
- (id)getInitUrl;
- (long long)getCurrentVersionNum;
- (id)getCurrentAppId;
- (void)setTitle:(id)arg1;
- (id)__privateTabbarInstance;
- (double)getWebViewWindowHeight;
- (void)fsmenu_calcCurrentWebViewInset:(struct UIEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)normal_calcCurrentWebViewInset:(struct UIEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)calcCurrentWebViewInset:(struct UIEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)calcCurrentWebViewY:(double *)arg1 height:(double *)arg2;
- (void)resetWebviewInsetOrY;
- (void)setContentNavMode:(long long)arg1;
- (_Bool)createLoadSubPackageTask:(id)arg1 completeHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)changeNavigationBarTitle:(id)arg1;
- (void)onLoadModuleData:(_Bool)arg1 errorCode:(long long)arg2 moduleName:(id)arg3;
- (void)checkModuleDataLoaded;
- (id)getFileData:(id)arg1;
- (void)getFileData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)filterRegularString:(id)arg1;
- (void)parseDataString:(id)arg1 AndGetStype:(id *)arg2 body:(id *)arg3 script:(id *)arg4;
- (id)elementStringFromXML:(id)arg1 startPos:(unsigned long long *)arg2 elementName:(id)arg3 containElementName:(_Bool)arg4;
- (id)cachedDataWithURL:(id)arg1;
- (void)loadFrameContent:(id)arg1;
- (void)setLoadPageIndexStartTime:(long long)arg1;
- (long long)getLoadPageIndexStartTime;
- (void)loadModuleScriptDataWithFilePath:(id)arg1;
- (id)allElementStringFromHtml:(id)arg1 elementName:(id)arg2 containElementName:(_Bool)arg3;
- (id)getPageFrameJSStr;
- (void)loadPageFrameJSOfPreload;
- (void)tryLoadPreloadAppTaskIndexData;
- (void)injectWebViewConfigForPreload;
- (void)loadPreloadAppTaskFrameData;
- (void)loadIndexData;
- (id)getFrameContentWithURL:(id)arg1;
- (void)loadFrameDataWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2;
- (void)bringTabBarToFront;
- (void)setPageTabAttribute;
- (void)loadPreloadTabAttribute;
- (void)setNavigationBarTitle:(id)arg1 backgroundColor:(id)arg2 alpha:(double)arg3;
- (void)setPageBackgroundColor;
- (void)updateNavigationBarItemsAndStatusBarStyle;
- (void)setNavigationAttributeFromChildWebView:(id)arg1;
- (id)pageAttribute;
- (void)setPreloadPageAttribute;
- (void)resetPreloadPageAttributeMark;
- (void)loadPreloadPageAttribute;
- (void)setupAttributeWhenKnowsPagePath;
- (void)onCallbackInitReady;
- (void)loadIndexDataWithRelativeURL:(id)arg1;
- (_Bool)isIndexDataLoaded;
- (id)getPreloadIndexURL;
- (id)getPreloadPageQuery;
- (id)getPreloadPageRelativeURL;
- (id)getPreloadBaseURL;
- (id)preloadFrameFileName;
- (_Bool)isInStarList;
- (id)getPresentContact;
- (_Bool)canShowCommentMenuItem;
- (_Bool)canShowShareMenuItem;
- (id)pluginNavBar;
- (id)pluginVideoPlayer;
- (id)pluginKeyboard;
- (id)pluginAppMsg;
- (id)pluginReportPageEvent;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(long long)arg3 delegate:(id)arg4;
- (id)getCurrentViewController;
- (void)enterTempSessionWithSessionFrom:(id)arg1 appid:(id)arg2 businessUserName:(id)arg3 sendMsgInfo:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)shareWithGroup;
- (void)shareWebViewPage;
- (void)commonShare;
- (void)showTipsViewController:(id)arg1;
- (void)onCancelStar;
- (void)onAddToStar;
- (void)addToHomeScreen;
- (void)onLeaveBackChatState;
- (void)onOpenComment;
- (void)onBackToChat;
- (void)onOpenBrandProfileWebView;
- (void)onClosePerformance;
- (void)onOpenPerformance;
- (void)onOpenBrandProfile;
- (void)onCloseVConsole;
- (void)onOpenVConsole;
- (void)onWAActionSheetDidDismiss;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (id)menuDebugButtonTitleArray;
- (id)menubuttonTitleArray;
- (id)takeCurrentSnapshot;
- (_Bool)isMenuVisible;
- (void)onMenuShow;
- (id)processWebViewSceenShot2ThumbImage:(id)arg1;
- (void)snapShotWebviewImageAtTop:(CDUnknownBlockType)arg1;
- (id)snapShotWebviewImage;
- (_Bool)onPopBackInteractiveRecognizeEdgeGesture;
- (void)onPopBackInteractiveTransitionEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)removePopBackInteractivePopGesture;
- (void)addPopBackInteractivePopGesture;
- (void)onWeAppDismissTransitionEnd:(_Bool)arg1;
- (id)currentPopInteractiveTransiton;
- (void)resetLoadingLayer;
- (void)dismissLoadingLayer;
- (void)showLoadingLayerWhenPushed;
- (void)onWebviewToastDidDismiss;
- (void)showJSApiForbbiddenToast:(id)arg1;
- (_Bool)isWebviewPresenting;
- (void)onWebViewMenuLongPressMore;
- (void)onWebViewMenuReturn;
- (void)onWebViewMenuAllExit;
- (void)onWebViewMenuMore;
- (struct CGRect)currentMenuViewFrame;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1;
- (id)getTabSelectedWebView;
- (void)onWAWebErrorViewOperateBtnClick:(id)arg1;
- (void)show404ErrorView;
- (void)show404ErrorWaittingView;
- (void)showErrorViewWithMessage:(id)arg1;
- (void)addBackInfoViewIndicator:(id)arg1;
- (id)getBackInfoViewWithAppId:(id)arg1 enablePullRefresh:(_Bool)arg2;
- (void)popToFirstWebViewInStackWithAnimated:(_Bool)arg1;
- (unsigned long long)getWebViewDepthInStack;
- (id)getFirstWebViewInStack;
- (_Bool)isCreatingChildOrSiblingTab;
- (_Bool)isChildTabSelected;
- (void)tabBarDidSwitchTab;
- (id)getChildTabWebViews;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1;
- (id)getParentTabViewController;
- (void)setTailBackGroundColor:(id)arg1;
- (void)setWebViewTopViewColor:(id)arg1;
- (void)setWebViewBackgroundColor:(id)arg1;
- (_Bool)getFullScreen;
- (void)setFullScreen:(_Bool)arg1;
- (void)disableFullScreen;
- (void)enableFullScreen;
- (void)setCustomNavBarOffset:(double)arg1;
- (double)getCustomNavBarOffset;
- (void)setNavLoading:(_Bool)arg1;
- (void)setNavRightButtonHidden:(_Bool)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setNavBarElementAndStatusBarStyle:(int)arg1;
- (void)changeStatusBarWhite:(_Bool)arg1;
- (void)setNavBarBgColor:(id)arg1;
- (void)setNavMenuState:(long long)arg1;
- (void)updateNavView;
- (id)currentNavMenuView;
- (void)resetNavView;
- (id)title;
- (void)uiLayoutSubView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

