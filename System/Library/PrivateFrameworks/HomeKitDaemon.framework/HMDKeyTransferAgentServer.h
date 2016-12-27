/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDKeyTransferAgent.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_group;
@class NSUUID, NSObject, NSMutableSet, HMFExponentialBackoffTimer, NSString;

@interface HMDKeyTransferAgentServer : HMDKeyTransferAgent <HMFTimerDelegate> {

	BOOL _broadcastFailure;
	NSUUID* _currentKeyUUID;
	NSObject*<OS_dispatch_group> _broadcastGroup;
	NSMutableSet* _broadcastNotifiedDevices;
	HMFExponentialBackoffTimer* _broadcastUUIDTimer;
	/*^block*/id _finalCompletionHandler;

}

@property (nonatomic,retain) NSUUID * currentKeyUUID;                                      //@synthesize currentKeyUUID=_currentKeyUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> broadcastGroup;                  //@synthesize broadcastGroup=_broadcastGroup - In the implementation block
@property (nonatomic,retain) NSMutableSet * broadcastNotifiedDevices;                      //@synthesize broadcastNotifiedDevices=_broadcastNotifiedDevices - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * broadcastUUIDTimer;              //@synthesize broadcastUUIDTimer=_broadcastUUIDTimer - In the implementation block
@property (assign,nonatomic) BOOL broadcastFailure;                                        //@synthesize broadcastFailure=_broadcastFailure - In the implementation block
@property (nonatomic,copy) id finalCompletionHandler;                                      //@synthesize finalCompletionHandler=_finalCompletionHandler - In the implementation block
@property (getter=isPeerAvailable,readonly) BOOL peerAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(void)_handleKeyTransferAgentMessage:(id)arg1 ;
-(void)__deviceAddedToAccount:(id)arg1 ;
-(void)__deviceUpdated:(id)arg1 ;
-(void)__deviceRemovedFromAccount:(id)arg1 ;
-(void)_device:(id)arg1 addedToAccount:(id)arg2 ;
-(void)_device:(id)arg1 removedFromAccount:(id)arg2 ;
-(BOOL)isPeerAvailable;
-(void)beginPairingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)__resetTimer:(id)arg1 ;
-(id)_httpMessageTransport;
-(NSUUID *)currentKeyUUID;
-(NSMutableSet *)broadcastNotifiedDevices;
-(HMFExponentialBackoffTimer *)broadcastUUIDTimer;
-(void)setBroadcastFailure:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)broadcastGroup;
-(BOOL)broadcastFailure;
-(BOOL)_startAdvertiseUUIDWithError:(id*)arg1 ;
-(void)setFinalCompletionHandler:(id)arg1 ;
-(BOOL)_endAdvertiseUUIDWithError:(id*)arg1 ;
-(id)finalCompletionHandler;
-(void)_endPairingWithError:(id)arg1 ;
-(void)setCurrentKeyUUID:(NSUUID *)arg1 ;
-(void)setBroadcastGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setBroadcastNotifiedDevices:(NSMutableSet *)arg1 ;
-(void)setBroadcastUUIDTimer:(HMFExponentialBackoffTimer *)arg1 ;
@end
