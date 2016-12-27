/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/MDRenderTarget.h>

@class NSString;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {

	RenderTargetFormat _resolvedRenderTargetFormat;
	CGSize _size;
	double _contentScale;
	Device* _device;
	BOOL _canMakeImage;
	BOOL _recreateRenderTarget;
	BOOL _allowAlpha;
	unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> >* _flippedSurfaceTexture;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _flippedRenderTarget;
	RenderTargetFormat _format;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _renderTarget;
	unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> >* _colorBuffer;
	unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> >* _depthStencilBuffer;
	BOOL _useMultisampling;
	unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> >* _msaaResolveBuffer;

}

@property (assign,nonatomic) CGSize size;                                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double contentScale;                                          //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) BOOL allowAlpha;                                              //@synthesize allowAlpha=_allowAlpha - In the implementation block
@property (nonatomic,readonly) Device* device; 
@property (nonatomic,readonly) RenderTarget* renderTarget; 
@property (nonatomic,readonly) RenderTarget* finalRenderTarget; 
@property (nonatomic,readonly) Texture2D* imageTexture; 
@property (nonatomic,readonly) RenderTargetFormat resolvedRenderTargetFormat;              //@synthesize resolvedRenderTargetFormat=_resolvedRenderTargetFormat - In the implementation block
@property (nonatomic,readonly) BOOL multiSample;                                           //@synthesize useMultisampling=_useMultisampling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) const RenderTargetFormat* format; 
@property (nonatomic,readonly) BOOL shouldRasterize; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) float averageFPS; 
-(CGSize)size;
-(const RenderTargetFormat*)format;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)shouldRasterize;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(CGSize)sizeInPixels;
-(RenderTarget*)renderTarget;
-(void)willDrawView;
-(void)didDrawView;
-(BOOL)multiSample;
-(RenderTarget*)finalRenderTarget;
-(Texture*)finalSurface;
-(id)initWithSize:(CGSize)arg1 device:(Device*)arg2 scale:(double)arg3 useMultisampling:(BOOL)arg4 ;
-(Texture2D*)imageTexture;
-(void)_createRenderTarget;
-(void)_destroyRenderTarget;
-(shared_ptr<ggl::BitmapDataBase>*)bitmapDataWithRenderer:(Renderer*)arg1 ;
-(CGImageRef)newImageWithRenderer:(Renderer*)arg1 ;
-(BOOL)allowAlpha;
-(void)setAllowAlpha:(BOOL)arg1 ;
-(RenderTargetFormat)resolvedRenderTargetFormat;
-(Device*)device;
@end
