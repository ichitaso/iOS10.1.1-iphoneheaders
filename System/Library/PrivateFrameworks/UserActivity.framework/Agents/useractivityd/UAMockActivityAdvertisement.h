/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, SFPeerDevice;

@interface UAMockActivityAdvertisement : NSObject <NSSecureCoding> {

	long long _advertisementVersion;
	NSData* _advertisementPayload;
	NSDictionary* _options;
	SFPeerDevice* _device;

}

@property (assign) long long advertisementVersion;              //@synthesize advertisementVersion=_advertisementVersion - In the implementation block
@property (copy) NSData * advertisementPayload;                 //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (copy) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (retain) SFPeerDevice * device;                       //@synthesize device=_device - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAdvertisementVersion:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSData *)advertisementPayload;
-(void)setAdvertisementPayload:(NSData *)arg1 ;
-(long long)advertisementVersion;
-(SFPeerDevice *)device;
-(void)setDevice:(SFPeerDevice *)arg1 ;
@end

