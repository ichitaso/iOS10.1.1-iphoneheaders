/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUICredentialRecoveryPresentationDelegate
@optional
-(id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1;
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@required
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;

@end

