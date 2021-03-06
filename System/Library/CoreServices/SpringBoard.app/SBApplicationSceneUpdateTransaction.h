/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@protocol UIApplicationSceneClientSettings;
@class SBWorkspaceApplication, SBWorkspaceApplicationTransitionContext, FBSDisplay, NSString, UIMutableApplicationSceneSettings, UIApplicationSceneTransitionContext, FBSSceneClientSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {

	SBWorkspaceApplication* _appContext;
	SBWorkspaceApplicationTransitionContext* _transitionContext;
	FBSDisplay* _display;
	NSString* _sceneIdentifier;
	UIMutableApplicationSceneSettings* _settings;
	UIApplicationSceneTransitionContext* _sceneTransitionContext;
	FBSSceneClientSettings*<UIApplicationSceneClientSettings> _clientSettings;
	BOOL _suspendedActivation;
	BOOL _shouldSendActivationResult;

}

@property (nonatomic,readonly) SBWorkspaceApplication * application;                           //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) NSString * sceneIdentifier;                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) UIMutableApplicationSceneSettings * sceneSettings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL shouldSendActivationResult;                                  //@synthesize shouldSendActivationResult=_shouldSendActivationResult - In the implementation block
-(id)initWithApplication:(id)arg1 transitionRequest:(id)arg2 ;
-(void)setShouldSendActivationResult:(BOOL)arg1 ;
-(void)_sendActivationResultWithSuccess:(BOOL)arg1 ;
-(void)_clearApplicationActivationState;
-(BOOL)shouldSendActivationResult;
-(SBWorkspaceApplication *)application;
-(NSString *)sceneIdentifier;
-(UIMutableApplicationSceneSettings *)sceneSettings;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)_noteWillCommitUpdateForScene:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(id)_customizedDescriptionProperties;
@end

