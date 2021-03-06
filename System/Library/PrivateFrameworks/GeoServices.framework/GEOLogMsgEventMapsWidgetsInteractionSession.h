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

@class GEOMapsDestinationsWidget, GEOMapsNearbyWidget, GEOMapsTransitWidget;

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying> {

	int _duration;
	int _endState;
	int _localDayOfWeek;
	int _localHour;
	GEOMapsDestinationsWidget* _mapsDestinationsWidget;
	GEOMapsNearbyWidget* _mapsNearbyWidget;
	GEOMapsTransitWidget* _mapsTransitWidget;
	int _mapsWidgetType;
	BOOL _lockedMode;
	SCD_Struct_LO18 _has;

}

@property (assign,nonatomic) BOOL hasMapsWidgetType; 
@property (assign,nonatomic) int mapsWidgetType;                                              //@synthesize mapsWidgetType=_mapsWidgetType - In the implementation block
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState;                                                    //@synthesize endState=_endState - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsDestinationsWidget; 
@property (nonatomic,retain) GEOMapsDestinationsWidget * mapsDestinationsWidget;              //@synthesize mapsDestinationsWidget=_mapsDestinationsWidget - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsTransitWidget; 
@property (nonatomic,retain) GEOMapsTransitWidget * mapsTransitWidget;                        //@synthesize mapsTransitWidget=_mapsTransitWidget - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsNearbyWidget; 
@property (nonatomic,retain) GEOMapsNearbyWidget * mapsNearbyWidget;                          //@synthesize mapsNearbyWidget=_mapsNearbyWidget - In the implementation block
@property (assign,nonatomic) BOOL hasLockedMode; 
@property (assign,nonatomic) BOOL lockedMode;                                                 //@synthesize lockedMode=_lockedMode - In the implementation block
@property (assign,nonatomic) BOOL hasLocalHour; 
@property (assign,nonatomic) int localHour;                                                   //@synthesize localHour=_localHour - In the implementation block
@property (assign,nonatomic) BOOL hasLocalDayOfWeek; 
@property (assign,nonatomic) int localDayOfWeek;                                              //@synthesize localDayOfWeek=_localDayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration;                                                    //@synthesize duration=_duration - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)endState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setEndState:(int)arg1 ;
-(void)setHasEndState:(BOOL)arg1 ;
-(BOOL)hasEndState;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(int)mapsWidgetType;
-(void)setMapsWidgetType:(int)arg1 ;
-(void)setHasMapsWidgetType:(BOOL)arg1 ;
-(BOOL)hasMapsWidgetType;
-(id)mapsWidgetTypeAsString:(int)arg1 ;
-(int)StringAsMapsWidgetType:(id)arg1 ;
-(BOOL)hasMapsDestinationsWidget;
-(BOOL)hasMapsTransitWidget;
-(BOOL)hasMapsNearbyWidget;
-(void)setLockedMode:(BOOL)arg1 ;
-(void)setHasLockedMode:(BOOL)arg1 ;
-(BOOL)hasLockedMode;
-(void)setLocalHour:(int)arg1 ;
-(void)setHasLocalHour:(BOOL)arg1 ;
-(BOOL)hasLocalHour;
-(void)setLocalDayOfWeek:(int)arg1 ;
-(void)setHasLocalDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasLocalDayOfWeek;
-(GEOMapsDestinationsWidget *)mapsDestinationsWidget;
-(void)setMapsDestinationsWidget:(GEOMapsDestinationsWidget *)arg1 ;
-(GEOMapsTransitWidget *)mapsTransitWidget;
-(void)setMapsTransitWidget:(GEOMapsTransitWidget *)arg1 ;
-(GEOMapsNearbyWidget *)mapsNearbyWidget;
-(void)setMapsNearbyWidget:(GEOMapsNearbyWidget *)arg1 ;
-(BOOL)lockedMode;
-(int)localHour;
-(int)localDayOfWeek;
@end

