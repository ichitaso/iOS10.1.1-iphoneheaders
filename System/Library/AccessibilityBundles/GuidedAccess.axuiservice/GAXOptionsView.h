/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView, UIScrollView, NSLayoutConstraint, NSArray, GAXStyleProvider, GAXUIServer, NSString;

@interface GAXOptionsView : UIView <UIScrollViewDelegate> {

	BOOL _optionsVisible;
	UIView* _backgroundDimmingView;
	UIView* _featuresContentView;
	UIScrollView* _featuresScrollView;
	UIView* _modalView;
	NSLayoutConstraint* _modalViewBottomConstraint;
	NSLayoutConstraint* _featuresScrollViewHeightConstraint;
	NSArray* _optionsViewPresentationConstraints;
	GAXStyleProvider* _styleProvider;
	GAXUIServer* _userInterfaceServer;
	NSArray* _featureViews;

}

@property (nonatomic,readonly) long long applicationInterfaceOrientation; 
@property (nonatomic,retain) UIView * backgroundDimmingView;                                       //@synthesize backgroundDimmingView=_backgroundDimmingView - In the implementation block
@property (nonatomic,retain) UIView * featuresContentView;                                         //@synthesize featuresContentView=_featuresContentView - In the implementation block
@property (nonatomic,retain) UIScrollView * featuresScrollView;                                    //@synthesize featuresScrollView=_featuresScrollView - In the implementation block
@property (nonatomic,retain) UIView * modalView;                                                   //@synthesize modalView=_modalView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * modalViewBottomConstraint;                       //@synthesize modalViewBottomConstraint=_modalViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * featuresScrollViewHeightConstraint;              //@synthesize featuresScrollViewHeightConstraint=_featuresScrollViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * optionsViewPresentationConstraints;                         //@synthesize optionsViewPresentationConstraints=_optionsViewPresentationConstraints - In the implementation block
@property (assign,getter=isOptionsVisible,nonatomic) BOOL optionsVisible;                          //@synthesize optionsVisible=_optionsVisible - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                     //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) GAXUIServer * userInterfaceServer;                                    //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (nonatomic,copy) NSArray * featureViews;                                                 //@synthesize featureViews=_featureViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInterfaceServer:(GAXUIServer *)arg1 ;
-(GAXUIServer *)userInterfaceServer;
-(void)setModalView:(UIView *)arg1 ;
-(NSArray *)featureViews;
-(UIView *)modalView;
-(long long)applicationInterfaceOrientation;
-(void)dismissOptionsAnimated:(BOOL)arg1 ;
-(id)initWithFeatureViews:(id)arg1 styleProvider:(id)arg2 userInterfaceServer:(id)arg3 ;
-(void)presentOptionsInView:(id)arg1 animated:(BOOL)arg2 ;
-(UIScrollView *)featuresScrollView;
-(void)setBackgroundDimmingView:(UIView *)arg1 ;
-(void)setFeaturesContentView:(UIView *)arg1 ;
-(void)setFeaturesScrollView:(UIScrollView *)arg1 ;
-(void)setModalViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFeaturesScrollViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setOptionsViewPresentationConstraints:(NSArray *)arg1 ;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(id)_separatorViewsWithCount:(unsigned long long)arg1 styleProvider:(id)arg2 ;
-(UIView *)featuresContentView;
-(NSLayoutConstraint *)featuresScrollViewHeightConstraint;
-(BOOL)isOptionsVisible;
-(UIView *)backgroundDimmingView;
-(NSLayoutConstraint *)modalViewBottomConstraint;
-(NSArray *)optionsViewPresentationConstraints;
-(void)setOptionsVisible:(BOOL)arg1 ;
-(void)updateFeatureMasks;
-(void)layoutSubviews;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)updateConstraints;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
@end

