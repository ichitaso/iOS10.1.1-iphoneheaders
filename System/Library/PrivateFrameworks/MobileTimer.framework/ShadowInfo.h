/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class UIColor;

@interface ShadowInfo : NSObject {

	UIColor* _color;
	double _radius;
	double _scale;
	CGSize _offset;

}

@property (nonatomic,copy) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double radius;              //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGSize offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(void)setScale:(double)arg1 ;
-(double)scale;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setOffset:(CGSize)arg1 ;
-(CGSize)offset;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(id)initWithColor:(id)arg1 radius:(double)arg2 offset:(CGSize)arg3 scale:(double)arg4 ;
@end
