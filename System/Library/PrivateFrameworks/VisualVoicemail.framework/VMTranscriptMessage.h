/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisualVoicemail/VisualVoicemail-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VMTranscriptMessage : PBCodable <NSCopying> {

	unsigned _protocolVersion;
	NSData* _transcriptionData;
	SCD_Struct_VM1 _has;

}

@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                 //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTranscriptionData; 
@property (nonatomic,retain) NSData * transcriptionData;               //@synthesize transcriptionData=_transcriptionData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(unsigned)protocolVersion;
-(void)setTranscriptionData:(NSData *)arg1 ;
-(BOOL)hasTranscriptionData;
-(NSData *)transcriptionData;
@end

