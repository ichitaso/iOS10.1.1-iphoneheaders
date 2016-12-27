/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class HKHealthChartPoint, NSDate, NSString;

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint> {

	id _userInfo;
	HKHealthChartPoint* _systolicChartPoint;
	HKHealthChartPoint* _diastolicChartPoint;
	NSDate* _date;

}

@property (nonatomic,retain) id userInfo;                                           //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * systolicChartPoint;               //@synthesize systolicChartPoint=_systolicChartPoint - In the implementation block
@property (nonatomic,retain) HKHealthChartPoint * diastolicChartPoint;              //@synthesize diastolicChartPoint=_diastolicChartPoint - In the implementation block
@property (nonatomic,retain) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(NSDate *)date;
-(void)setUserInfo:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)xValue;
-(id)yValue;
-(id)allYValues;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(HKHealthChartPoint *)systolicChartPoint;
-(HKHealthChartPoint *)diastolicChartPoint;
-(void)setSystolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(void)setDiastolicChartPoint:(HKHealthChartPoint *)arg1 ;
-(void)setChartPoint:(id)arg1 forType:(id)arg2 ;
@end
