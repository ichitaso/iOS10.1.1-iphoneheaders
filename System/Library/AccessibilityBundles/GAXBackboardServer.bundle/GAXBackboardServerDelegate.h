/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXBackboardServerDelegate <NSObject>
@required
-(void)backboardServer:(id)arg1 whitelistedLockscreenUIIsShowing:(BOOL)arg2 withIdentifier:(id)arg3;
-(void)backboardServer:(id)arg1 passcodeDidChange:(id)arg2;
-(void)backboardServer:(id)arg1 clientWentInvalid:(unsigned)arg2;
-(void)backboardServer:(id)arg1 gaxClientDidLoad:(id)arg2 pid:(int)arg3 port:(unsigned)arg4;
-(void)backboardServer:(id)arg1 gaxClientAppDidBecomeActive:(id)arg2 pid:(int)arg3;
-(void)deviceWasUnlockedWithBackboardServer:(id)arg1;
-(void)deviceWasLockedWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 tripleClickSheetDidShow:(unsigned)arg2;
-(BOOL)backboardServer:(id)arg1 isRectInIgnoredRegion:(CGRect)arg2 rectContextId:(unsigned)arg3;
-(long long)activeAppInterfaceOrientationWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 lockscreenUIIsShowing:(BOOL)arg2;
-(void)systemDidRestartDueToLowBatteryWithBackboardServer:(id)arg1;
-(long long)backboardServer:(id)arg1 restrictionStateForIdentifier:(id)arg2;
-(void)backboardServerPresentGuidedAccessActiveBanner:(id)arg1;
-(void)backboardServer:(id)arg1 sbMiniAlertIsShowing:(BOOL)arg2;
-(unsigned long long)appLaunchGenerationWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 isMakingEmergencyCall:(BOOL)arg2;
-(void)backboardServer:(id)arg1 voiceOverItemChooserDidShow:(unsigned)arg2;
-(BOOL)areKeyboardsDisabledForViewServicesWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 didFinishLaunchingApplicationWithConfiguration:(unsigned)arg2 appLaunchGeneration:(unsigned long long)arg3 errorMessage:(id)arg4;

@end
