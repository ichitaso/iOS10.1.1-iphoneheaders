/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CAMPowerController : NSObject {

	BOOL __isBackgrounded;
	int __assertionIdentifierGenerator;
	NSMutableDictionary* __assertionsByIdentifier;
	NSObject*<OS_dispatch_queue> __assertionsQueue;
	unsigned long long __backgroundTaskIdentifier;

}

@property (nonatomic,readonly) int _assertionIdentifierGenerator;                                               //@synthesize _assertionIdentifierGenerator=__assertionIdentifierGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _assertionsByIdentifier;                                   //@synthesize _assertionsByIdentifier=__assertionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _assertionsQueue;                                   //@synthesize _assertionsQueue=__assertionsQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long _backgroundTaskIdentifier;                                    //@synthesize _backgroundTaskIdentifier=__backgroundTaskIdentifier - In the implementation block
@property (assign,setter=_setBackgrounded:,getter=_isBackgrounded,nonatomic) BOOL _isBackgrounded;              //@synthesize _isBackgrounded=__isBackgrounded - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)_backgroundTaskIdentifier;
-(void)_applicationWillResignActive:(id)arg1 ;
-(NSMutableDictionary *)_assertionsByIdentifier;
-(BOOL)_isBackgrounded;
-(NSObject*<OS_dispatch_queue>)_assertionsQueue;
-(void)_setBackgrounded:(BOOL)arg1 ;
-(void)_endBackgroundTaskIfNeeded;
-(void)_startBackgroundTaskIfNeeded;
-(unsigned)generateAssertionIdentifier;
-(void)addAssertionForIndentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(void)removeAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(int)_assertionIdentifierGenerator;
@end
