/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUIScene, UIApplicationSceneSettings, SBSUILoginUISceneClientSettings;

@interface SBLoginAppClientSettingObserverContext : NSObject {

	FBUIScene* _scene;
	UIApplicationSceneSettings* _settings;
	SBSUILoginUISceneClientSettings* _updatedClientSettings;

}

@property (nonatomic,retain) FBUIScene * scene;                                                    //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) SBSUILoginUISceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
-(void)setUpdatedClientSettings:(SBSUILoginUISceneClientSettings *)arg1 ;
-(SBSUILoginUISceneClientSettings *)updatedClientSettings;
-(UIApplicationSceneSettings *)settings;
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(void)setScene:(FBUIScene *)arg1 ;
-(FBUIScene *)scene;
@end
