/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSDate;

@interface IDSCountdown : NSObject {

	NSDate* _startDate;
	opaque_pthread_mutex_t _startDateMutex;
	double _timeInterval;

}

@property (nonatomic,readonly) BOOL isCountingDown; 
-(BOOL)isCountingDown;
-(BOOL)startCountingDown;
-(BOOL)_criticalIsCountingDown;
-(void)dealloc;
-(id)initWithTimeInterval:(double)arg1 ;
@end
