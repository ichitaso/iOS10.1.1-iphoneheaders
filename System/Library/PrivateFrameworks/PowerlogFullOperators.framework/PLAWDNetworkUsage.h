/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSTimer;

@interface PLAWDNetworkUsage : PLAWDAuxMetrics {

	unsigned _netState;
	PLEntryNotificationOperatorComposition* _netEventCallback;
	PLEntryNotificationOperatorComposition* _nameConnectionCallback;
	NSTimer* _snapshotTimer;

}

@property (retain) PLEntryNotificationOperatorComposition * netEventCallback;                    //@synthesize netEventCallback=_netEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * nameConnectionCallback;              //@synthesize nameConnectionCallback=_nameConnectionCallback - In the implementation block
@property (assign) unsigned netState;                                                            //@synthesize netState=_netState - In the implementation block
@property (retain) NSTimer * snapshotTimer;                                                      //@synthesize snapshotTimer=_snapshotTimer - In the implementation block
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitionNetUsage;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)resetNetUsageTable;
-(void)setNetState:(unsigned)arg1 ;
-(void)handleNetCallback:(id)arg1 ;
-(void)setNetEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)netEventCallback;
-(void)handleNameConnectionCallback:(id)arg1 ;
-(void)setNameConnectionCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)nameConnectionCallback;
-(unsigned)netState;
-(NSTimer *)snapshotTimer;
-(void)setSnapshotTimer:(NSTimer *)arg1 ;
@end

