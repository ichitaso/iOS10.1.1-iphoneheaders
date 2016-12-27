/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVVCAudioBuffer : NSObject {

	void* _impl;

}

@property (readonly) int channels; 
@property (readonly) int bytesCapacity; 
@property (assign) int bytesDataSize; 
@property (readonly) void* data; 
@property (readonly) int packetDescriptionCapacity; 
@property (readonly) int packetDescriptionCount; 
@property (readonly) AudioStreamPacketDescription* packetDescriptions; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) AudioStreamBasicDescription* streamDescription; 
-(void)dealloc;
-(void*)data;
-(int)channels;
-(unsigned long long)timeStamp;
-(int)packetDescriptionCount;
-(int)bytesDataSize;
-(AudioStreamPacketDescription*)packetDescriptions;
-(AudioStreamBasicDescription*)streamDescription;
-(void)finalize;
-(id)initWithAudioQueueBuffer:(MyAudioQueueBuffer*)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3 ;
-(int)bytesCapacity;
-(void)setBytesDataSize:(int)arg1 ;
-(int)packetDescriptionCapacity;
-(void)setPacketDescriptions:(const AudioStreamPacketDescription*)arg1 count:(int)arg2 ;
@end
