/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PSUILocationServicesListController.h>

@class PSSpecifier, RTRoutineManager;

@interface PSUILocationCoreRoutineListController : PSUILocationServicesListController {

	PSSpecifier* _coreRoutineSpecifier;
	id _coreRoutineSettings;
	id _cachedParentController;
	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
@property (retain) id cachedParentController;                                //@synthesize cachedParentController=_cachedParentController - In the implementation block
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(void)updateLocationUsage;
-(RTRoutineManager *)routineManager;
-(void)setStatusEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isStatusEnabled:(id)arg1 ;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)setCachedParentController:(id)arg1 ;
-(id)cachedParentController;
-(void)setCoreRoutineEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isCoreRoutineEnabled:(id)arg1 ;
-(id)specifiers;
@end
