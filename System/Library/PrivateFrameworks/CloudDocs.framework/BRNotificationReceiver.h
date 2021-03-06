/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRItemNotificationReceiving.h>

@protocol OS_dispatch_queue, BRItemNotificationSending, BRNotificationReceiverDelegate, OS_dispatch_source;
@class NSObject, BRNotificationQueue, NSMutableDictionary, NSString;

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _ipcQueue;
	BRNotificationQueue* _notifs;
	id<BRItemNotificationSending> _sender;
	Ai _gatherDones;
	id<BRNotificationReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _receivedChanges;
	unsigned long long _batchingChanges;
	double _batchingDelay;
	unsigned long long _lastBatchTime;
	NSMutableDictionary* _progressObserverByID;
	NSMutableDictionary* _itemInTransferByID;
	Ai _suspendCount;
	int _networkReachabilityToken;
	BOOL _isNetworkReachable;
	BOOL _isInvalidated;

}

@property (nonatomic,readonly) unsigned long long pendingCount; 
@property (assign,nonatomic) unsigned long long batchingChanges;                       //@synthesize batchingChanges=_batchingChanges - In the implementation block
@property (assign,nonatomic) double batchingDelay;                                     //@synthesize batchingDelay=_batchingDelay - In the implementation block
@property (nonatomic,retain) id<BRNotificationReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<BRNotificationReceiverDelegate>)arg1 ;
-(void)dealloc;
-(id<BRNotificationReceiverDelegate>)delegate;
-(oneway void)invalidate;
-(void)flush;
-(void)suspend;
-(void)resume;
-(void)_signalSourceIfNeeded;
-(void)invalidateAndNotify:(BOOL)arg1 ;
-(id)_obtainNotificationSenderFromDaemon;
-(void)networkDidChangeReachabilityStatusTo:(BOOL)arg1 ;
-(void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3 ;
-(void)_invalidateAndNotify:(BOOL)arg1 ;
-(void)_receiveUpdates:(id)arg1 ;
-(void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3 ;
-(oneway void)invalidateAndDontNotifyDelegate;
-(void)receiveStitchingUpdates:(id)arg1 ;
-(void)disableUpdatesFromIPCBeforeStitching;
-(void)enableUpdatesFromIPCAfterStitching;
-(unsigned long long)batchingChanges;
-(void)setBatchingChanges:(unsigned long long)arg1 ;
-(double)batchingDelay;
-(void)setBatchingDelay:(double)arg1 ;
-(void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)receiveProgressUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)pendingCount;
@end

