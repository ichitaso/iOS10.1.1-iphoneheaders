/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface RPYouTubeActivityProgressOverlay : UIView {

	BOOL _isShowing;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                                           //@synthesize isShowing=_isShowing - In the implementation block
-(BOOL)isShowing;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setIsShowing:(BOOL)arg1 ;
-(void)setShowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setupOverlayAnimated:(BOOL)arg1 ;
-(void)tearDownOverlayAnimated:(BOOL)arg1 ;
-(void)stopActivity;
@end

