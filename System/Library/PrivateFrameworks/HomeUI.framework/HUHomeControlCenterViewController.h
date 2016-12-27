/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUCCGridViewControllerDelegate.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/CCUIControlCenterPageContentProviding.h>

@protocol CCUIControlCenterPageContentViewControllerDelegate;
@class HUCCGridViewController, HUCCPageItemManager, LSApplicationWorkspace, HUControlCenterContainerView, NSString;

@interface HUHomeControlCenterViewController : UIViewController <HFHomeManagerObserver, HFItemManagerDelegate, HUCCGridViewControllerDelegate, LSApplicationWorkspaceObserverProtocol, CCUIControlCenterPageContentProviding> {

	BOOL _wantsVisible;
	int _keybagLockStatusNotifyToken;
	id<CCUIControlCenterPageContentViewControllerDelegate> _delegate;
	long long _layoutStyle;
	HUCCGridViewController* _serviceGridViewController;
	HUCCGridViewController* _actionSetGridViewController;
	HUCCPageItemManager* _pageItemManager;
	unsigned long long _activePage;
	HUCCGridViewController* _activePageViewController;
	LSApplicationWorkspace* _appWorkspace;

}

@property (assign,nonatomic) BOOL wantsVisible;                                                                   //@synthesize wantsVisible=_wantsVisible - In the implementation block
@property (nonatomic,retain) HUControlCenterContainerView * view; 
@property (assign,nonatomic) long long layoutStyle;                                                               //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,retain) HUCCGridViewController * serviceGridViewController;                                  //@synthesize serviceGridViewController=_serviceGridViewController - In the implementation block
@property (nonatomic,retain) HUCCGridViewController * actionSetGridViewController;                                //@synthesize actionSetGridViewController=_actionSetGridViewController - In the implementation block
@property (nonatomic,retain) HUCCPageItemManager * pageItemManager;                                               //@synthesize pageItemManager=_pageItemManager - In the implementation block
@property (assign,nonatomic) unsigned long long activePage;                                                       //@synthesize activePage=_activePage - In the implementation block
@property (nonatomic,retain) HUCCGridViewController * activePageViewController;                                   //@synthesize activePageViewController=_activePageViewController - In the implementation block
@property (nonatomic,readonly) LSApplicationWorkspace * appWorkspace;                                             //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (assign,nonatomic) int keybagLockStatusNotifyToken;                                                     //@synthesize keybagLockStatusNotifyToken=_keybagLockStatusNotifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CCUIControlCenterPageContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
+(id)pageNumberByPageString;
+(id)pageStringByPageNumber;
-(void)setDelegate:(id<CCUIControlCenterPageContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CCUIControlCenterPageContentViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(BOOL)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(BOOL)isDeviceUnlockedForGridViewController:(id)arg1 ;
-(id)prepareForActionRequiringDeviceUnlockForGridViewController:(id)arg1 ;
-(void)gridViewControllerWillBeginApplyingDynamicBackgrounds:(id)arg1 ;
-(void)gridViewControllerDidEndApplyingDynamicBackgrounds:(id)arg1 ;
-(void)setPageItemManager:(HUCCPageItemManager *)arg1 ;
-(HUCCPageItemManager *)pageItemManager;
-(void)setServiceGridViewController:(HUCCGridViewController *)arg1 ;
-(void)setActionSetGridViewController:(HUCCGridViewController *)arg1 ;
-(void)setActivePage:(unsigned long long)arg1 ;
-(void)_setupChecksForHomeAppRemoval;
-(void)_unregisterKeybagLockStatusNotifications;
-(HUCCGridViewController *)serviceGridViewController;
-(HUCCGridViewController *)actionSetGridViewController;
-(void)_pageSwitchButtonPressed:(id)arg1 ;
-(void)_homeButtonPressed:(id)arg1 ;
-(void)_updateActivePage;
-(void)_updatePageSwitchButtonHiddenState;
-(unsigned long long)activePage;
-(HUCCGridViewController *)activePageViewController;
-(void)setActivePageViewController:(HUCCGridViewController *)arg1 ;
-(void)_updatePageSwitchButtonText;
-(BOOL)_isAccessAllowedForCurrentLockState;
-(void)setWantsVisible:(BOOL)arg1 ;
-(void)_registerKeybagLockStatusNotifications;
-(void)_updatePageVisibility;
-(int)keybagLockStatusNotifyToken;
-(void)setKeybagLockStatusNotifyToken:(int)arg1 ;
-(void)_updateRegistrationForLockStatusNotification;
-(void)_updateHomeAppRemoved:(BOOL)arg1 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)wantsVisible;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2 ;
@end
