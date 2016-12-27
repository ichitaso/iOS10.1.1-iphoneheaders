/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpertFeatureAddon.h>

@class NSDateComponents;

@interface RTPredictionExpertFeatureAddonTimeOfDay : RTPredictionExpertFeatureAddon {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _endDateComponents;

}

@property (nonatomic,readonly) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * endDateComponents;                //@synthesize endDateComponents=_endDateComponents - In the implementation block
+(id)timeOfDayFeatureAddonsWithRequestedDuration:(double)arg1 offsetFromMidnight:(double)arg2 ;
-(id)description;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)endDateComponents;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(long long)addonType;
@end
