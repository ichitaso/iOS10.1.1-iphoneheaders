/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSAnalyzedImageColors.h>
@class SKUIJSColor;


@protocol SKUIJSAnalyzedImageColors <JSExport>
@property (nonatomic,readonly) SKUIJSColor * backgroundColor; 
@property (nonatomic,readonly) SKUIJSColor * textPrimaryColor; 
@property (nonatomic,readonly) SKUIJSColor * textSecondaryColor; 
@property (nonatomic,readonly) BOOL isBackgroundLight; 
@required
-(SKUIJSColor *)backgroundColor;
-(SKUIJSColor *)textPrimaryColor;
-(SKUIJSColor *)textSecondaryColor;
-(BOOL)isBackgroundLight;

@end


@class SKUIJSColor;

@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors> {

	SKUIJSColor* _backgroundColor;
	SKUIJSColor* _textPrimaryColor;
	SKUIJSColor* _textSecondaryColor;
	BOOL _isBackgroundLight;

}

@property (nonatomic,readonly) SKUIJSColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) SKUIJSColor * textPrimaryColor;                //@synthesize textPrimaryColor=_textPrimaryColor - In the implementation block
@property (nonatomic,readonly) SKUIJSColor * textSecondaryColor;              //@synthesize textSecondaryColor=_textSecondaryColor - In the implementation block
@property (nonatomic,readonly) BOOL isBackgroundLight;                        //@synthesize isBackgroundLight=_isBackgroundLight - In the implementation block
-(SKUIJSColor *)backgroundColor;
-(SKUIJSColor *)textPrimaryColor;
-(SKUIJSColor *)textSecondaryColor;
-(BOOL)isBackgroundLight;
-(id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2 ;
@end

