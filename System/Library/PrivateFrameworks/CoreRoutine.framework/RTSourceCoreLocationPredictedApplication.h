/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTSource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSString, NSNumber, CLLocation, NSDate;

@interface RTSourceCoreLocationPredictedApplication : RTSource <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSData* _icon;
	NSString* _developer;
	NSNumber* _adamId;
	long long _installationState;
	CLLocation* _location;
	double _distance;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * icon;                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * developer;                     //@synthesize developer=_developer - In the implementation block
@property (nonatomic,retain) NSNumber * adamId;                        //@synthesize adamId=_adamId - In the implementation block
@property (assign,nonatomic) long long installationState;              //@synthesize installationState=_installationState - In the implementation block
@property (nonatomic,retain) CLLocation * location;                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double distance;                          //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowedKeys;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setIcon:(NSData *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSData *)icon;
-(BOOL)validAtLocation:(id)arg1 ;
-(BOOL)validOnDate:(id)arg1 ;
-(void)setInstallationState:(long long)arg1 ;
-(void)setAdamId:(NSNumber *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithIdentifier:(id)arg1 developer:(id)arg2 adamId:(id)arg3 icon:(id)arg4 installationState:(long long)arg5 location:(id)arg6 distance:(double)arg7 startDate:(id)arg8 endDate:(id)arg9 ;
-(long long)installationState;
-(NSString *)developer;
-(NSNumber *)adamId;
-(void)setDeveloper:(NSString *)arg1 ;
@end
