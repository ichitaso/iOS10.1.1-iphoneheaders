/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, Protocol;

@interface CADXPCProxyHelper : NSObject {

	NSXPCConnection* _connection;
	Protocol* _protocol;

}
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_copyReplyBlockFromInvocation:(id)arg1 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3 ;
-(id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 ;
@end
