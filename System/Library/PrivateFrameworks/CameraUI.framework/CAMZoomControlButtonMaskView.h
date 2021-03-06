/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface CAMZoomControlButtonMaskView : UIView {

	CAShapeLayer* __shapeLayer;
	CGRect _maskOvalFrame;

}

@property (nonatomic,readonly) CAShapeLayer * _shapeLayer;              //@synthesize _shapeLayer=__shapeLayer - In the implementation block
@property (assign,nonatomic) CGRect maskOvalFrame;                      //@synthesize maskOvalFrame=_maskOvalFrame - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMaskOvalFrame:(CGRect)arg1 ;
-(CGRect)maskOvalFrame;
-(CAShapeLayer *)_shapeLayer;
@end

