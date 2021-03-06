/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _DASPolicyRequiredValueRationale : NSObject {

	NSString* _condition;
	double _currentValue;
	double _requiredValue;

}

@property (nonatomic,retain) NSString * condition;              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) double currentValue;               //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) double requiredValue;              //@synthesize requiredValue=_requiredValue - In the implementation block
-(id)initWithCondition:(id)arg1 withRequiredValue:(double)arg2 withCurrentValue:(double)arg3 ;
-(void)setRequiredValue:(double)arg1 ;
-(double)requiredValue;
-(id)description;
-(NSString *)condition;
-(void)setCondition:(NSString *)arg1 ;
-(double)currentValue;
-(void)setCurrentValue:(double)arg1 ;
@end

