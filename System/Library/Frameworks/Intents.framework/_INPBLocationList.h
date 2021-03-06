/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBCondition, NSMutableArray;

@interface _INPBLocationList : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBCondition* _condition;
	NSMutableArray* _locations;

}

@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) BOOL hasCondition; 
@property (nonatomic,retain) _INPBCondition * condition;                     //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)locationType;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBCondition *)condition;
-(void)setCondition:(_INPBCondition *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)locations;
-(void)clearLocations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCondition;
@end

