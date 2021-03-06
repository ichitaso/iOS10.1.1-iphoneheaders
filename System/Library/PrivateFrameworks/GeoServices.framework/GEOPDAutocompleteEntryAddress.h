/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _opaqueGeoId;
	GEOLatLng* _center;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasOpaqueGeoId; 
@property (assign,nonatomic) unsigned long long opaqueGeoId;                 //@synthesize opaqueGeoId=_opaqueGeoId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCenter;
-(PBUnknownFields *)unknownFields;
-(void)setOpaqueGeoId:(unsigned long long)arg1 ;
-(void)setHasOpaqueGeoId:(BOOL)arg1 ;
-(BOOL)hasOpaqueGeoId;
-(unsigned long long)opaqueGeoId;
@end

