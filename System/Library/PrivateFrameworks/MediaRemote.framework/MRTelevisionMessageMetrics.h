/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface MRTelevisionMessageMetrics : NSObject {

	NSString* _path;
	NSMutableDictionary* _entries;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)addMessage:(id)arg1 data:(id)arg2 ;
-(void)write;
@end

