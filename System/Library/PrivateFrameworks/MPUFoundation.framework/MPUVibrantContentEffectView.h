/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUEffectView.h>

@class UIView, MPUPinningView, UIImageView, NSMapTable;

@interface MPUVibrantContentEffectView : MPUEffectView {

	BOOL _vibrancyEnabled;
	UIView* _contentView;
	MPUPinningView* _maskedView;
	UIView* _vibrantContainer;
	UIImageView* _blurImageView;
	UIView* _plusDView;
	UIView* _tintingView;
	NSMapTable* _layerPinningViewMap;

}

@property (nonatomic,retain) MPUPinningView * maskedView;                   //@synthesize maskedView=_maskedView - In the implementation block
@property (nonatomic,retain) UIView * vibrantContainer;                     //@synthesize vibrantContainer=_vibrantContainer - In the implementation block
@property (nonatomic,retain) UIImageView * blurImageView;                   //@synthesize blurImageView=_blurImageView - In the implementation block
@property (nonatomic,retain) UIView * plusDView;                            //@synthesize plusDView=_plusDView - In the implementation block
@property (nonatomic,retain) UIView * tintingView;                          //@synthesize tintingView=_tintingView - In the implementation block
@property (nonatomic,retain) NSMapTable * layerPinningViewMap;              //@synthesize layerPinningViewMap=_layerPinningViewMap - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL vibrancyEnabled;                          //@synthesize vibrancyEnabled=_vibrancyEnabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setReferenceView:(id)arg1 ;
-(void)updateEffect;
-(UIImageView *)blurImageView;
-(void)setBlurImageView:(UIImageView *)arg1 ;
-(void)reenableVibrancyForLayer:(id)arg1 ;
-(id)_layersNotWantingVibrancyForSubviewsOfView:(id)arg1 ;
-(void)disableVibrancyForLayer:(id)arg1 ;
-(void)setVibrancyEnabled:(BOOL)arg1 ;
-(BOOL)vibrancyEnabled;
-(MPUPinningView *)maskedView;
-(void)setMaskedView:(MPUPinningView *)arg1 ;
-(UIView *)vibrantContainer;
-(void)setVibrantContainer:(UIView *)arg1 ;
-(UIView *)plusDView;
-(void)setPlusDView:(UIView *)arg1 ;
-(UIView *)tintingView;
-(void)setTintingView:(UIView *)arg1 ;
-(NSMapTable *)layerPinningViewMap;
-(void)setLayerPinningViewMap:(NSMapTable *)arg1 ;
-(void)updateVibrancyForContentView;
@end

