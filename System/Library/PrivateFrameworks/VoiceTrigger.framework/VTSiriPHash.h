/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTSiriPHash : NSObject {

	short _signalEstimate;

}

@property (assign) short signalEstimate;              //@synthesize signalEstimate=_signalEstimate - In the implementation block
+(id)sharedPhash;
-(id)init;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(void)setSignalEstimate:(short)arg1 ;
@end
