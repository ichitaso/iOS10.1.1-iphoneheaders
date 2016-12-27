/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKPolygonalItemGroup.h>

@interface VKBuildingGroup : VKPolygonalItemGroup {

	MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>* _strokeMeshInfo;
	MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>* _fillMeshInfoForPointyRoofs;
	unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh> > >* _extrusionFillMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > >* _extrusionStrokeMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> > >* _pointyRoofFillMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > >* _pointyRoofStrokeMeshVendor;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _extrusionFillCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _extrusionStrokeCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _fillCullingGroupsForPointyRoofs;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _pointyRoofFillCullingGroups;
	vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > >* _pointyRoofStrokeCullingGroups;
	vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > >* _styleQueries;
	vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > >* _flatRoofStyleQueries;

}
-(void)addRangesToPointyRoofStrokeRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>*)pointyRoofStrokeMeshVendor;
-(void)addRangesToExtrusionStrokeRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>*)extrusionStrokeMeshVendor;
-(void)addRangesToPointyRoofFillRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>*)pointyRoofFillMeshVendor;
-(void)addRangesToExtrusionFillRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MeshVendor<ggl::BuildingFacade::BuildingMesh>*)extrusionFillMeshVendor;
-(vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > >*)styleQueriesForPointyRoofs:(BOOL)arg1 ;
-(void)addRangesToPointyRoofTopRenderItemBatcher:(RenderItemBatcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(vector<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, std::__1::allocator<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> >*)strokeMeshes;
-(vector<ggl::PolygonBase::CompressedMeshMesh, std::__1::allocator<ggl::PolygonBase::CompressedMeshMesh> >*)fillMeshesForPointyRoofs;
-(void)updateWithStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(void)didFinishAddingData;
-(void)willAddDataWithAccessor:(ResourceAccessor*)arg1 ;
-(id)initWithStyleQuery:(shared_ptr<gss::StylesheetQuery<gss::PropertyID> >*)arg1 tile:(id)arg2 fixedAroundCentroid:(const Matrix<float, 2, 1>*)arg3 contentScale:(float)arg4 ;
-(unsigned char)maxAttributeSetsPerGroup;
-(void)prepareForBuilding:(SCD_Struct_VK550*)arg1 forRoofStyle:(unsigned char)arg2 scaleThreshold:(float)arg3 ;
-(void)addBuilding:(SCD_Struct_VK550*)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 accessor:(ResourceAccessor*)arg4 triangulator:(id)arg5 prepareExtrusion:(BOOL)arg6 forRoofStyle:(unsigned char)arg7 scaleThreshold:(float)arg8 ;
-(void)addExtrusionForBuilding:(SCD_Struct_VK550*)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 triangulator:(id)arg4 ;
-(BOOL)canConstructPointyRoofForPolygon:(SCD_Struct_VK488*)arg1 building:(SCD_Struct_VK550*)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4 ;
-(BOOL)addPointyRoofForBuilding:(SCD_Struct_VK550*)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 styleIndex:(float)arg4 ;
@end
