/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKGestureCameraBehavior.h>
#import <libobjc.A.dylib/VKNavGestureCameraBehavior.h>

@class VKNavCameraController, VKTimedAnimation, NSString;

@interface VKAttachedNavGestureCameraBehavior : VKGestureCameraBehavior <VKNavGestureCameraBehavior> {

	VKNavCameraController* _navCameraController;
	double _startZoomScale;
	VKTimedAnimation* _tapZoomAnimation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginZoom:(CGPoint)arg1 ;
-(void)updateZoom:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)updatePan:(CGPoint)arg1 lastScreenPoint:(CGPoint)arg2 ;
-(void)updateRotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)updatePitch:(CGPoint)arg1 translation:(double)arg2 ;
-(id)initWithNavCameraController:(id)arg1 ;
-(void)_startZoomAnimationFrom:(double)arg1 to:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
