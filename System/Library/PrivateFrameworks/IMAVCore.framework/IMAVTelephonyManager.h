/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMAVCore/IMAVCore-Structs.h>
@class CTCallCenter, NSMutableDictionary;

@interface IMAVTelephonyManager : NSObject {

	CTCallCenter* _callCenter;
	CTServerConnectionRef _ctServerConnection;
	NSMutableDictionary* _currentCallDictionary;
	BOOL _isDesignatedAudioServiceProvider;
	BOOL _isDesignatedVideoServiceProvider;
	CFMachPortRef _ctServerMachPort;
	CFUUIDRef _ctAudioToken;
	CFUUIDRef _ctVideoToken;

}

@property (nonatomic,readonly) unsigned callState; 
+(id)sharedInstance;
+(id)numberToDialForNumber:(id)arg1 dialAssist:(BOOL*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_notifyMissedCallForInviteFromID:(id)arg1 isVideo:(BOOL)arg2 ;
-(unsigned)callState;
-(BOOL)_isOnCallToID:(id)arg1 ;
-(void)_handleCallEvent:(id)arg1 ;
-(void)startWatchingForCTRequests;
-(void)_chatStateChanged:(id)arg1 ;
-(void)__handleCallEvent:(id)arg1 ;
-(void)_cleanupMachInfo;
-(BOOL)_registerCTRequestService;
-(BOOL)_setupCTServerConnection;
-(BOOL)_unregisterCTRequestService;
-(CTCallRef)_callRefForChat:(id)arg1 ;
-(void)_dialRequested:(CFDictionaryRef)arg1 ;
-(void)_answerCall:(CTCallRef)arg1 ;
-(void)_hangUpCall:(CTCallRef)arg1 ;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(void)notifyCallStartedForChat:(id)arg1 ;
-(void)_setCurrentCallStatus:(int)arg1 forChat:(id)arg2 ;
-(void)_setCallRef:(CTCallRef)arg1 forChat:(id)arg2 ;
-(void)notifyMissedCallForChat:(id)arg1 ;
-(void)notifyCallConnectingForChat:(id)arg1 ;
-(void)notifyCallConnectedForChat:(id)arg1 ;
-(void)notifyCallEndedForChat:(id)arg1 ;
-(void)_handleCTServiceRequestName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 contextInfo:(void*)arg3 ;
-(void)_disconnectCSCallWithID:(id)arg1 ;
-(void)stopWatchingForCTRequests;
@end
