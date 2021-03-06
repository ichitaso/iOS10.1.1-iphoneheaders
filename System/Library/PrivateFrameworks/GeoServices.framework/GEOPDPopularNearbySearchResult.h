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

@class PBUnknownFields, GEOMapRegion, NSString;

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	NSString* _sectionHeader;
	BOOL _isChainResultSet;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;                //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader;                       //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet;                          //@synthesize isChainResultSet=_isChainResultSet - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sectionHeader;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDisplayMapRegion;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(GEOMapRegion *)displayMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)isChainResultSet;
-(BOOL)hasSectionHeader;
@end

