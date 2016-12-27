/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/FindMyiPhoneLockScreen.lockbundle/FindMyiPhoneLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBLockScreenPluginAction;


@protocol SBLockScreenPluginController <SBPluginBundleController,SBUIOptionalLegibility>
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent; 
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
@optional
-(void)pluginWillActivateWithContext:(id)arg1;
-(void)pluginDidDeactivateWithContext:(id)arg1;
-(BOOL)pluginHandleEvent:(long long)arg1;
-(void)updateForPresentation:(id)arg1;
-(SBLockScreenPluginAction *)pluginUnlockAction;

@required
-(void)setPluginAgent:(id)arg1;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(long long)pluginPriority;
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;

@end
