/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CPLFaceInstance : PBCodable <NSCopying> {

	double _centerX;
	double _centerY;
	double _size;
	unsigned _faceState;
	NSString* _personIdentifier;
	NSMutableArray* _rejectedPersonIdentifiers;
	SCD_Struct_CP6 _has;

}

@property (getter=isNoneState,nonatomic,readonly) BOOL noneState; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isManual,nonatomic) BOOL manual; 
@property (assign,getter=isRepresentativeFace,nonatomic) BOOL representativeFace; 
@property (assign,getter=isNameSourceAuto,nonatomic) BOOL nameSourceAuto; 
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed; 
@property (nonatomic,readonly) BOOL hasPersonIdentifier; 
@property (nonatomic,retain) NSString * personIdentifier;                                      //@synthesize personIdentifier=_personIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCenterX; 
@property (assign,nonatomic) double centerX;                                                   //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) BOOL hasCenterY; 
@property (assign,nonatomic) double centerY;                                                   //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) double size;                                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasFaceState; 
@property (assign,nonatomic) unsigned faceState;                                               //@synthesize faceState=_faceState - In the implementation block
@property (nonatomic,retain) NSMutableArray * rejectedPersonIdentifiers;                       //@synthesize rejectedPersonIdentifiers=_rejectedPersonIdentifiers - In the implementation block
+(Class)rejectedPersonIdentifiersType;
-(double)size;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isManual;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setFaceState:(unsigned)arg1 ;
-(unsigned)faceState;
-(void)_setFaceStateBit:(unsigned)arg1 fromBoolValue:(BOOL)arg2 ;
-(BOOL)_isFaceStateBitSet:(unsigned)arg1 ;
-(BOOL)isNoneState;
-(void)addRejectedPersonIdentifiers:(id)arg1 ;
-(void)clearRejectedPersonIdentifiers;
-(id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPersonIdentifier;
-(void)setHasCenterX:(BOOL)arg1 ;
-(BOOL)hasCenterX;
-(void)setHasCenterY:(BOOL)arg1 ;
-(BOOL)hasCenterY;
-(void)setHasFaceState:(BOOL)arg1 ;
-(BOOL)hasFaceState;
-(double)centerX;
-(double)centerY;
-(BOOL)isConfirmed;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(NSString *)personIdentifier;
-(BOOL)isNameSourceAuto;
-(void)setNameSourceAuto:(BOOL)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setManual:(BOOL)arg1 ;
-(void)setRepresentativeFace:(BOOL)arg1 ;
-(void)setRejectedPersonIdentifiers:(NSMutableArray *)arg1 ;
-(void)setConfirmed:(BOOL)arg1 ;
-(NSMutableArray *)rejectedPersonIdentifiers;
-(BOOL)isRepresentativeFace;
-(unsigned long long)rejectedPersonIdentifiersCount;
-(void)clearState;
@end

