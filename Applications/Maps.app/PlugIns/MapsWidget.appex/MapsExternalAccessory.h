/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, EAAccessory;

@interface MapsExternalAccessory : NSObject {

	BOOL _destinationHandoffEnabled;
	BOOL _hasEngineType;
	BOOL _needsFuel;
	int _engineType;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _displayName;
	NSString* _mapsDisplayName;
	EAAccessory* _accessory;

}

@property (retain) EAAccessory * accessory;                                 //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) BOOL destinationHandoffEnabled;              //@synthesize destinationHandoffEnabled=_destinationHandoffEnabled - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                     //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSString * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasEngineType;                          //@synthesize hasEngineType=_hasEngineType - In the implementation block
@property (nonatomic,readonly) int engineType;                              //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * mapsDisplayName;                  //@synthesize mapsDisplayName=_mapsDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL needsFuel;                              //@synthesize needsFuel=_needsFuel - In the implementation block
+(id)sharedInstance;
-(void)sendDestinationInformation:(id)arg1 ;
-(void)_initializeVehicle:(id)arg1 withAccessory:(id)arg2 ;
-(void)_updateVehicle:(id)arg1 ;
-(void)_disconnectFromVehicle;
-(void)_accessoryDidUpdateVehicle:(id)arg1 ;
-(void)_accessoryUpdated;
-(BOOL)destinationHandoffEnabled;
-(BOOL)hasEngineType;
-(NSString *)mapsDisplayName;
-(BOOL)needsFuel;
-(id)init;
-(void)dealloc;
-(NSString *)model;
-(NSString *)displayName;
-(NSString *)manufacturer;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(int)engineType;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)_accessoryDidConnect:(id)arg1 ;
-(EAAccessory *)accessory;
-(void)setAccessory:(EAAccessory *)arg1 ;
@end
