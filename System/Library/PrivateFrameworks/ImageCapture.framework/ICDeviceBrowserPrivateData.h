/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {

	id _delegate;
	BOOL _browsing;
	NSMutableArray* _internalDevices;

}

@property (assign) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBrowsing) BOOL browsing;                      //@synthesize browsing=_browsing - In the implementation block
@property (retain) NSMutableArray * internalDevices;              //@synthesize internalDevices=_internalDevices - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setInternalDevices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)internalDevices;
-(void)setBrowsing:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(void)finalize;
@end

