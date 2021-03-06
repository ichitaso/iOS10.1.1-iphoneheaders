/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class NSSet, BluetoothManager;

@interface RTBluetoothManager : RTNotifier {

	BOOL _observingConnections;
	NSSet* _connectedDevices;
	long long _carKitConnectionState;

}

@property (nonatomic,readonly) BluetoothManager * bluetoothManager; 
@property (nonatomic,retain) NSSet * connectedDevices;                           //@synthesize connectedDevices=_connectedDevices - In the implementation block
@property (assign,nonatomic) BOOL observingConnections;                          //@synthesize observingConnections=_observingConnections - In the implementation block
@property (assign,nonatomic) long long carKitConnectionState;                    //@synthesize carKitConnectionState=_carKitConnectionState - In the implementation block
+(id)sharedInstance;
+(id)carKitConnectionStateToString:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(long long)carKitConnectionState;
-(BluetoothManager *)bluetoothManager;
-(NSSet *)connectedDevices;
-(void)setConnectedDevices:(NSSet *)arg1 ;
-(long long)getCarKitConnectionStateFromConnectedDevices:(id)arg1 ;
-(void)setCarKitConnectionState:(long long)arg1 ;
-(void)updateConnections;
-(void)setObservingConnections:(BOOL)arg1 ;
-(void)shouldObserveConnections;
-(void)_fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(BOOL)observingConnections;
-(BOOL)interestedInDeviceType:(id)arg1 ;
@end

