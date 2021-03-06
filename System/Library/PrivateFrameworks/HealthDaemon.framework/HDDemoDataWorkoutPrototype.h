/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject {

	unsigned long long _workoutActivityType;
	unsigned long long _goalType;
	HKQuantity* _goal;
	double _startTimeOffsetInDay;
	double _duration;
	double _totalEnergyBurnedInKcal;
	double _totalDistanceWalkingInMiles;
	double _totalDistanceCyclingInMiles;
	double _totalDistanceSwimmingInYards;
	long long _totalSwimmingLaps;

}

@property (assign,nonatomic) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                         //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,retain) HKQuantity * goal;                                   //@synthesize goal=_goal - In the implementation block
@property (assign,nonatomic) double startTimeOffsetInDay;                         //@synthesize startTimeOffsetInDay=_startTimeOffsetInDay - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double totalEnergyBurnedInKcal;                      //@synthesize totalEnergyBurnedInKcal=_totalEnergyBurnedInKcal - In the implementation block
@property (assign,nonatomic) double totalDistanceWalkingInMiles;                  //@synthesize totalDistanceWalkingInMiles=_totalDistanceWalkingInMiles - In the implementation block
@property (assign,nonatomic) double totalDistanceCyclingInMiles;                  //@synthesize totalDistanceCyclingInMiles=_totalDistanceCyclingInMiles - In the implementation block
@property (assign,nonatomic) double totalDistanceSwimmingInYards;                 //@synthesize totalDistanceSwimmingInYards=_totalDistanceSwimmingInYards - In the implementation block
@property (assign,nonatomic) long long totalSwimmingLaps;                         //@synthesize totalSwimmingLaps=_totalSwimmingLaps - In the implementation block
+(id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 distanceSwimming:(double)arg9 totalSwimmingLaps:(long long)arg10 ;
+(id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)workoutActivityType;
-(void)setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)setGoalType:(unsigned long long)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(unsigned long long)goalType;
-(HKQuantity *)goal;
-(double)startTimeOffsetInDay;
-(void)setStartTimeOffsetInDay:(double)arg1 ;
-(double)totalEnergyBurnedInKcal;
-(void)setTotalEnergyBurnedInKcal:(double)arg1 ;
-(double)totalDistanceWalkingInMiles;
-(void)setTotalDistanceWalkingInMiles:(double)arg1 ;
-(double)totalDistanceCyclingInMiles;
-(void)setTotalDistanceCyclingInMiles:(double)arg1 ;
-(double)totalDistanceSwimmingInYards;
-(void)setTotalDistanceSwimmingInYards:(double)arg1 ;
-(long long)totalSwimmingLaps;
-(void)setTotalSwimmingLaps:(long long)arg1 ;
@end

