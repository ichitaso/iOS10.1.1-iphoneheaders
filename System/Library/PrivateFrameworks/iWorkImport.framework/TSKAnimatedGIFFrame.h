/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSKAnimatedGIFFrame : NSObject {

	CGImageRef mImage;
	double mTime;

}

@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) CGImageRef image; 
-(id)initWithCGImage:(CGImageRef)arg1 time:(double)arg2 ;
-(void)dealloc;
-(id)description;
-(CGImageRef)image;
-(double)time;
@end
