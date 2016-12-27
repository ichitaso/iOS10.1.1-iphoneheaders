/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _powerOn;
	BOOL _isDiscoverable;
	BOOL _isConnectable;
	BOOL _isScanning;
	NSString* _address;
	long long _pairedDeviceCount;
	long long _cloudPairedDeviceCount;
	long long _connectedDeviceCount;

}

@property (assign,nonatomic) BOOL powerOn;                                  //@synthesize powerOn=_powerOn - In the implementation block
@property (nonatomic,copy) NSString * address;                              //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) long long pairedDeviceCount;                   //@synthesize pairedDeviceCount=_pairedDeviceCount - In the implementation block
@property (assign,nonatomic) long long cloudPairedDeviceCount;              //@synthesize cloudPairedDeviceCount=_cloudPairedDeviceCount - In the implementation block
@property (assign,nonatomic) long long connectedDeviceCount;                //@synthesize connectedDeviceCount=_connectedDeviceCount - In the implementation block
@property (assign,nonatomic) BOOL isDiscoverable;                           //@synthesize isDiscoverable=_isDiscoverable - In the implementation block
@property (assign,nonatomic) BOOL isConnectable;                            //@synthesize isConnectable=_isConnectable - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                               //@synthesize isScanning=_isScanning - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setPairedDeviceCount:(long long)arg1 ;
-(long long)pairedDeviceCount;
-(NSString *)address;
-(BOOL)isScanning;
-(BOOL)isDiscoverable;
-(BOOL)isConnectable;
-(BOOL)powerOn;
-(void)setPowerOn:(BOOL)arg1 ;
-(long long)cloudPairedDeviceCount;
-(long long)connectedDeviceCount;
-(BOOL)isEqualToBluetoothStatus:(id)arg1 ;
-(void)setCloudPairedDeviceCount:(long long)arg1 ;
-(void)setConnectedDeviceCount:(long long)arg1 ;
-(void)setIsDiscoverable:(BOOL)arg1 ;
-(void)setIsConnectable:(BOOL)arg1 ;
@end
