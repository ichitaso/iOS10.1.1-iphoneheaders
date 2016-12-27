/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageFaceDetector : VCPImageAnalyzer
+(id)faceDetector;
-(int)processTile:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 results:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
-(int)faceDetection:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 faces:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(BOOL)isDuplicate:(CGRect)arg1 withRect:(CGRect)arg2 ;
@end
