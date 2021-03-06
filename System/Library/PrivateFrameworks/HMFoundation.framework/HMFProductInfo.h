/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMFProductInfo : NSObject <NSSecureCoding> {

	long long _productPlatform;
	long long _productClass;
	SCD_Struct_HM11 _operatingSystemVersion;

}

@property (nonatomic,readonly) long long productPlatform;                           //@synthesize productPlatform=_productPlatform - In the implementation block
@property (nonatomic,readonly) long long productClass;                              //@synthesize productClass=_productClass - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HM11 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)productInfo;
+(SCD_Struct_HM11)decodeOperatingSystemVersionWithCoder:(id)arg1 ;
+(void)encodeOperatingSystemVersion:(SCD_Struct_HM11)arg1 withCoder:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)shortDescription;
-(SCD_Struct_HM11)operatingSystemVersion;
-(long long)productPlatform;
-(long long)productClass;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 operatingSystemVersion:(SCD_Struct_HM11)arg3 ;
@end

