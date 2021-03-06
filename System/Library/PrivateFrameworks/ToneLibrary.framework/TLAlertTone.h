/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLSystemSound, NSURL;

@interface TLAlertTone : NSObject {

	unsigned _actualSoundID;
	unsigned _previewSoundID;
	TLSystemSound* _actualSound;
	TLSystemSound* _previewSound;
	NSURL* _soundFileURL;
	NSURL* _vibrationPatternFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;                         //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * vibrationPatternFileURL;              //@synthesize vibrationPatternFileURL=_vibrationPatternFileURL - In the implementation block
@property (nonatomic,readonly) TLSystemSound * actualSound; 
@property (nonatomic,readonly) TLSystemSound * previewSound; 
-(id)initWithSoundFileURL:(id)arg1 vibrationPatternFileURL:(id)arg2 actualSoundID:(unsigned)arg3 previewSoundID:(unsigned)arg4 ;
-(TLSystemSound *)actualSound;
-(NSURL *)soundFileURL;
-(TLSystemSound *)previewSound;
-(NSURL *)vibrationPatternFileURL;
@end

