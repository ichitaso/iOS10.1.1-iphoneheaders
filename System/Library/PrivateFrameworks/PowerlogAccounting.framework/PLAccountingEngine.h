/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAccountingDistributionManagerDelegate.h>
#import <libobjc.A.dylib/PLAccountingCorrectionManagerDelegate.h>
#import <libobjc.A.dylib/PLAccountingQualificationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PLActivity, PLEntryNotificationOperatorComposition, PLAccountingDistributionManager, PLAccountingCorrectionManager, PLAccountingQualificationManager, NSString;

@interface PLAccountingEngine : NSObject <PLAccountingDistributionManagerDelegate, PLAccountingCorrectionManagerDelegate, PLAccountingQualificationManagerDelegate> {

	BOOL _pluggedIn;
	NSObject*<OS_dispatch_queue> _workQueue;
	PLActivity* _chunkActivity;
	PLEntryNotificationOperatorComposition* _batteryListener;
	PLAccountingDistributionManager* _distributionManager;
	PLAccountingCorrectionManager* _correctionManager;
	PLAccountingQualificationManager* _qualificationManager;

}

@property (retain) NSObject*<OS_dispatch_queue> workQueue;                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) PLActivity * chunkActivity;                                                     //@synthesize chunkActivity=_chunkActivity - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryListener;                       //@synthesize batteryListener=_batteryListener - In the implementation block
@property (assign) BOOL pluggedIn;                                                                 //@synthesize pluggedIn=_pluggedIn - In the implementation block
@property (nonatomic,retain) PLAccountingDistributionManager * distributionManager;                //@synthesize distributionManager=_distributionManager - In the implementation block
@property (nonatomic,retain) PLAccountingCorrectionManager * correctionManager;                    //@synthesize correctionManager=_correctionManager - In the implementation block
@property (nonatomic,retain) PLAccountingQualificationManager * qualificationManager;              //@synthesize qualificationManager=_qualificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)workQueue;
+(id)allDistributionIDs;
+(double)minEnergy;
+(BOOL)accountingDebugEnabled;
+(void)clearWithEntryKey:(id)arg1 ;
+(id)gasGaugeEntryKey;
+(id)allSoCRootNodeIDs;
+(id)deviceSoCRootNodeIDs;
+(id)allBBRootNodeIDs;
+(id)deviceBBRootNodeIDs;
+(id)normalizeWeights:(id)arg1 ;
+(id)distributionIDForDistributionName:(id)arg1 ;
+(id)qualificationIDForQualificationName:(id)arg1 ;
+(id)debugInstance;
+(id)deviceRootNodeIDs;
+(id)allQualificationIDs;
+(double)maxPowerEventChunkInterval;
-(id)init;
-(void)reload;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)didQualifyEnergyEvent:(id)arg1 withRootNodeID:(id)arg2 withQualificationID:(id)arg3 ;
-(void)addQualificationEventIntervalWithLastQualificationEventForward:(id)arg1 withQualificationEventForward:(id)arg2 ;
-(void)addQualificationEventIntervalWithLastQualificationEventBackward:(id)arg1 withQualificationEventBackward:(id)arg2 ;
-(void)addQualificationEventInterval:(id)arg1 ;
-(void)addQualificationEventPoint:(id)arg1 ;
-(void)didCorrectEnergyEstimate:(id)arg1 ;
-(void)didDistributeEnergyEstimate:(id)arg1 ;
-(void)addDistributionEventIntervalWithLastDistributionEventForward:(id)arg1 withDistributionEventForward:(id)arg2 ;
-(void)addDistributionEventIntervalWithLastDistributionEventBackward:(id)arg1 withDistributionEventBackward:(id)arg2 ;
-(void)addDistributionEventInterval:(id)arg1 ;
-(void)addDistributionEventPoint:(id)arg1 ;
-(void)didCreateChildEnergyEstimate:(id)arg1 withParentEnergyEstimate:(id)arg2 ;
-(void)chunkWithLastChunkDate:(id)arg1 withNow:(id)arg2 ;
-(void)setDistributionManager:(PLAccountingDistributionManager *)arg1 ;
-(void)setCorrectionManager:(PLAccountingCorrectionManager *)arg1 ;
-(void)setQualificationManager:(PLAccountingQualificationManager *)arg1 ;
-(void)createEventWithEvent:(id)arg1 withActionBlock:(/*^block*/id)arg2 ;
-(void)addEnergyMeasurementWithRootNodeID:(int)arg1 withEnergy:(double)arg2 withRange:(id)arg3 ;
-(PLAccountingDistributionManager *)distributionManager;
-(PLAccountingCorrectionManager *)correctionManager;
-(void)createAggregateRootNodeEnergyEntryWithEnergyEstimate:(id)arg1 ;
-(PLAccountingQualificationManager *)qualificationManager;
-(void)reloadLastPowerEventsWithLastDeviceBootDate:(id)arg1 ;
-(void)reloadLastDistributionEventsWithLastDeviceBootDate:(id)arg1 ;
-(void)reloadLastQualificationEventsWithLastDeviceBootDate:(id)arg1 ;
-(PLActivity *)chunkActivity;
-(void)setChunkActivity:(PLActivity *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryListener;
-(void)setBatteryListener:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)createPowerEventForwardWithRootNodeID:(int)arg1 withPower:(double)arg2 withStartDate:(id)arg3 ;
-(void)createDistributionEventForwardWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3 ;
-(void)createQualificationEventForwardWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3 ;
-(void)createDistributionEventIntervalWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4 ;
-(void)createPowerEventBackwardWithRootNodeID:(int)arg1 withPower:(double)arg2 withEndDate:(id)arg3 ;
-(void)createPowerEventIntervalWithRootNodeID:(int)arg1 withPower:(double)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4 ;
-(void)createQualificationEventIntervalWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4 ;
-(void)createDistributionEventForwardWithDistributionID:(int)arg1 withAddingChildNodeName:(id)arg2 withStartDate:(id)arg3 ;
-(void)createDistributionEventForwardWithDistributionID:(int)arg1 withRemovingChildNodeName:(id)arg2 withStartDate:(id)arg3 ;
-(void)createDistributionEventBackwardWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withEndDate:(id)arg3 ;
-(void)createDistributionEventPointWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3 ;
-(void)addPowerMeasurementEventIntervalWithPower:(double)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(void)createQualificationEventBackwardWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withEndDate:(id)arg3 ;
-(void)createQualificationEventPointWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3 ;
-(id)currentDistributionEventForwardWithDistributionID:(int)arg1 ;
-(void)createQualificationEventForwardWithQualificationID:(int)arg1 withAddingChildNodeName:(id)arg2 withStartDate:(id)arg3 ;
-(void)createQualificationEventForwardWithQualificationID:(int)arg1 withRemovingChildNodeName:(id)arg2 withStartDate:(id)arg3 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)pluggedIn;
-(void)setPluggedIn:(BOOL)arg1 ;
@end
