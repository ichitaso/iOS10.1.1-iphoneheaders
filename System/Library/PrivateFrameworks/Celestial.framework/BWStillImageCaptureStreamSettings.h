/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWBracketSettings, NSArray;

@interface BWStillImageCaptureStreamSettings : NSObject {

	NSString* _portType;
	int _captureType;
	BWBracketSettings* _bracketSettings;
	NSArray* _validBracketedCaptureSequenceNumbers;

}

@property (nonatomic,readonly) NSString * portType;                                         //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) int captureType;                                             //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) BWBracketSettings * bracketSettings;                         //@synthesize bracketSettings=_bracketSettings - In the implementation block
@property (nonatomic,readonly) NSArray * validBracketedCaptureSequenceNumbers;              //@synthesize validBracketedCaptureSequenceNumbers=_validBracketedCaptureSequenceNumbers - In the implementation block
@property (nonatomic,readonly) int expectedFrameCount; 
-(void)dealloc;
-(id)description;
-(int)captureType;
-(BWBracketSettings *)bracketSettings;
-(int)expectedFrameCount;
-(NSArray *)validBracketedCaptureSequenceNumbers;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 bracketSettings:(id)arg3 validBracketedCaptureSequenceNumbers:(id)arg4 ;
-(NSString *)portType;
@end
