/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UICellHighlightingSupport : NSObject {

	CFDictionaryRef _unhighlightedStates;
	id _cell;

}
-(void)dealloc;
-(void)highlightView:(id)arg1 ;
-(void)applyState:(unsigned long long)arg1 toView:(id)arg2 ;
-(void)cacheState:(unsigned long long)arg1 forView:(id)arg2 ;
-(id)initWithCell:(id)arg1 ;
@end
