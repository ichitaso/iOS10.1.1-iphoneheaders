/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HMFPowerLogger : NSObject
+(id)sharedPowerLogger;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 ;
-(void)reportIncomingIPEvent:(id)arg1 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 ;
-(void)reportIncomingBonjour:(id)arg1 ;
-(void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2 ;
-(void)reportIncomingLoxyMessage:(id)arg1 ;
-(void)reportIncomingCloudPush:(id)arg1 ;
-(id)linkTypeDescription:(long long)arg1 ;
@end
