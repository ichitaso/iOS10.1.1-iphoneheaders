/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
@class RadiosPreferences;

@interface MISManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	BOOL _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)cellDataChangedNotification:(id)arg1 ;
-(void)attachMIS;
-(void)authenticate;
-(void)stopService;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)detachMIS;
-(BOOL)didUserPreventData;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(void)setState:(int)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)sendStateUpdate;
@end
