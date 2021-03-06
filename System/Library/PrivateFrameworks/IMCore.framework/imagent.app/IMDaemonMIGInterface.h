/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMDaemonMIGInterface : NSObject {

	NSObject*<OS_xpc_object> _server;
	int _notifyToken;
	id _delegate;
	BOOL _shuttingDown;

}

@property (assign) id<IMDaemonMIGInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)acceptIncomingGrantRequests;
-(void)denyIncomingGrantRequests;
-(void)__setupServer;
-(void)setDelegate:(id<IMDaemonMIGInterfaceDelegate>)arg1 ;
-(id<IMDaemonMIGInterfaceDelegate>)delegate;
@end

