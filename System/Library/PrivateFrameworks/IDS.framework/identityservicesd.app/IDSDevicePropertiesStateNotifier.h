/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSDevicePropertiesStateNotifier : NSObject {

	char** _notifyNames;
	int* _notifyTokens;
	int _numberOfTokens;
	unsigned long long _notifyArraySize;

}
+(id)sharedInstance;
-(void)setState:(unsigned long long)arg1 forProperty:(unsigned long long)arg2 deviceUniqueID:(id)arg3 ;
-(void)updateStateForDeviceWithUniqueID:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

