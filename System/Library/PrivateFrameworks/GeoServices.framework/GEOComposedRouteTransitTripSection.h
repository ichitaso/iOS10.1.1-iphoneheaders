/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSection.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitSection.h>

@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {

	SCD_Struct_GE85 _fromNodeID;
	SCD_Struct_GE85 _toNodeID;
	unsigned long long _lineID;
	SCD_Struct_GE26 _fromNodeLocation;
	SCD_Struct_GE26 _toNodeLocation;
	int _toNodeSignificance;
	Matrix<float, 4, 1> _lineColor;
	SCD_Struct_GE49 _originalBounds;

}

@property (nonatomic,readonly) Matrix<float lineColor;                  //@synthesize lineColor=_lineColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE85 fromNodeID;              //@synthesize fromNodeID=_fromNodeID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE85 toNodeID;                //@synthesize toNodeID=_toNodeID - In the implementation block
@property (nonatomic,readonly) unsigned long long lineID;               //@synthesize lineID=_lineID - In the implementation block
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance;                  //@synthesize toNodeSignificance=_toNodeSignificance - In the implementation block
-(id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(BOOL)arg3 verifySnapping:(BOOL)arg4 ;
-(void)_getPointOnPath:(id)arg1 index:(int)arg2 bounds:(const Box<double, 2>*)arg3 result:(Matrix<double, 2, 1>*)arg4 ;
-(BOOL)_getEndPoints:(id)arg1 rect:(const Box<double, 2>*)arg2 result:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg3 ;
-(id)unsnappedPathsInOverlay:(id)arg1 ;
-(BOOL)_getEndPoints:(id)arg1 gmRect:(const SCD_Struct_GE49*)arg2 result:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg3 ;
-(NSString *)description;
-(unsigned long long)lineID;
-(BOOL)isTransfer;
-(SCD_Struct_GE85)fromNodeID;
-(SCD_Struct_GE85)toNodeID;
-(int)toNodeSignificance;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9 ;
-(Matrix<float)lineColor;
@end
