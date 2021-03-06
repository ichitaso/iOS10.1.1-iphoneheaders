/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, NSString;

@interface CloudTabHeaderView : UIView {

	UILabel* _label;
	UIImageView* _icon;
	UIView* _separatorView;
	long long _style;
	double _bottomPadding;
	double _paddingBetweenIconAndLabel;
	double _iconVerticalAdjustment;
	double _leftEdgeInset;

}

@property (nonatomic,copy) NSString * text; 
+(double)defaultHeightForStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
@end

