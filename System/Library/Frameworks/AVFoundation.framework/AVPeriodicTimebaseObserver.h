/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV2 _intervalRequested;
	SCD_Struct_AV2 _lastIntervalUsed;
	SCD_Struct_AV2 _lastPeriodicFireTime;
	SCD_Struct_AV2 _lastNonperiodicFireTime;
	SCD_Struct_AV2 _lastStopTime;
	unsigned _sequenceNum;
	/*^block*/id _block;

}
-(void)dealloc;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 interval:(SCD_Struct_AV2)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlockForTime:(SCD_Struct_AV2)arg1 ;
@end

