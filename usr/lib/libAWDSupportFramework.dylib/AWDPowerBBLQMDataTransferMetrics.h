/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerBBLQMDataTransferMetrics : PBCodable <NSCopying> {

	SCD_Struct_AW27* _lQMTransitionCntBuckets;
	unsigned long long _timestamp;
	NSMutableArray* _lQMBytes;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * lQMBytes;                                      //@synthesize lQMBytes=_lQMBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long lQMTransitionCntBucketsCount; 
@property (nonatomic,readonly) unsigned* lQMTransitionCntBuckets; 
+(Class)lQMBytesType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setLQMBytes:(NSMutableArray *)arg1 ;
-(void)addLQMBytes:(id)arg1 ;
-(unsigned long long)lQMBytesCount;
-(void)clearLQMBytes;
-(id)lQMBytesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lQMTransitionCntBucketsCount;
-(void)clearLQMTransitionCntBuckets;
-(unsigned)lQMTransitionCntBucketsAtIndex:(unsigned long long)arg1 ;
-(void)addLQMTransitionCntBuckets:(unsigned)arg1 ;
-(unsigned*)lQMTransitionCntBuckets;
-(void)setLQMTransitionCntBuckets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)lQMBytes;
@end

