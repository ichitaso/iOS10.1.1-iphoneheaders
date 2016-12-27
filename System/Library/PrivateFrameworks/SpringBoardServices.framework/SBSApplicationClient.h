/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSApplicationClient : SBSServiceFacilityClient
+(id)serviceFacilityIdentifier;
-(void)fetchRemovabilityForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setRemovalAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)fetchIconStateForVehicleId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleId:(id)arg3 ;
-(void)resetIconStateForVehicleId:(id)arg1 ;
-(void)fetchCarApplicationInformationForBundleIdentifier:(id)arg1 inVehicle:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
@end
