/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, GEOFormattedString;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying> {

	NSMutableArray* _advisorys;
	NSString* _detailTimeFormatted;
	GEOFormattedString* _duration;
	GEOFormattedString* _durationList;
	GEOFormattedString* _fareErrorMessage;
	GEOFormattedString* _overviewSubtitle;
	GEOFormattedString* _planningDescription;
	GEOFormattedString* _serviceGap;
	GEOFormattedString* _travelDescription;

}

@property (nonatomic,readonly) BOOL hasDetailTimeFormatted; 
@property (nonatomic,retain) NSString * detailTimeFormatted;                        //@synthesize detailTimeFormatted=_detailTimeFormatted - In the implementation block
@property (nonatomic,readonly) BOOL hasPlanningDescription; 
@property (nonatomic,retain) GEOFormattedString * planningDescription;              //@synthesize planningDescription=_planningDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasDurationList; 
@property (nonatomic,retain) GEOFormattedString * durationList;                     //@synthesize durationList=_durationList - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceGap; 
@property (nonatomic,retain) GEOFormattedString * serviceGap;                       //@synthesize serviceGap=_serviceGap - In the implementation block
@property (nonatomic,readonly) BOOL hasOverviewSubtitle; 
@property (nonatomic,retain) GEOFormattedString * overviewSubtitle;                 //@synthesize overviewSubtitle=_overviewSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasFareErrorMessage; 
@property (nonatomic,retain) GEOFormattedString * fareErrorMessage;                 //@synthesize fareErrorMessage=_fareErrorMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTravelDescription; 
@property (nonatomic,retain) GEOFormattedString * travelDescription;                //@synthesize travelDescription=_travelDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * advisorys;                            //@synthesize advisorys=_advisorys - In the implementation block
+(Class)advisoryType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOFormattedString *)duration;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(unsigned long long)advisorysCount;
-(NSMutableArray *)advisorys;
-(void)clearAdvisorys;
-(void)addAdvisory:(id)arg1 ;
-(id)advisoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDetailTimeFormatted;
-(BOOL)hasPlanningDescription;
-(BOOL)hasDurationList;
-(BOOL)hasServiceGap;
-(BOOL)hasOverviewSubtitle;
-(BOOL)hasFareErrorMessage;
-(BOOL)hasTravelDescription;
-(NSString *)detailTimeFormatted;
-(void)setDetailTimeFormatted:(NSString *)arg1 ;
-(GEOFormattedString *)planningDescription;
-(void)setPlanningDescription:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)durationList;
-(void)setDurationList:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)serviceGap;
-(void)setServiceGap:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)overviewSubtitle;
-(void)setOverviewSubtitle:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)fareErrorMessage;
-(void)setFareErrorMessage:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)travelDescription;
-(void)setTravelDescription:(GEOFormattedString *)arg1 ;
-(void)setAdvisorys:(NSMutableArray *)arg1 ;
@end
