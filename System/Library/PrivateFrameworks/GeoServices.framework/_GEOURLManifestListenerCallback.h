/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOURLManifestListenerCallback : NSObject {

	/*^block*/id _handler;
	CFRunLoopRef _runLoop;

}
-(void)dealloc;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 handler:(/*^block*/id)arg2 ;
-(void)performHandler:(BOOL)arg1 ;
@end
