/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RTPurgeManager, RTBluetoothManager, RTBatteryManager, RTNavigationManager, RTReachabilityManager, RTWalletManager, RTLocationManager, RTMetricManager, RTDeviceLocationPredictor, RTPersistenceManager, NSObject;

@interface RTHintManager : NSObject {

	RTPurgeManager* _purgeManager;
	RTBluetoothManager* _bluetoothManager;
	RTBatteryManager* _batteryManager;
	RTNavigationManager* _navigationManager;
	RTReachabilityManager* _reachabilityManager;
	RTWalletManager* _walletManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTPersistenceManager* _persistenceManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTPurgeManager * purgeManager;                                    //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) RTBluetoothManager * bluetoothManager;                            //@synthesize bluetoothManager=_bluetoothManager - In the implementation block
@property (nonatomic,retain) RTBatteryManager * batteryManager;                                //@synthesize batteryManager=_batteryManager - In the implementation block
@property (nonatomic,retain) RTNavigationManager * navigationManager;                          //@synthesize navigationManager=_navigationManager - In the implementation block
@property (nonatomic,retain) RTReachabilityManager * reachabilityManager;                      //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) RTWalletManager * walletManager;                                  //@synthesize walletManager=_walletManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                  //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;              //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                        //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
+(id)locationHintFilterPredicate;
-(void)_unregisterForNotifications;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)_registerForNotifications;
-(void)shutdown;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)onPurgeNotification:(id)arg1 ;
-(void)onReachabilityChange:(id)arg1 ;
-(void)fetchIsHintNearLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchHintsNearLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(RTPurgeManager *)purgeManager;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)_onReachabilityChange:(id)arg1 ;
-(RTReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(RTReachabilityManager *)arg1 ;
-(RTBluetoothManager *)bluetoothManager;
-(void)clearHintsPredating:(id)arg1 ;
-(RTBatteryManager *)batteryManager;
-(void)setBatteryManager:(RTBatteryManager *)arg1 ;
-(id)initWithPurgeManager:(id)arg1 bluetoothManager:(id)arg2 batteryManager:(id)arg3 navigationManager:(id)arg4 reachabilityManager:(id)arg5 walletManager:(id)arg6 locationManager:(id)arg7 metricManager:(id)arg8 deviceLocationPredictor:(id)arg9 persistenceManager:(id)arg10 ;
-(void)onBluetoothNotification:(id)arg1 ;
-(void)onBatteryNotification:(id)arg1 ;
-(RTNavigationManager *)navigationManager;
-(void)onNavigationNotification:(id)arg1 ;
-(RTWalletManager *)walletManager;
-(void)onWalletNotification:(id)arg1 ;
-(void)_submitHintFromSource:(long long)arg1 location:(id)arg2 ;
-(void)_submitHintFromSource:(long long)arg1 location:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_fetchHintsNearLocation:(id)arg1 managedObjectContext:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)fetchHintsUsingContext:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(void)_fetchIsHintNearLocation:(id)arg1 managedObjectContext:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_clearHintsPredating:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_onPurgeNotification:(id)arg1 ;
-(void)_onBluetoothNotification:(id)arg1 ;
-(void)_submitHintFromSource:(long long)arg1 ;
-(void)_onBatteryNotification:(id)arg1 ;
-(void)_onNavigationNotification:(id)arg1 ;
-(void)_onWalletNotification:(id)arg1 ;
-(void)setBluetoothManager:(RTBluetoothManager *)arg1 ;
-(void)setNavigationManager:(RTNavigationManager *)arg1 ;
-(void)setWalletManager:(RTWalletManager *)arg1 ;
@end

