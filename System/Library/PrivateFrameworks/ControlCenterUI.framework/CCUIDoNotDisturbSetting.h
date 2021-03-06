/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/CCUISettingModule.h>

@class BBSettingsGateway, BBBehaviorOverride;

@interface CCUIDoNotDisturbSetting : CCUISettingModule {

	BBSettingsGateway* _settingsGateway;
	BBBehaviorOverride* _activeOverride;
	long long _activeStatus;
	BOOL _DNDEnabled;

}

@property (assign,setter=_setDNDEnabled:,getter=_isDNDEnabled,nonatomic) BOOL DNDEnabled;              //@synthesize DNDEnabled=_DNDEnabled - In the implementation block
+(id)identifier;
+(id)displayName;
+(id)statusOnString;
+(id)statusOffString;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(void)_tearDown;
-(BOOL)_stateWithEffectiveOverrides;
-(BOOL)_isStateOverridden;
-(id)aggdKey;
-(id)selectedStateColor;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(id)statusUpdate;
-(void)_setDNDEnabled:(BOOL)arg1 ;
-(void)_setDNDEnabled:(BOOL)arg1 updateServer:(BOOL)arg2 source:(unsigned long long)arg3 ;
-(void)_setDNDStatus:(long long)arg1 ;
-(void)_updateActiveOverrides:(id)arg1 ;
-(BOOL)_isDNDEnabled;
@end

