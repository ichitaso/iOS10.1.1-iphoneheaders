/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, BirthdayCalendarManager, LocalAttachmentCleanUpSupport, NSMutableSet, NSLock, NSArray, CDBDataProtectionObserver, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	BirthdayCalendarManager* _birthdayManager;
	LocalAttachmentCleanUpSupport* _localAttachmentCleanupManager;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	unsigned long long _birthdayManagerGeneration;
	NSArray* _signalSensors;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject* _bbProvider;
	CDBDataProtectionObserver* _dataProtectionObserver;

}

@property (nonatomic,retain) CDBDataProtectionObserver * dataProtectionObserver;              //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutDown;
-(id)init;
-(void)dealloc;
-(void)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_protectedDataDidBecomeAvailable;
-(void)clientConnectionDied:(id)arg1 ;
-(void)_startBirthdayManager;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerForIdentityOrphanCleanup;
-(void)_registerForIdleChangeTrackingClientCleanup;
-(void)_tearDownSignalHandlers;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)_stopBirthdayManager;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(CDBDataProtectionObserver *)dataProtectionObserver;
-(void)_registerForNotifications;
-(void)_setUpSignalHandlers;
-(void)_dumpState;
@end
