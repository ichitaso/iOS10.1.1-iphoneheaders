/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWFigCaptureDeviceVendor : NSObject
+(void)initialize;
+(void)prewarmDefaultVideoDeviceForPID:(int)arg1 ;
+(void)_setupDeviceCloseTimer;
+(void)_registerNewDeviceClientForPID:(int)arg1 clientIDOut:(int*)arg2 deviceAvailabilityChangedHandler:(/*^block*/id)arg3 ;
+(id)_moveDeviceClientToVictimizedList;
+(void)_dumpInventory;
+(id)_popLatestVictimizedDeviceClient;
+(void)_removeDeviceClient;
+(void)_removeVictimizedDeviceClientWithClientID:(int)arg1 ;
+(OpaqueFigCaptureDeviceRef)copyDefaultVideoDeviceWithStealingBehavior:(int)arg1 forPID:(int)arg2 clientIDOut:(int*)arg3 withDeviceAvailabilityChangedHandler:(/*^block*/id)arg4 ;
+(OpaqueFigCaptureStreamRef)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(OpaqueFigCaptureDeviceRef)arg3 ;
+(void)takeBackVideoDevice:(OpaqueFigCaptureDeviceRef)arg1 forPID:(int)arg2 requestDeviceWhenAvailableAgain:(BOOL)arg3 informOtherClients:(BOOL)arg4 ;
+(void)invalidateVideoDevice:(OpaqueFigCaptureDeviceRef)arg1 forPID:(int)arg2 ;
+(BOOL)activeDeviceEquals:(OpaqueFigCaptureDeviceRef)arg1 ;
+(BOOL)videoCaptureDeviceFirmwareIsLoaded;
+(void)unregisterCallbacksForClient:(int)arg1 ;
@end
