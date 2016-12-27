/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsLockScreen/MapsLockScreen-Structs.h>
@class NSAttributedString;

@interface RefittedFrame : NSObject {

	double _width;
	unsigned long long _maximumNumberOfLines;
	double _minimumLineHeight;
	CTFrameRef _frame;
	BOOL _measured;
	unsigned long long _numberOfLines;
	double _maxLineHeight;
	double _maxLineWidth;
	NSRange _fittedRange;
	NSAttributedString* _string;

}

@property (nonatomic,copy) NSAttributedString * string;                            //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) double width;                                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double widthUsed; 
@property (nonatomic,readonly) NSRange fittedRange; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) unsigned long long numberOfLines; 
@property (nonatomic,readonly) BOOL textFitsEntirely; 
@property (nonatomic,readonly) CTFrameRef CTFrame; 
-(CTFrameRef)newFrameFromFramesetter:(CTFramesetterRef)arg1 ;
-(id)getLayersForBounds:(CGRect)arg1 ;
-(BOOL)textFitsEntirely;
-(double)widthUsed;
-(id)initWithAttributedString:(id)arg1 width:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3 minimumLineHeight:(double)arg4 ;
-(NSRange)fittedRange;
-(CTFrameRef)CTFrame;
-(void)measureIfNeeded;
-(void)dealloc;
-(NSAttributedString *)string;
-(void)setString:(NSAttributedString *)arg1 ;
-(double)width;
-(double)height;
-(NSAttributedString *)attributedString;
-(unsigned long long)numberOfLines;
@end
