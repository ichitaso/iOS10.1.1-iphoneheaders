/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLRenderPipelineState.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {

	NSString* _label;
	id<MTLDevice> _device;

}

@property (readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(void)dealloc;
-(NSString *)label;
-(id<MTLDevice>)device;
@end
