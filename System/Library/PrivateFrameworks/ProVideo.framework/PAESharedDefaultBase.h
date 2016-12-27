/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PROAPIAccessing;
#import <ProVideo/ProVideo-Structs.h>
@interface PAESharedDefaultBase : NSObject {

	id<PROAPIAccessing> _apiManager;
	BOOL _upscalesFields;
	BOOL _hostIsFinalCutPro;
	BOOL _hostIsVertigo;
	BOOL _ignorePixelAspectRatio;

}
-(void)dealloc;
-(id)properties;
-(PCVector2<double>)convertRelativeToImageCoordinates:(const PCVector2<double>*)arg1 withImage:(id)arg2 ;
-(PCRect<float>)getCropRectFromImage:(id)arg1 toImage:(id)arg2 ;
-(HGRef<HGNode>*)cropFromImage:(id)arg1 toImage:(id)arg2 ;
-(HGRef<HGNode>*)transformFromImage:(id)arg1 toImage:(id)arg2 fit:(BOOL)arg3 ;
-(BOOL)ignoresPixelAspectRatio;
-(BOOL)getPoint:(PCVector2<double>*)arg1 fromParm:(unsigned)arg2 atTime:(/*function pointer*/void**)arg3 withImage:(id)arg4 ;
-(double)relativeShutterForAngle:(double)arg1 ;
-(void)fxTime:(/*function pointer*/void**)arg1 fromFrame:(double)arg2 forPlugIn:(id)arg3 ;
-(BOOL)frameCleanup;
-(BOOL)getHeliumImage:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_PA46*)arg4 fromParm:(int)arg5 atTime:(/*function pointer*/void**)arg6 ;
-(void)transform:(HGRef<HGNode>*)arg1 fromImage:(id)arg2 toImage:(id)arg3 fit:(BOOL)arg4 ;
-(HGRef<HGNode>*)smear:(HGRef<HGNode>*)arg1 fromImage:(id)arg2 toImage:(id)arg3 ;
-(PCVector2<double>)convertRelativeToPixelCoordinates:(const PCVector2<double>*)arg1 withImage:(id)arg2 ;
-(double)secondsFromFxTime:(/*function pointer*/void**)arg1 ;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)getHeliumImage:(id*)arg1 source:(BOOL)arg2 withInfo:(SCD_Struct_PA46*)arg3 atTime:(/*function pointer*/void**)arg4 ;
-(void)setIgnoresPixelAspectRatio:(BOOL)arg1 ;
-(PCRect<float>)getImageBoundary:(id)arg1 ;
-(HGRef<HGNode>*)changeDOD:(HGRef<HGNode>*)arg1 withRect:(const PCRect<double>*)arg2 ;
-(BOOL)addParameters;
-(int)getRenderMode:(/*function pointer*/void**)arg1 ;
-(PCMatrix44Tmpl<double>)getInversePixelTransformForImage:(id)arg1 ;
-(double)frameFromFxTime:(/*function pointer*/void**)arg1 forPlugIn:(id)arg2 ;
-(float)getBlendingGamma;
-(void)crop:(HGRef<HGNode>*)arg1 fromImage:(id)arg2 toImage:(id)arg3 ;
-(void)overrideFrameSetupForRenderMode:(SCD_Struct_PA46*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA46*)arg1 inputInfo:(SCD_Struct_Fx42)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(PCMatrix44Tmpl<double>)getPixelTransformForImage:(id)arg1 ;
-(PCVector2<double>)getScaleForImage:(id)arg1 ;
-(double)frameRate;
@end
