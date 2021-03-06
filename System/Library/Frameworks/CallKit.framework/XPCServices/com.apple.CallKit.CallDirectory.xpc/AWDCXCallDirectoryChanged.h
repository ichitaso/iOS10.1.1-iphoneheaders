/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.CallKit.CallDirectory/com.apple.CallKit.CallDirectory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCXCallDirectoryChanged : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _providerBundleId;
	unsigned _totalBlockedHandles;
	unsigned _totalIdentifiedHandles;
	BOOL _isEnabled;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBlockedHandles; 
@property (assign,nonatomic) unsigned totalBlockedHandles;                 //@synthesize totalBlockedHandles=_totalBlockedHandles - In the implementation block
@property (assign,nonatomic) BOOL hasTotalIdentifiedHandles; 
@property (assign,nonatomic) unsigned totalIdentifiedHandles;              //@synthesize totalIdentifiedHandles=_totalIdentifiedHandles - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnabled; 
@property (assign,nonatomic) BOOL isEnabled;                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasProviderBundleId; 
@property (nonatomic,retain) NSString * providerBundleId;                  //@synthesize providerBundleId=_providerBundleId - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setProviderBundleId:(NSString *)arg1 ;
-(void)setTotalBlockedHandles:(unsigned)arg1 ;
-(void)setHasTotalBlockedHandles:(BOOL)arg1 ;
-(BOOL)hasTotalBlockedHandles;
-(void)setTotalIdentifiedHandles:(unsigned)arg1 ;
-(void)setHasTotalIdentifiedHandles:(BOOL)arg1 ;
-(BOOL)hasTotalIdentifiedHandles;
-(void)setHasIsEnabled:(BOOL)arg1 ;
-(BOOL)hasIsEnabled;
-(BOOL)hasProviderBundleId;
-(unsigned)totalBlockedHandles;
-(unsigned)totalIdentifiedHandles;
-(NSString *)providerBundleId;
@end

