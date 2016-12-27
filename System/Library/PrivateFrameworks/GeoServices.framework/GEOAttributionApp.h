/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOAttributionApp : PBCodable <NSCopying> {

	NSString* _appBundleIdentifier;
	NSMutableArray* _handledSchemes;
	int _restaurantReservationExtensionSupport;
	BOOL _supportsRestaurantQueueing;
	BOOL _supportsRestaurantReservations;
	SCD_Struct_GE20 _has;

}

@property (nonatomic,retain) NSString * appBundleIdentifier;                             //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * handledSchemes;                            //@synthesize handledSchemes=_handledSchemes - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsRestaurantReservations; 
@property (assign,nonatomic) BOOL supportsRestaurantReservations;                        //@synthesize supportsRestaurantReservations=_supportsRestaurantReservations - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsRestaurantQueueing; 
@property (assign,nonatomic) BOOL supportsRestaurantQueueing;                            //@synthesize supportsRestaurantQueueing=_supportsRestaurantQueueing - In the implementation block
@property (assign,nonatomic) BOOL hasRestaurantReservationExtensionSupport; 
@property (assign,nonatomic) int restaurantReservationExtensionSupport;                  //@synthesize restaurantReservationExtensionSupport=_restaurantReservationExtensionSupport - In the implementation block
+(Class)handledSchemesType;
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
-(void)clearHandledSchemes;
-(void)addHandledSchemes:(id)arg1 ;
-(unsigned long long)handledSchemesCount;
-(id)handledSchemesAtIndex:(unsigned long long)arg1 ;
-(void)setSupportsRestaurantReservations:(BOOL)arg1 ;
-(void)setHasSupportsRestaurantReservations:(BOOL)arg1 ;
-(BOOL)hasSupportsRestaurantReservations;
-(void)setSupportsRestaurantQueueing:(BOOL)arg1 ;
-(void)setHasSupportsRestaurantQueueing:(BOOL)arg1 ;
-(BOOL)hasSupportsRestaurantQueueing;
-(int)restaurantReservationExtensionSupport;
-(void)setRestaurantReservationExtensionSupport:(int)arg1 ;
-(void)setHasRestaurantReservationExtensionSupport:(BOOL)arg1 ;
-(BOOL)hasRestaurantReservationExtensionSupport;
-(id)restaurantReservationExtensionSupportAsString:(int)arg1 ;
-(int)StringAsRestaurantReservationExtensionSupport:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)handledSchemes;
-(void)setHandledSchemes:(NSMutableArray *)arg1 ;
-(BOOL)supportsRestaurantReservations;
-(BOOL)supportsRestaurantQueueing;
@end
