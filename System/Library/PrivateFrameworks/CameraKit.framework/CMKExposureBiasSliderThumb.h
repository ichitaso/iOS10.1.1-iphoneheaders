/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@interface CMKExposureBiasSliderThumb : UIView {

	float _normalizedExposureValue;

}

@property (assign,nonatomic) float normalizedExposureValue;              //@synthesize normalizedExposureValue=_normalizedExposureValue - In the implementation block
@property (nonatomic,readonly) double maxRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)maxRadius;
-(void)setNormalizedExposureValue:(float)arg1 ;
-(double)_sunRadius;
-(double)_sunRaySpacing;
-(double)_sunRayLength;
-(double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3 ;
-(float)normalizedExposureValue;
@end

