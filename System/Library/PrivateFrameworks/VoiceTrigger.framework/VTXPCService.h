/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTXPCService <NSObject>
@required
-(oneway void)getTestResponse:(/*^block*/id)arg1;
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
-(oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3;
-(oneway void)notifyVoiceTriggeredSiriSessionCancelled;
-(oneway void)notifySecondChanceRequest;
-(oneway void)notifyTriggerEventRequest;
-(oneway void)queryLastTriggerEventTypeWithReply:(/*^block*/id)arg1;
-(oneway void)resetAssertions;
-(oneway void)clearVoiceTriggerCount;
-(oneway void)getVoiceTriggerCountWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceAudioBufferWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceVTEventInfoWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceTriggeredDateWithReply:(/*^block*/id)arg1;

@end
