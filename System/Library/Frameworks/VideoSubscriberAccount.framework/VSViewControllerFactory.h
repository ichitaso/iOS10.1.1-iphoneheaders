/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSViewControllerFactory : NSObject
+(id)sharedFactory;
-(id)loadingViewController;
-(id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1 ;
-(id)viewControlllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)viewServiceRemoteViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)autoAuthenticationViewController;
-(id)credentialEntryViewController;
-(id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(/*^block*/id)arg3 ;
-(id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(/*^block*/id)arg1 ;
-(id)viewControllerForAboutPrivacyWithTarget:(id)arg1 action:(SEL)arg2 ;
@end
