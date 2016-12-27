/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSString;

@interface CIQRCodeGenerator : CICodeGenerator {

	NSString* inputCorrectionLevel;

}

@property (nonatomic,copy) NSString * inputCorrectionLevel; 
+(id)customAttributes;
-(void)setInputCorrectionLevel:(NSString *)arg1 ;
-(NSString *)inputCorrectionLevel;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(CGImageRef)outputCGImage;
@end
