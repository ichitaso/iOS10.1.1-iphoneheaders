/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneMonitorDelegate <NSObject>
@optional
-(void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
-(void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
-(void)sceneMonitor:(id)arg1 sceneWillCommitUpdateWithContext:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneDidCommitUpdateWithContext:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;

@end
