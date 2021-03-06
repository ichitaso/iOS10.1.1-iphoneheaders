/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UIProgressView, UILabel;

@interface SLTwitterUpdateContactsFooterView : UIView <PSHeaderFooterView> {

	int _mode;
	UIActivityIndicatorView* _activityIndicator;
	UIProgressView* _progressIndicator;
	UILabel* _footerLabel;

}

@property (assign,nonatomic) int mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressIndicator;                       //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * footerLabel;                                    //@synthesize footerLabel=_footerLabel - In the implementation block
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(UIActivityIndicatorView *)activityIndicator;
-(UILabel *)footerLabel;
-(UIProgressView *)progressIndicator;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

