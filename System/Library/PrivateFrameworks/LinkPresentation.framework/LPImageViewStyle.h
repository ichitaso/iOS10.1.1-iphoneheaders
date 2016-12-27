/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPEmailCompatibleCaptionBarItemChild.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPSize, LPPadding, UIColor, LPPointUnit;

@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying> {

	LPSize* _size;
	LPPadding* _margin;
	LPPadding* _padding;
	long long _filter;
	UIColor* _backgroundColor;
	LPPointUnit* _backgroundInset;
	double _foregroundOpacity;
	LPPointUnit* _cornerRadius;
	double _darkeningAmount;
	UIColor* _maskColor;

}

@property (nonatomic,retain) LPSize * size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * margin;                //@synthesize margin=_margin - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;               //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long filter;                           //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) LPPointUnit * backgroundInset;              //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (assign,nonatomic) double foregroundOpacity;                   //@synthesize foregroundOpacity=_foregroundOpacity - In the implementation block
@property (nonatomic,retain) LPPointUnit * cornerRadius;                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double darkeningAmount;                     //@synthesize darkeningAmount=_darkeningAmount - In the implementation block
@property (assign,nonatomic) UIColor * maskColor;                        //@synthesize maskColor=_maskColor - In the implementation block
-(id)init;
-(void)setCornerRadius:(LPPointUnit *)arg1 ;
-(LPPointUnit *)cornerRadius;
-(LPSize *)size;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(LPSize *)arg1 ;
-(void)setFilter:(long long)arg1 ;
-(LPPadding *)padding;
-(LPPointUnit *)backgroundInset;
-(void)setBackgroundInset:(LPPointUnit *)arg1 ;
-(LPPadding *)margin;
-(long long)filter;
-(double)foregroundOpacity;
-(UIColor *)maskColor;
-(double)darkeningAmount;
-(id)emailCompatibleMargin;
-(void)setForegroundOpacity:(double)arg1 ;
-(void)setDarkeningAmount:(double)arg1 ;
-(void)setMaskColor:(UIColor *)arg1 ;
@end
