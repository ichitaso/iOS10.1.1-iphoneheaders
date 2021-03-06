/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class UIImage, SBFColorBoxes, NSString;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	UIImage* _image;
	UIImage* _displayedImage;
	double _overallContrast;
	SBFColorBoxes* _colorBoxes;
	NSString* _cacheGroup;

}

@property (setter=_setDisplayedImage:,getter=_displayedImage,nonatomic,retain) UIImage * displayedImage;              //@synthesize displayedImage=_displayedImage - In the implementation block
@property (nonatomic,retain) SBFColorBoxes * colorBoxes; 
+(BOOL)_allowsRasterization;
+(BOOL)_allowsParallax;
+(BOOL)_canCacheImages;
+(BOOL)_canDownscaleSampleImage;
+(id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1 ;
-(void)setContentView:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)_zoomScale;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_displayedImage;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(void)_setupContentView;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 options:(unsigned long long)arg5 ;
-(id)_computeAverageColor;
-(void)_handleVariantChange;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 ;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB10)arg1 includeTint:(BOOL)arg2 ;
-(BOOL)contrastRequiresTreatments;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)hasContentOutsideVisibleBounds;
-(id)_repeatingGradientImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_createColorBoxes;
-(void)setColorBoxes:(SBFColorBoxes *)arg1 ;
-(id)_wallpaperImageForAnalysis;
-(id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1 ;
-(id)_variantCacheIdentifier;
-(void)_setSampleImage:(id)arg1 ;
-(void)_setDisplayedImage:(id)arg1 ;
-(id)_imageByDarkeningHighlightsInImage:(id)arg1 ;
-(id)_mappedImageKeyForParameters:(SCD_Struct_SB10)arg1 includingTint:(BOOL)arg2 andLegibilityDarkening:(BOOL)arg3 ;
-(void)_setupWallpaperImage:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_shouldApplyLegibilityDarkeningForVariant:(long long)arg1 ;
-(id)_fallbackImageWithSize:(CGSize)arg1 ;
-(SBFColorBoxes *)colorBoxes;
-(void)_resetColorBoxes;
-(void)_toggleLegibilityDarkeningIfNecessary;
-(void)_enableLegibilityDarkening;
-(void)_disableLegibilityDarkening;
-(long long)wallpaperType;
-(id)wallpaperImage;
-(CGSize)_imageSize;
-(void)_setImage:(id)arg1 ;
-(id)snapshotImage;
@end

