/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSString, NSDictionary;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse {

	NSData* _data;
	NSData* _signature;
	NSString* _version;
	NSDictionary* _configuration;

}

@property (nonatomic,copy,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSData * signature;                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)configuration;
-(NSString *)version;
-(NSData *)signature;
@end

