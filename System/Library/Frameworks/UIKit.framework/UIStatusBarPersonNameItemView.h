/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {

	NSString* _personNameString;
	double _letterSpacing;
	double _maxWidth;

}
-(id)contentsImage;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(long long)legibilityStyle;
-(double)standardPadding;
-(BOOL)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2 ;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
@end
