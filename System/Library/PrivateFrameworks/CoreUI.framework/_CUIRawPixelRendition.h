/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface _CUIRawPixelRendition : CUIThemeRendition {

	unsigned _nimages;
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;

}
-(CGImageRef)unslicedImage;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(id)sliceInformation;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGSize)unslicedSize;
-(void)dealloc;
-(id)metrics;
-(int)pixelFormat;
@end

