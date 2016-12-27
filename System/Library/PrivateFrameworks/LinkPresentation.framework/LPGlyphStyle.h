/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, LPPadding, LPImageViewStyle;

@interface LPGlyphStyle : NSObject {

	NSString* _name;
	LPPadding* _padding;
	double _opacity;
	LPImageViewStyle* _image;

}

@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;              //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double opacity;                            //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * image;                //@synthesize image=_image - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(LPImageViewStyle *)image;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(LPPadding *)padding;
-(id)initSearchGlyph;
@end
