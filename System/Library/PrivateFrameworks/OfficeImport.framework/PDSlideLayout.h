/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {

	int mSlideLayoutType;
	PDSlideMaster* mSlideMaster;

}
-(void)dealloc;
-(id)description;
-(id)transition;
-(id)background;
-(id)defaultTheme;
-(id)slideMaster;
-(id)parentSlideBase;
-(void)doneWithContent;
-(int)slideLayoutType;
-(void)setSlideMaster:(id)arg1 ;
-(void)setSlideLayoutType:(int)arg1 ;
-(id)parentTextStyleForTables;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)initWithSlideMaster:(id)arg1 ;
@end

