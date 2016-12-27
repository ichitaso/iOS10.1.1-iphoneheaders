/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<WebVideoFullscreenControllerContext>* _context;
	RefPtr<WebCore::HTMLVideoElement>* _videoElement;

}
-(void)didFinishFullscreen:(WebVideoFullscreenControllerContext*)arg1 ;
-(void)requestHideAndExitFullscreen;
-(HTMLVideoElement*)videoElement;
-(void)setVideoElement:(HTMLVideoElement*)arg1 ;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
-(id)init;
-(void)exitFullscreen;
@end
