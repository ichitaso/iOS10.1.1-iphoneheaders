/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@interface MPSImageHistogramSpecification : MPSUnaryImageKernel {

	unsigned long long histogramEntries;
	BOOL histogramAlpha;
	 minPixelValue;
	 maxPixelValue;
	BOOL optimized256BinsUseCase;
	id<MTLBuffer> specificationBuffer;
	BOOL encodeTransform;

}

@property (nonatomic,readonly) SCD_Struct_MP9 histogramInfo; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP9)histogramInfo;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 histogramInfo:(const SCD_Struct_MP9*)arg2 ;
-(void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceHistogram:(id)arg3 sourceHistogramOffset:(unsigned long long)arg4 desiredHistogram:(id)arg5 desiredHistogramOffset:(unsigned long long)arg6 ;
@end

