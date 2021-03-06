/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSAPdfHyperlinkController.h>

@class NSArray;

@interface KNPdfHyperlinkController : TSAPdfHyperlinkController {

	NSArray* mSlides;
	CGRect mCanvasRect;
	long long mCurrentSlideNumber;

}

@property (assign,nonatomic) long long currentSlideNumber; 
-(CGRect)canvasRect;
-(BOOL)ignoreUrl:(id)arg1 ;
-(BOOL)isDestination:(id)arg1 ;
-(id)destinationFromUrl:(id)arg1 ;
-(long long)currentSlideNumber;
-(void)setCurrentSlideNumber:(long long)arg1 ;
-(void)addHyperlinksForReps:(id)arg1 targetRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(id)initWithShow:(id)arg1 ;
-(id)nameForSlide:(id)arg1 ;
-(id)nameFromIndex:(unsigned long long)arg1 ;
-(long long)getFirstNonHiddenIndex:(unsigned long long)arg1 delta:(long long)arg2 ;
-(id)currentSlideName;
-(void)dealloc;
@end

