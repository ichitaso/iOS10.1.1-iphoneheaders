/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDataSource.h>

@protocol CXCallObserverDataSourceDelegate, OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSXPCConnection, NSString;

@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource> {

	int _notifyToken;
	id<CXCallObserverDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSMutableDictionary* _mutableCallUUIDToCallMap;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;                      //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableCallUUIDToCallMap;                    //@synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int notifyToken;                                                   //@synthesize notifyToken=_notifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * callUUIDToCallMap; 
@property (assign,nonatomic,__weak) id<CXCallObserverDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CXCallObserverDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<CXCallObserverDataSourceDelegate>)delegate;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(int)notifyToken;
-(void)setNotifyToken:(int)arg1 ;
-(NSDictionary *)callUUIDToCallMap;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(oneway void)removeCall:(id)arg1 ;
-(void)requestTransaction:(id)arg1 forExtensionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestCalls;
-(NSMutableDictionary *)mutableCallUUIDToCallMap;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)_removeCall:(id)arg1 ;
-(void)_addOrUpdateCall:(id)arg1 ;
-(void)_markAllCallsAsEnded;
-(id)initWithConcurrentQueue:(id)arg1 ;
-(void)setMutableCallUUIDToCallMap:(NSMutableDictionary *)arg1 ;
@end
