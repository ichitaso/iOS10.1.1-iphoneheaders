/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class APSConnection, NSData, NSObject;

@interface AADeviceInfo : NSObject {

	APSConnection* _apsConnection;
	BOOL _tokenDone;
	NSData* _token;
	NSObject*<OS_dispatch_semaphore> _tokenSema;

}
+(id)infoDictionary;
+(id)osVersion;
+(id)apnsToken;
+(id)clientInfoHeader;
+(id)udid;
+(id)userAgentHeader;
+(id)serialNumber;
+(id)appleIDClientIdentifier;
+(id)productVersion;
-(id)buildVersion;
-(id)osVersion;
-(id)deviceColor;
-(id)apnsToken;
-(id)deviceInfoDictionary;
-(id)osName;
-(id)wifiMacAddress;
-(id)deviceEnclosureColor;
-(id)deviceCoverGlassColor;
-(id)deviceHousingColor;
-(id)deviceBackingColor;
-(BOOL)hasCellularCapability;
-(id)mobileEquipmentIdentifier;
-(id)internationalMobileEquipmentIdentity;
-(id)storageCapacity;
-(id)clientInfoHeader;
-(id)udid;
-(id)userAgentHeader;
-(id)serialNumber;
-(id)appleIDClientIdentifier;
-(id)modelNumber;
-(id)productType;
-(id)deviceName;
-(id)productVersion;
-(id)deviceClass;
-(id)regionCode;
@end

