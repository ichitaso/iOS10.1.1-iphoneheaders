/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _DPDataProtectionMaster : NSObject {

	BOOL _deviceFormatedForContentProtection;
	BOOL _notifyEnabled;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _availableState;
	NSObject*<OS_dispatch_queue> _notifyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;               //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,readonly) BOOL deviceFormatedForContentProtection;               //@synthesize deviceFormatedForContentProtection=_deviceFormatedForContentProtection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * handlers;                        //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * availableState;                  //@synthesize availableState=_availableState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                       //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) BOOL notifyEnabled;                                    //@synthesize notifyEnabled=_notifyEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(BOOL)isDataAvailableForClassA;
-(BOOL)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(id)registerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterStateChangeHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(NSMutableDictionary *)handlers;
-(BOOL)deviceIsLocked;
-(int)notifyToken;
-(BOOL)deviceFormatedForContentProtection;
-(NSMutableDictionary *)availableState;
-(BOOL)notifyEnabled;
@end
