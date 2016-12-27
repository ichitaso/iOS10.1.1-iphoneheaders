/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ATXAppLaunchHistogramInterface
@required
-(void)decayByFactor:(double)arg1;
-(void)decayWithHalfLife:(double)arg1;
-(double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2 andFilterSpan:(unsigned)arg3;
-(void)resetData;
-(void)addLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3;
-(void)removeLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3;
-(BOOL)removeAllHistoryForBundleId:(id)arg1;
-(double)launchPopularityWithBundleId:(id)arg1 date:(id)arg2;
-(double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2;
-(double)totalTimeOfDayLaunchesForDate:(id)arg1;
-(double)overallLaunchPopularityForBundleId:(id)arg1;
-(double)totalLaunches;
-(BOOL)bundleHasBeenLaunched:(id)arg1;
-(void)verifyDataIntegrity;

@end
