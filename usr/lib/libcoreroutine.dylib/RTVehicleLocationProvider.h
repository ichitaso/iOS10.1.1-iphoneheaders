/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/RTManagedConfigurationObserver.h>

@protocol OS_dispatch_source;
@class NSObject, RTLocationManager, RTMotionActivityManager, RTMapsSupportManager, RTMetricManager, RTPurgeManager, NSManagedObjectContext, RTVehicleLocationHistoryController, RTDeviceLocationPredictor, RTManagedConfiguration, RTVehicleEvent, NSMutableArray, RTFMCScoreBoard, NSString;

@interface RTVehicleLocationProvider : RTNotifier <RTManagedConfigurationObserver> {

	BOOL _monitorVehicleLocation;
	BOOL _monitorVehicleConnection;
	BOOL _monitorVehicleExit;
	BOOL _monitorLocation;
	BOOL _vehicleEventPendingDeletion;
	BOOL _locationsOfInterestAvailable;
	NSObject*<OS_dispatch_source> _finalizeLocationEstimateTimer;
	RTLocationManager* _locationManager;
	RTMotionActivityManager* _motionActivityManager;
	RTMapsSupportManager* _mapsSupportManager;
	RTMetricManager* _metricManager;
	RTPurgeManager* _purgeManager;
	NSManagedObjectContext* _managedObjectContext;
	RTVehicleLocationHistoryController* _vehicleLocationHistoryController;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTManagedConfiguration* _managedConfiguration;
	RTVehicleEvent* _lastVehicleParkedEvent;
	RTVehicleEvent* _pendingVehicleParkedEvent;
	RTVehicleEvent* _vehicleEventPendingPersist;
	NSMutableArray* _locationsCache;
	NSMutableArray* _locationsCacheLeeched;
	RTFMCScoreBoard* _scoreBoard;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> finalizeLocationEstimateTimer;                        //@synthesize finalizeLocationEstimateTimer=_finalizeLocationEstimateTimer - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                                //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                                    //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTMapsSupportManager * mapsSupportManager;                                          //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                                    //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                                      //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                                      //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) RTVehicleLocationHistoryController * vehicleLocationHistoryController;              //@synthesize vehicleLocationHistoryController=_vehicleLocationHistoryController - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;                                //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTManagedConfiguration * managedConfiguration;                                      //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (assign,nonatomic) BOOL monitorVehicleLocation;                                                        //@synthesize monitorVehicleLocation=_monitorVehicleLocation - In the implementation block
@property (assign,nonatomic) BOOL monitorVehicleConnection;                                                      //@synthesize monitorVehicleConnection=_monitorVehicleConnection - In the implementation block
@property (assign,nonatomic) BOOL monitorVehicleExit;                                                            //@synthesize monitorVehicleExit=_monitorVehicleExit - In the implementation block
@property (assign,nonatomic) BOOL monitorLocation;                                                               //@synthesize monitorLocation=_monitorLocation - In the implementation block
@property (nonatomic,retain) RTVehicleEvent * lastVehicleParkedEvent;                                            //@synthesize lastVehicleParkedEvent=_lastVehicleParkedEvent - In the implementation block
@property (nonatomic,retain) RTVehicleEvent * pendingVehicleParkedEvent;                                         //@synthesize pendingVehicleParkedEvent=_pendingVehicleParkedEvent - In the implementation block
@property (nonatomic,retain) RTVehicleEvent * vehicleEventPendingPersist;                                        //@synthesize vehicleEventPendingPersist=_vehicleEventPendingPersist - In the implementation block
@property (assign,nonatomic) BOOL vehicleEventPendingDeletion;                                                   //@synthesize vehicleEventPendingDeletion=_vehicleEventPendingDeletion - In the implementation block
@property (assign,nonatomic) BOOL locationsOfInterestAvailable;                                                  //@synthesize locationsOfInterestAvailable=_locationsOfInterestAvailable - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationsCache;                                                    //@synthesize locationsCache=_locationsCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationsCacheLeeched;                                             //@synthesize locationsCacheLeeched=_locationsCacheLeeched - In the implementation block
@property (nonatomic,retain) RTFMCScoreBoard * scoreBoard;                                                       //@synthesize scoreBoard=_scoreBoard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(void)fetchLastVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 ;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)onDeviceLocationPredictorNotification:(id)arg1 ;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)clearAllVehicleEvents;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification;
-(void)onPurgeNotification:(id)arg1 ;
-(void)onLeechedLocation:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 motionActivityManager:(id)arg2 mapsSupportManager:(id)arg3 metricManager:(id)arg4 purgeManager:(id)arg5 managedObjectContext:(id)arg6 vehicleLocationHistoryController:(id)arg7 deviceLocationPredictor:(id)arg8 managedConfiguration:(id)arg9 ;
-(void)_onManagedObjectContextCreated:(id)arg1 ;
-(RTManagedConfiguration *)managedConfiguration;
-(void)setMonitorVehicleLocation:(BOOL)arg1 ;
-(void)_registerScoreBoardSubmission;
-(void)setMonitorVehicleConnection:(BOOL)arg1 ;
-(void)setMonitorVehicleExit:(BOOL)arg1 ;
-(RTPurgeManager *)purgeManager;
-(void)_clearAllVehicleEvents;
-(RTMotionActivityManager *)motionActivityManager;
-(void)onVehicleConnectedNotification:(id)arg1 ;
-(void)onVehicleExitNotification:(id)arg1 ;
-(void)onLocationNotification:(id)arg1 ;
-(void)_onLocation:(id)arg1 ;
-(NSMutableArray *)locationsCacheLeeched;
-(RTVehicleEvent *)pendingVehicleParkedEvent;
-(void)setMonitorLocation:(BOOL)arg1 ;
-(NSMutableArray *)locationsCache;
-(void)setPendingVehicleParkedEvent:(RTVehicleEvent *)arg1 ;
-(void)_processPendingVehicleEventAfterLocationFinalization;
-(void)_updateUsualLocationOfVehicleEvent:(id)arg1 ;
-(void)_finalizeLastVehicleEventIfAppropriate;
-(void)_updateNearbyLocationOfInterestOfVehicleEvent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_finalizeLocationEstimate;
-(RTVehicleEvent *)lastVehicleParkedEvent;
-(BOOL)_sameVehicleWithDeviceId:(id)arg1 otherDeviceId:(id)arg2 ;
-(void)_postVehicleReplacementBulletinNotificationWithVehicleEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)setLastVehicleParkedEvent:(RTVehicleEvent *)arg1 ;
-(void)_submitFMCCarParkedInstanceWithParkedEvents:(id)arg1 ;
-(void)_postBulletinNotificationIfAppropriate;
-(BOOL)_persistLastVehicleEvent;
-(void)_notifyClients;
-(void)requestLocations;
-(void)_onFinalizeLocationEstimateTimerExpiry;
-(void)_submitFMCReturnToCarInstanceWithIdentifier:(id)arg1 horizontalAccuracy:(int)arg2 horizontalDistance:(int)arg3 ;
-(BOOL)_deleteLastVehicleEvent;
-(void)_clearBulletinNotifications;
-(void)_onVehicleParkedWithDeviceId:(id)arg1 ;
-(void)_submitFMCVehicleConnectionEventInstanceWithConnectionStatus:(int)arg1 ;
-(void)_onVehicleStartedWithDeviceId:(id)arg1 ;
-(void)_onVehicleConnectedNotification:(id)arg1 ;
-(void)_onVehicleExit;
-(void)_onVehicleExitNotification:(id)arg1 ;
-(BOOL)monitorVehicleLocation;
-(id)_getLastVehicleEvents;
-(void)_vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_submitFMCAssistanceInstanceWithIdentifier:(id)arg1 uiPlacement:(int)arg2 assistanceType:(int)arg3 assistanceValue:(int)arg4 ;
-(void)_fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(RTMapsSupportManager *)mapsSupportManager;
-(void)setVehicleEventPendingPersist:(RTVehicleEvent *)arg1 ;
-(void)setVehicleEventPendingDeletion:(BOOL)arg1 ;
-(BOOL)_persistVehicleEvent:(id)arg1 ;
-(RTVehicleEvent *)vehicleEventPendingPersist;
-(BOOL)vehicleEventPendingDeletion;
-(void)_restoreLastVehicleEvent;
-(void)setVehicleLocationHistoryController:(RTVehicleLocationHistoryController *)arg1 ;
-(void)_updateAuxiliaryDataIfAppropriate;
-(RTVehicleLocationHistoryController *)vehicleLocationHistoryController;
-(BOOL)locationsOfInterestAvailable;
-(void)setLocationsOfInterestAvailable:(BOOL)arg1 ;
-(void)persistLastVehicleEvent;
-(void)restoreLastVehicleEvent;
-(NSObject*<OS_dispatch_source>)finalizeLocationEstimateTimer;
-(void)setFinalizeLocationEstimateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(void)setMapsSupportManager:(RTMapsSupportManager *)arg1 ;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)setManagedConfiguration:(RTManagedConfiguration *)arg1 ;
-(BOOL)monitorVehicleConnection;
-(BOOL)monitorVehicleExit;
-(BOOL)monitorLocation;
-(void)setLocationsCache:(NSMutableArray *)arg1 ;
-(void)setLocationsCacheLeeched:(NSMutableArray *)arg1 ;
-(RTFMCScoreBoard *)scoreBoard;
-(void)setScoreBoard:(RTFMCScoreBoard *)arg1 ;
-(void)_submitFMCDailyAssessmentWithSubmissionHandler:(/*^block*/id)arg1 ;
-(void)_submitFMCVehicleConnectionEventInstanceWithConnectionStatus:(int)arg1 value:(double)arg2 ;
-(void)_submitFMCDailyAssessment;
-(void)_submitFMCViewedInstanceWithIdentifier:(id)arg1 uiPlacement:(int)arg2 ;
@end
