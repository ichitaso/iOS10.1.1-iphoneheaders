/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {

	NSString* _deviceCarrierName;
	NSString* _deviceCountryCode;
	int _deviceNetworkConnectivity;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasDeviceNetworkConnectivity; 
@property (assign,nonatomic) int deviceNetworkConnectivity;                  //@synthesize deviceNetworkConnectivity=_deviceNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                   //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCarrierName; 
@property (nonatomic,retain) NSString * deviceCarrierName;                   //@synthesize deviceCarrierName=_deviceCarrierName - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(int)deviceNetworkConnectivity;
-(void)setDeviceNetworkConnectivity:(int)arg1 ;
-(void)setHasDeviceNetworkConnectivity:(BOOL)arg1 ;
-(BOOL)hasDeviceNetworkConnectivity;
-(id)deviceNetworkConnectivityAsString:(int)arg1 ;
-(int)StringAsDeviceNetworkConnectivity:(id)arg1 ;
-(BOOL)hasDeviceCarrierName;
-(NSString *)deviceCarrierName;
-(void)setDeviceCarrierName:(NSString *)arg1 ;
@end

