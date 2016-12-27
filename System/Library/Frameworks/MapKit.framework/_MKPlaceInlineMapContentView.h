/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKViewWithHairline, UIImageView, UIImage;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {

	MKViewWithHairline* _hairlineView;
	UIImageView* _mapView;

}

@property (nonatomic,retain) UIImage * map; 
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImage *)map;
-(void)infoCardThemeChanged:(id)arg1 ;
-(BOOL)isBottomHairlineHidden;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)setMap:(UIImage *)arg1 ;
@end
