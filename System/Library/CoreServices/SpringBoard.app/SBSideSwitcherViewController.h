/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <SpringBoard/SBSideSwitcherScrollingItemViewDelegate.h>
#import <SpringBoard/SBSideSwitcherPageViewDelegate.h>
#import <SpringBoard/SBIconViewMapDelegate.h>
#import <SpringBoard/SBIconViewDelegate.h>
#import <SpringBoard/SBAppViewHostRequester.h>

@class FBUIApplicationSceneDeactivationAssertion, SBSideSwitcherScrollingItemViewController, NSMutableDictionary, NSMutableArray, NSMutableSet, SBIconViewMap, SBDisplayItem, NSString;

@interface SBSideSwitcherViewController : SBLayoutElementViewController <SBSideSwitcherScrollingItemViewDelegate, SBSideSwitcherPageViewDelegate, SBIconViewMapDelegate, SBIconViewDelegate, SBAppViewHostRequester> {

	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBSideSwitcherScrollingItemViewController* _itemViewController;
	SCD_Struct_SB24 _wallpaperBlurTransitionState;
	NSMutableDictionary* _switcherPageViews;
	NSMutableArray* _displayItems;
	NSMutableSet* _hostedApplicationDisplayItems;
	SBIconViewMap* _iconViewMap;
	SBDisplayItem* _transitioningDisplayItem;
	double _transitionProgress;
	BOOL _transitionPresenting;
	unsigned long long _transitionState;
	BOOL _hasActivatedItemWhileVisible;
	BOOL _viewCurrentlyAppeared;

}

@property (assign,nonatomic) BOOL viewCurrentlyAppeared;                      //@synthesize viewCurrentlyAppeared=_viewCurrentlyAppeared - In the implementation block
@property (assign,nonatomic) unsigned long long transitionState;              //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,nonatomic) double transitionProgress;                       //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_supportsHighQualityBlurInOverlayMode;
+(id)grabberColorForGrabberState:(long long)arg1 pressed:(BOOL)arg2 ;
+(long long)overlayBlendModeForGrabberState:(long long)arg1 pressed:(BOOL)arg2 ;
+(id)sharedInstance;
-(long long)resizingPolicyForPageView:(id)arg1 ;
-(CGSize)contentViewSizeForPageView:(id)arg1 ;
-(CGAffineTransform)contentViewTransformForPageView:(id)arg1 ;
-(void)startTransitionWithDisplayItem:(id)arg1 presenting:(BOOL)arg2 fromDisplayMode:(long long)arg3 ;
-(void)endTransitionWithSuccess:(BOOL)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(long long)appViewRequesterPriority:(id)arg1 ;
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
-(BOOL)iconShouldAllowTap:(id)arg1 ;
-(double)iconLabelWidth;
-(Class)iconViewClassForIcon:(id)arg1 location:(int)arg2 ;
-(int)viewMap:(id)arg1 locationForIcon:(id)arg2 ;
-(id)windowForRecycledViewsInViewMap:(id)arg1 ;
-(void)setTransitionState:(unsigned long long)arg1 ;
-(id)iconViewMapForSwitcherPageView:(id)arg1 ;
-(CGAffineTransform)overlayViewTransformForPageView:(id)arg1 ;
-(void)selectedPageView:(id)arg1 ;
-(BOOL)canSelectPageView:(id)arg1 numberOfTaps:(long long)arg2 ;
-(BOOL)supportsReuse;
-(void)willBeginTransitionToVisible:(BOOL)arg1 ;
-(long long)_sideSwitcherGrabberStyleForDisplayItem:(id)arg1 ;
-(id)sideSwitcherScroller:(id)arg1 viewForDisplayItem:(id)arg2 ;
-(void)_startUpdatingWallpaperForTransition;
-(void)_updateWallpaperForTransition;
-(void)prepareToEndTransitionAnimated:(BOOL)arg1 ;
-(void)_endWallpaperForTransitionWithSuccess:(BOOL)arg1 ;
-(double)heightFromTopForFinalItemSize;
-(void)_switcherModelChanged:(id)arg1 ;
-(id)_initialDisplayItemsList;
-(void)setViewCurrentlyAppeared:(BOOL)arg1 ;
-(CGSize)_nativeItemSize;
-(BOOL)viewCurrentlyAppeared;
-(BOOL)_sideSwitcherIsPinned;
-(void)sideSwitcherScroller:(id)arg1 purgeView:(id)arg2 ;
-(CGSize)sideSwitcherScrollerItemSize:(id)arg1 ;
-(double)sideSwitcherScrollerDistanceBetweenItems:(id)arg1 ;
-(BOOL)sideSwitcherScroller:(id)arg1 displayItemWantsToBeKeptInViewHierarchy:(id)arg2 ;
-(long long)displayModeForTransitioningDisplayItem;
-(id)_initWithDisplay:(id)arg1 ;
-(void)dealloc;
-(id)view;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_configureBackgroundView;
-(void)viewDidLoad;
-(id)initWithDisplay:(id)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(unsigned long long)transitionState;
-(CGSize)_itemSize;
@end

