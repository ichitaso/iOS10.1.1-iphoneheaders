/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSearchEtceteraIsolatedViewControllerAnimatedTransitioning.h>

@protocol SBViewControllerContextTransitioning;
@class SBSearchEtceteraLayoutView, SBSearchEtceteraLayoutContentView, UIView, SBSearchBackdropView, NSString;

@interface SBSearchEtceteraBlurringTransitionAnimator : NSObject <SBSearchEtceteraIsolatedViewControllerAnimatedTransitioning> {

	SBSearchEtceteraLayoutView* _layoutView;
	SBSearchEtceteraLayoutContentView* _outgoingView;
	SBSearchEtceteraLayoutContentView* _incomingView;
	SBSearchEtceteraLayoutContentView* _otherView;
	SBSearchEtceteraLayoutContentView* _searchView;
	UIView* _otherWrapperView;
	SBSearchBackdropView* _backdropView;
	unsigned long long _initialMode;
	id<SBViewControllerContextTransitioning> _transitionContext;
	double _percentComplete;
	unsigned long long _transitionToken;
	unsigned long long _destinationMode;
	unsigned long long _transitionStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long destinationMode;              //@synthesize destinationMode=_destinationMode - In the implementation block
@property (assign,nonatomic) unsigned long long transitionStyle;              //@synthesize transitionStyle=_transitionStyle - In the implementation block
-(unsigned long long)destinationMode;
-(void)_animateInteractiveTransition:(id)arg1 ;
-(void)_prepareToAnimate;
-(BOOL)shouldMoveIntoSearch;
-(void)_animateIntoSearch:(BOOL)arg1 ;
-(void)_cleanupAfterAnimating:(BOOL)arg1 ;
-(void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)shouldMoveIntoSearchOnCancel;
-(void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)setDestinationMode:(unsigned long long)arg1 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)supportsRestarting;
-(BOOL)_shouldUseLightBlurForStyle;
-(BOOL)_shouldUseDarkTintForStyle;
-(BOOL)_shouldAllowFullMotion;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(unsigned long long)transitionStyle;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(double)percentComplete;
@end

