/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject {

	BOOL _visible;
	double _effectScale;
	NSMutableDictionary* _effectList;

}

@property (assign) BOOL visible;                                //@synthesize visible=_visible - In the implementation block
@property (assign) double effectScale;                          //@synthesize effectScale=_effectScale - In the implementation block
@property (copy) NSMutableDictionary * effectList;              //@synthesize effectList=_effectList - In the implementation block
-(void)setEffectScale:(double)arg1 ;
-(void)addLayerEffectComponent:(id)arg1 ;
-(NSMutableDictionary *)effectList;
-(double)effectScale;
-(id)dropShadow;
-(void)setEffectList:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
@end

