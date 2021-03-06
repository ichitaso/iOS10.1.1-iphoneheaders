/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CMKStillImageCaptureRequestDelegate;
@interface CMKStillImageCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {

	BOOL _transient;
	long long _deviceOrientation;
	long long _captureDevice;
	long long _flashMode;
	int _hdrMode;
	BOOL _usesStillImageStabilization;
	BOOL _wantsAudioForCapture;
	id<CMKStillImageCaptureRequestDelegate> _delegate;

}

@property (getter=isTransient,nonatomic,readonly) BOOL transient;                                    //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) long long deviceOrientation;                                          //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) long long captureDevice;                                              //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                                  //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) int hdrMode;                                                          //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) BOOL usesStillImageStabilization;                                     //@synthesize usesStillImageStabilization=_usesStillImageStabilization - In the implementation block
@property (nonatomic,readonly) BOOL wantsAudioForCapture;                                            //@synthesize wantsAudioForCapture=_wantsAudioForCapture - In the implementation block
@property (nonatomic,__weak,readonly) id<CMKStillImageCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CMKStillImageCaptureRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)deviceOrientation;
-(BOOL)isTransient;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)flashMode;
-(int)hdrMode;
-(BOOL)usesStillImageStabilization;
-(BOOL)wantsAudioForCapture;
-(long long)captureDevice;
@end

