/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsBuffer.h>

@interface MTLTelemetryBuffer : MTLToolsBuffer
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
-(void)accumBufferDistribution:(id)arg1 options:(unsigned long long)arg2 ;
@end
