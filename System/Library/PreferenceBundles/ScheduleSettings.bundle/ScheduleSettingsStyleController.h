/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class ACAccount, NSString, NSArray, NSMutableSet;

@interface ScheduleSettingsStyleController : PSListItemsController {

	ACAccount* _account;
	NSString* _mailAccountUniqueId;
	NSArray* _mailboxInfos;
	NSMutableSet* _monitored;
	BOOL _supportsUserPushedMailboxes;
	BOOL _isExchangeAccount;
	BOOL _ignoringNotifications;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)listItemSelected:(id)arg1 ;
-(void)_accountsChanged;
-(id)notAvailableText;
-(BOOL)shouldShowMailboxes;
-(void)reloadFolders;
-(void)_reloadFoldersAndSpecifiersForced:(BOOL)arg1 ;
-(void)_reloadFoldersAndSpecifiers;
-(void)setPushStateForMailbox:(id)arg1 state:(BOOL)arg2 ;
-(id)specifiers;
@end

