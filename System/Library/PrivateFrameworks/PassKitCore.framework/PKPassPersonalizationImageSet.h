/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet {

	PKImage* _logoImage;

}

@property (nonatomic,retain) PKImage * logoImage;              //@synthesize logoImage=_logoImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
+(long long)imageSetType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLogoImage:(PKImage *)arg1 ;
-(PKImage *)logoImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
@end
