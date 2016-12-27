/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRVehicleBluetoothDiscovery;
@class NSMutableDictionary, CRBluetoothPairingPrompt, CRBluetoothSyncContactsPrompt, NSSet;

@interface CRVehicleBluetoothDiscoverer : NSObject {

	BOOL _discovering;
	BOOL _isPairing;
	id<CRVehicleBluetoothDiscovery> _bluetoothDiscoveryDelegate;
	NSMutableDictionary* _deviceForAddress;
	CRBluetoothPairingPrompt* _outstandingPairingPrompt;
	CRBluetoothSyncContactsPrompt* _outstandingContactsPrompt;

}

@property (assign,getter=isDiscovering,nonatomic) BOOL discovering;                                          //@synthesize discovering=_discovering - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceForAddress;                                         //@synthesize deviceForAddress=_deviceForAddress - In the implementation block
@property (nonatomic,retain) CRBluetoothPairingPrompt * outstandingPairingPrompt;                            //@synthesize outstandingPairingPrompt=_outstandingPairingPrompt - In the implementation block
@property (nonatomic,retain) CRBluetoothSyncContactsPrompt * outstandingContactsPrompt;                      //@synthesize outstandingContactsPrompt=_outstandingContactsPrompt - In the implementation block
@property (assign,nonatomic) BOOL isPairing;                                                                 //@synthesize isPairing=_isPairing - In the implementation block
@property (assign,nonatomic,__weak) id<CRVehicleBluetoothDiscovery> bluetoothDiscoveryDelegate;              //@synthesize bluetoothDiscoveryDelegate=_bluetoothDiscoveryDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * discoveredBluetoothDevices; 
-(void)_presentPairingFailedForDevice:(id)arg1 ;
-(void)setOutstandingPairingPrompt:(CRBluetoothPairingPrompt *)arg1 ;
-(NSSet *)discoveredBluetoothDevices;
-(void)handleDiscoveredVehicle:(id)arg1 ;
-(void)setOutstandingContactsPrompt:(CRBluetoothSyncContactsPrompt *)arg1 ;
-(BOOL)_supportsCarPlay:(id)arg1 ;
-(void)handleRemovedVehicle:(id)arg1 ;
-(BOOL)pairBluetoothDevice:(id)arg1 ;
-(CRBluetoothSyncContactsPrompt *)outstandingContactsPrompt;
-(void)_handleUpdatedDevice:(id)arg1 ;
-(void)_saveVehicleForDevice:(id)arg1 ;
-(NSMutableDictionary *)deviceForAddress;
-(CRBluetoothPairingPrompt *)outstandingPairingPrompt;
-(void)setBluetoothDiscoveryDelegate:(id<CRVehicleBluetoothDiscovery>)arg1 ;
-(void)devicePairingFailureHandler:(id)arg1 ;
-(void)handlePowerChangedNotification:(id)arg1 ;
-(id<CRVehicleBluetoothDiscovery>)bluetoothDiscoveryDelegate;
-(void)devicePairingSuccessHandler:(id)arg1 ;
-(void)setIsPairing:(BOOL)arg1 ;
-(void)setDiscovering:(BOOL)arg1 ;
-(void)stopDiscovery;
-(void)_allowBluetoothConnections:(BOOL)arg1 ;
-(void)handleUpdatedVehicle:(id)arg1 ;
-(void)setDeviceForAddress:(NSMutableDictionary *)arg1 ;
-(void)stopDiscoveryForApplicationNotification:(id)arg1 ;
-(void)startDiscoveryForApplicationNotification:(id)arg1 ;
-(void)deviceAuthenticationRequestHandler:(id)arg1 ;
-(id)_vehicleDeviceFromBluetoothDevice:(id)arg1 ;
-(void)_handleRemovedDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isDiscovering;
-(id)_presentingViewController;
-(BOOL)isPairing;
-(void)deviceDiscoveredHandler:(id)arg1 ;
-(void)deviceUpdatedHandler:(id)arg1 ;
-(void)deviceRemovedHandler:(id)arg1 ;
-(void)deviceUnpairedHandler:(id)arg1 ;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)startDiscovery;
@end
