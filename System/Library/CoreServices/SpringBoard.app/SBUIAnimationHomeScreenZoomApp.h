/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomApp.h>
#import <SpringBoard/SBViewControllerReversibleAnimatedTransitioning.h>
#import <SpringBoard/SBTreeNodeViewControllerTransitionObserver.h>

@protocol SBViewControllerContextTransitioning, BSInvalidatable;
@class SBLeafIcon, SBAppView, SBIconImageView, SBWindowSelfHostWrapper, SBOrientationTransformWrapperView, NSString;

@interface SBUIAnimationHomeScreenZoomApp : SBUIAnimationZoomApp <SBViewControllerReversibleAnimatedTransitioning, SBTreeNodeViewControllerTransitionObserver> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	SBLeafIcon* _transitioningIcon;
	SBAppView* _transitioningAppView;
	SBIconImageView* _hiddenTargetIconImageView;
	SBWindowSelfHostWrapper* _sceneLayoutWindowHostWrapper;
	SBOrientationTransformWrapperView* _wallpaperEffectViewWrapper;
	id<BSInvalidatable> _disableHomeScreenWindowHostingAssertion;
	/*^block*/id _homeScreenTransitionCompletion;
	BOOL _homeScreenTransitionFinishedCancelled;
	BOOL _finishedZooming;
	BOOL _attemptingCrossfade;
	BOOL _finishedCrossfadingToHostView;
	BOOL _finishedActivating;
	BOOL _activationFailed;

}

@property (nonatomic,retain) SBLeafIcon * transitioningIcon;              //@synthesize transitioningIcon=_transitioningIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(id)transitionAnimationFactory:(id)arg1 ;
-(BOOL)supportsRestarting;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)_transitionAnimator;
-(void)treeNodeViewController:(id)arg1 willPerformOperation:(long long)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withTransitionCoordinator:(id)arg7 ;
-(void)_applicationDependencyStateChanged;
-(void)_maybeStartCrossfade;
-(void)_maybeReportAnimationFinished;
-(BOOL)transitionSupportsCancelling;
-(BOOL)_pastPointOfNoReturn;
-(void)_configureFolderIconsForAnimation:(BOOL)arg1 ;
-(SBLeafIcon *)transitioningIcon;
-(void)_configureAppView:(id)arg1 forZoomDirection:(unsigned long long)arg2 ;
-(BOOL)_showsLiveContentASAP;
-(void)setTransitioningIcon:(SBLeafIcon *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
@end

