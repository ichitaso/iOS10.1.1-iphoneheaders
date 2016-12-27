/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionPinchExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionPinch : OKAction <OKActionPinchExports, NSSecureCoding> {

	double _scale;
	double _angle;
	double _velocity;
	CGPoint _translation;

}

@property (assign,nonatomic) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double angle;                     //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) CGPoint translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) double velocity;                  //@synthesize velocity=_velocity - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)pinchActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 scale:(double)arg4 angle:(double)arg5 translation:(CGPoint)arg6 velocity:(double)arg7 context:(id)arg8 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setVelocity:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(double)velocity;
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end
