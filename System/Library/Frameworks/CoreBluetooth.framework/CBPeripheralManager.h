/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBManager.h>

@protocol CBPeripheralManagerDelegate;
@class NSMapTable, NSMutableArray, NSMutableDictionary, NSLock, NSNumber;

@interface CBPeripheralManager : CBManager {

	struct {
		unsigned willRestoreState : 1;
		unsigned didAddService : 1;
		unsigned didReceiveReadRequest : 1;
		unsigned didReceiveWriteRequests : 1;
		unsigned centralDidSubscribeToCharacteristic : 1;
		unsigned centralDidUnsubscribeFromCharacteristic : 1;
		unsigned didStartAdvertising : 1;
		unsigned isReadyToUpdate : 1;
		unsigned centralDidConnect : 1;
		unsigned centralDidUpdateConnectionParameters : 1;
	}  _delegateFlags;
	BOOL _isAdvertising;
	BOOL _readyForUpdates;
	BOOL _waitingForReady;
	id<CBPeripheralManagerDelegate> _delegate;
	NSMapTable* _centrals;
	NSMutableArray* _services;
	NSMutableDictionary* _characteristicIDs;
	NSLock* _updateLock;
	NSNumber* _multipleAdvertisingSupported;

}

@property (assign,nonatomic) BOOL isAdvertising;                                                                     //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (nonatomic,retain,readonly) NSMapTable * centrals;                                                         //@synthesize centrals=_centrals - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * services;                                                     //@synthesize services=_services - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * characteristicIDs;                                       //@synthesize characteristicIDs=_characteristicIDs - In the implementation block
@property (nonatomic,retain,readonly) NSLock * updateLock;                                                           //@synthesize updateLock=_updateLock - In the implementation block
@property (nonatomic,readonly) BOOL readyForUpdates;                                                                 //@synthesize readyForUpdates=_readyForUpdates - In the implementation block
@property (nonatomic,readonly) BOOL waitingForReady;                                                                 //@synthesize waitingForReady=_waitingForReady - In the implementation block
@property (nonatomic,retain) NSNumber * multipleAdvertisingSupported;                                                //@synthesize multipleAdvertisingSupported=_multipleAdvertisingSupported - In the implementation block
@property (getter=supportsMultipleAdvertising,nonatomic,readonly) BOOL isSupportingMultipleAdvertising; 
@property (assign,nonatomic,__weak) id<CBPeripheralManagerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
+(long long)authorizationStatus;
-(id)init;
-(void)setDelegate:(id<CBPeripheralManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<CBPeripheralManagerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
-(id)centralWithInfo:(id)arg1 ;
-(void)forEachCentral:(/*^block*/id)arg1 ;
-(void)respondToTransaction:(id)arg1 value:(id)arg2 attributeID:(id)arg3 result:(long long)arg4 ;
-(NSNumber *)multipleAdvertisingSupported;
-(void)setMultipleAdvertisingSupported:(NSNumber *)arg1 ;
-(void)respondToRequest:(id)arg1 withResult:(long long)arg2 ;
-(void)handleServiceAdded:(id)arg1 ;
-(void)handleGetAttributeValue:(id)arg1 ;
-(void)handleSetAttributeValues:(id)arg1 ;
-(void)handleNotificationAdded:(id)arg1 ;
-(void)handleNotificationRemoved:(id)arg1 ;
-(void)handleAdvertisingStarted:(id)arg1 ;
-(void)handleAdvertisingStopped:(id)arg1 ;
-(void)handleReadyForUpdates:(id)arg1 ;
-(void)handleSolicitedServicesFound:(id)arg1 ;
-(void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2 ;
-(void)startAdvertising:(id)arg1 ;
-(void)removeAllServices;
-(BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3 ;
-(BOOL)supportsMultipleAdvertising;
-(NSMapTable *)centrals;
-(NSMutableDictionary *)characteristicIDs;
-(BOOL)readyForUpdates;
-(BOOL)waitingForReady;
-(void)stopAdvertising;
-(BOOL)isAdvertising;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(NSMutableArray *)services;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeService:(id)arg1 ;
-(NSLock *)updateLock;
-(void)addService:(id)arg1 ;
@end
