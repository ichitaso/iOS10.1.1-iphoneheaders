/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement

@property (nonatomic,readonly) GCControllerButtonInput * positive; 
@property (nonatomic,readonly) GCControllerButtonInput * negative; 
@property (getter=isFlipped,nonatomic,readonly) BOOL flipped; 
@property (getter=isDigital,nonatomic,readonly) BOOL digital; 
@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) float value; 
-(id)description;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
-(GCControllerButtonInput *)negative;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(BOOL)isDigital;
-(GCControllerButtonInput *)positive;
-(BOOL)isFlipped;
@end

