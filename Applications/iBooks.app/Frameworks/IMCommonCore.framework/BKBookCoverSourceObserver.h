/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BKBookCoverSourceObserver : NSObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)invokeAsyncWithImage:(id)arg1 url:(id)arg2 newState:(int)arg3 oldState:(int)arg4 ;
-(void)invokeSyncWithImage:(id)arg1 url:(id)arg2 newState:(int)arg3 oldState:(int)arg4 ;
-(id)initWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

