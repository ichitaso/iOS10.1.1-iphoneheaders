/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLOperator, NSMutableSet;

@interface PLAWDAuxMetrics : NSObject {

	PLOperator* _operator;
	NSMutableSet* _runningMetrics;

}

@property (__weak) PLOperator * operator;                                //@synthesize operator=_operator - In the implementation block
@property (nonatomic,retain) NSMutableSet * runningMetrics;              //@synthesize runningMetrics=_runningMetrics - In the implementation block
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
-(PLOperator *)operator;
-(void)setOperator:(PLOperator *)arg1 ;
-(id)initWithOperator:(id)arg1 ;
-(NSMutableSet *)runningMetrics;
-(void)resetTableWithEntryKey:(id)arg1 ;
-(BOOL)dropFirstEntryReceived:(id)arg1 usingFilter:(id)arg2 andStartTime:(id)arg3 ;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(BOOL)doesInterfereWithChargerWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(void)handleChargerChangeWithState:(BOOL)arg1 withDate:(id)arg2 ;
-(void)setRunningMetrics:(NSMutableSet *)arg1 ;
-(double)getRailEnergyWithEntry:(id)arg1 withFilter:(id)arg2 isRailForward:(BOOL)arg3 ;
@end

