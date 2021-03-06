/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIImageView.h>

@class CAFilter, NSValue, _UIBackdropViewSettings;

@interface MusicInteractiveContentEffectView : UIImageView {

	CAFilter* _colorMatrixFilter;
	CAFilter* _colorSaturateFilter;
	CAFilter* _gaussianBlurFilter;
	NSValue* _inputBoundsValue;
	_UIBackdropViewSettings* _backdropSettings;
	double _transitionProgress;
	CGRect _inputBounds;

}

@property (nonatomic,retain) _UIBackdropViewSettings * backdropSettings;              //@synthesize backdropSettings=_backdropSettings - In the implementation block
@property (assign,nonatomic) CGRect inputBounds;                                      //@synthesize inputBounds=_inputBounds - In the implementation block
@property (assign,nonatomic) double transitionProgress;                               //@synthesize transitionProgress=_transitionProgress - In the implementation block
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(void)_applyTransitionProgress;
-(id)initWithFrame:(CGRect)arg1 backdropSettings:(id)arg2 ;
-(void)setBackdropSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setInputBounds:(CGRect)arg1 ;
-(_UIBackdropViewSettings *)backdropSettings;
-(CGRect)inputBounds;
@end

