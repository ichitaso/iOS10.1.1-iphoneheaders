/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBString, _INPBContact;

@interface _INPBSendPaymentIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBCurrencyAmount* _currencyAmount;
	_INPBIntentMetadata* _intentMetadata;
	_INPBString* _note;
	_INPBContact* _payee;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPayee; 
@property (nonatomic,retain) _INPBContact * payee;                              //@synthesize payee=_payee - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyAmount; 
@property (nonatomic,retain) _INPBCurrencyAmount * currencyAmount;              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,readonly) BOOL hasNote; 
@property (nonatomic,retain) _INPBString * note;                                //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setNote:(_INPBString *)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBContact *)payee;
-(_INPBCurrencyAmount *)currencyAmount;
-(void)setPayee:(_INPBContact *)arg1 ;
-(void)setCurrencyAmount:(_INPBCurrencyAmount *)arg1 ;
-(BOOL)hasPayee;
-(BOOL)hasCurrencyAmount;
-(BOOL)hasNote;
-(_INPBString *)note;
@end

