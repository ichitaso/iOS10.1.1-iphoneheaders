/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneRenderCacheObject.h>

@class TSCH3DStrokePatternTexture;

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject {

	TSCH3DStrokePatternTexture* mStrokeTexture;
	BOOL mDidRenderOnce;

}

@property (assign,nonatomic) BOOL didRenderOnce; 
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(id)p_geometry;
-(id)p_texcoords;
-(id)p_box;
-(id)p_originalGeometry;
-(id)p_normals;
-(id)p_diffuseTexcoords;
-(void)submitResourcesWithLineRenderer:(id)arg1 setting:(id)arg2 ;
-(void)renderWithLineRenderer:(id)arg1 setting:(id)arg2 fromVertex:(const PrefilteredLineVertexProperties*)arg3 toVertex:(const PrefilteredLineVertexProperties*)arg4 ;
-(BOOL)didRenderOnce;
-(void)setDidRenderOnce:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

