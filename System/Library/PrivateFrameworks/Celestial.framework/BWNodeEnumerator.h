/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {

	BWGraph* _graph;
	unsigned long long _depth;
	NSMutableDictionary* _nodeVisitCountMap;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithGraph:(id)arg1 ;
-(unsigned long long)_updateVisitedCount:(id)arg1 ;
-(id)_visitedCount:(id)arg1 ;
@end

