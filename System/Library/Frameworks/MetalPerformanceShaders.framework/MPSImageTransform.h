/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
@interface MPSImageTransform : NSObject {

	ConversionNode* nodeList;
	unsigned long long nodeCount;
	unsigned long long _inputChannels;
	unsigned long long _outputChannels;
	unsigned long long maxTempChannels;
	BOOL _channelsAreIndependent;

}

@property (nonatomic,readonly) unsigned long long inputChannels;               //@synthesize inputChannels=_inputChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputChannels;              //@synthesize outputChannels=_outputChannels - In the implementation block
@property (nonatomic,readonly) BOOL channelsAreIndependent;                    //@synthesize channelsAreIndependent=_channelsAreIndependent - In the implementation block
-(id)initWithNodeList:(ConversionNode*)arg1 ;
-(unsigned long long)inputChannels;
-(BOOL)channelsAreIndependent;
-(void)dealloc;
-(unsigned long long)outputChannels;
@end

