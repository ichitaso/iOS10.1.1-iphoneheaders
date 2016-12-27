/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore;
@class AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject;

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderSampleReferenceOutput* _trackReader;
	SCD_Struct_VC22 _timerange;
	long long _launchOnce;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_semaphore> _inputSemaphore;
	NSObject*<OS_dispatch_semaphore> _outputSemaphore;
	BOOL _cancelDecode;
	int _decodeError;
	BOOL _decodeFinished;
	int _decodedFrames;
	int _outputFrameIdx;
	opaqueCMSampleBuffer* _sampleBuffer[2];

}
-(void)dealloc;
-(long long)status;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC22*)arg2 ;
-(int)findNextSample:(BOOL)arg1 timerange:(SCD_Struct_VC22*)arg2 ;
-(int)decodeSample:(SCD_Struct_VC22)arg1 sample:(opaqueCMSampleBuffer*)arg2 ;
-(void)decodeTask;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
@end
