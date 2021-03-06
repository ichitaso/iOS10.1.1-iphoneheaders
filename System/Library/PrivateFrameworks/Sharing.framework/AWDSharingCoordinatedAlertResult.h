/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSharingCoordinatedAlertResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _activityLevel;
	unsigned _eventType;
	int _otherDevices;
	BOOL _bestIsMe;
	BOOL _skipScanPhoneCall;
	BOOL _skipScanVeryActive;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasActivityLevel; 
@property (assign,nonatomic) unsigned activityLevel;                    //@synthesize activityLevel=_activityLevel - In the implementation block
@property (assign,nonatomic) BOOL hasOtherDevices; 
@property (assign,nonatomic) int otherDevices;                          //@synthesize otherDevices=_otherDevices - In the implementation block
@property (assign,nonatomic) BOOL hasBestIsMe; 
@property (assign,nonatomic) BOOL bestIsMe;                             //@synthesize bestIsMe=_bestIsMe - In the implementation block
@property (assign,nonatomic) BOOL hasSkipScanPhoneCall; 
@property (assign,nonatomic) BOOL skipScanPhoneCall;                    //@synthesize skipScanPhoneCall=_skipScanPhoneCall - In the implementation block
@property (assign,nonatomic) BOOL hasSkipScanVeryActive; 
@property (assign,nonatomic) BOOL skipScanVeryActive;                   //@synthesize skipScanVeryActive=_skipScanVeryActive - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)eventType;
-(int)otherDevices;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setActivityLevel:(unsigned)arg1 ;
-(void)setHasActivityLevel:(BOOL)arg1 ;
-(BOOL)hasActivityLevel;
-(void)setOtherDevices:(int)arg1 ;
-(void)setHasOtherDevices:(BOOL)arg1 ;
-(BOOL)hasOtherDevices;
-(void)setBestIsMe:(BOOL)arg1 ;
-(void)setHasBestIsMe:(BOOL)arg1 ;
-(BOOL)hasBestIsMe;
-(void)setSkipScanPhoneCall:(BOOL)arg1 ;
-(void)setHasSkipScanPhoneCall:(BOOL)arg1 ;
-(BOOL)hasSkipScanPhoneCall;
-(void)setSkipScanVeryActive:(BOOL)arg1 ;
-(void)setHasSkipScanVeryActive:(BOOL)arg1 ;
-(BOOL)hasSkipScanVeryActive;
-(unsigned)activityLevel;
-(BOOL)bestIsMe;
-(BOOL)skipScanPhoneCall;
-(BOOL)skipScanVeryActive;
@end

