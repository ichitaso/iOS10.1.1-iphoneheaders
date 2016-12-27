/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WDRubyProperties : NSObject {

	unsigned mOriginal : 1;
	SCD_Struct_WD114* mOriginalProperties;

}

@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) unsigned short phoneticGuideFontSize; 
@property (assign,nonatomic) unsigned short baseFontSize; 
@property (assign,nonatomic) unsigned short distanceBetween; 
@property (assign,nonatomic) int phoneticGuideLanguage; 
-(id)init;
-(void)setAlignment:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(int)alignment;
-(BOOL)isAnythingOverridden;
-(BOOL)isAlignmentOverridden;
-(BOOL)isAnythingOverriddenIn:(SCD_Struct_WD114*)arg1 ;
-(void)clearAlignment;
-(unsigned short)phoneticGuideFontSize;
-(BOOL)isPhoneticGuideFontSizeOverridden;
-(void)clearPhoneticGuideFontSize;
-(unsigned short)baseFontSize;
-(BOOL)isBaseFontSizeOverridden;
-(void)clearBaseFontSize;
-(unsigned short)distanceBetween;
-(BOOL)isDistanceBetweenOverridden;
-(void)clearDistanceBetween;
-(int)phoneticGuideLanguage;
-(BOOL)isPhoneticGuideLanguageOverridden;
-(void)clearPhoneticGuideLanguage;
-(void)setPhoneticGuideFontSize:(unsigned short)arg1 ;
-(void)setDistanceBetween:(unsigned short)arg1 ;
-(void)setBaseFontSize:(unsigned short)arg1 ;
-(void)setPhoneticGuideLanguage:(int)arg1 ;
@end
