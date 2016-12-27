/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>
#import <SpringBoard/SBViewControllerReversibleAnimatedTransitioning.h>

@protocol SBViewControllerContextTransitioning;
@class BSAnimationSettings, NSString;

@interface SBUIAnimationSideAppSlide : SBUIWorkspaceAnimationController <SBViewControllerReversibleAnimatedTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	unsigned long long _transitionToken;
	BSAnimationSettings* _animationSettings;
	BOOL _presentingSideApp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(id)transitionAnimationFactory:(id)arg1 ;
-(BOOL)supportsRestarting;
-(void)finishSteppingBackwardToStart;
-(id)_transitionAnimator;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationSettings;
@end
