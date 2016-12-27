/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle;

@interface HKDailySleepSeries : HKGraphSeries {

	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;

}

@property (nonatomic,retain) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
-(void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 axisRect:(CGRect)arg4 ;
-(void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 axisRect:(CGRect)arg3 secondaryRenderContext:(id)arg4 ;
-(void)_addCoordinate:(id)arg1 toPath:(id)arg2 ;
-(void)_assertCoordinateCompatibility:(id)arg1 ;
-(BOOL)shouldInvertAxis;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK3)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)selectedStrokeStyle;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
@end
