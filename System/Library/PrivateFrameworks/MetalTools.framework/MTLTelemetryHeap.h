/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsHeap.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryHeap : MTLToolsHeap {

	MTLTelemetryDevice* _telemetryDevice;

}

@property (nonatomic,readonly) MTLTelemetryDevice * telemetryDevice;              //@synthesize telemetryDevice=_telemetryDevice - In the implementation block
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)initWithHeap:(id)arg1 descriptor:(id)arg2 device:(id)arg3 ;
-(MTLTelemetryDevice *)telemetryDevice;
@end

