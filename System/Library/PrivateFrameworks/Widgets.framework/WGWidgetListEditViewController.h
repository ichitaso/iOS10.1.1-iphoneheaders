/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate;
@class UINavigationController, UITableViewController, NSMutableArray, NSArray, NSString;

@interface WGWidgetListEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UINavigationController* _navigationController;
	UITableViewController* _tableViewController;
	NSMutableArray* _enabledTodayItemIDs;
	NSMutableArray* _enabledWidgetItemIDs;
	NSMutableArray* _disabledItemIDs;
	NSArray* _groupIDs;
	double _contentMinY;
	BOOL _dismissingDueToInterfaceAction;
	id<WGWidgetListEditViewControllerDataSource> _dataSource;
	id<WGWidgetListEditViewControllerDelegate> _delegate;

}

@property (assign,setter=_setDismissingDueToInterfaceAction:,getter=_isDismissingDueToInterfaceAction,nonatomic) BOOL dismissingDueToInterfaceAction;              //@synthesize dismissingDueToInterfaceAction=_dismissingDueToInterfaceAction - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListEditViewControllerDataSource> dataSource;                                                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListEditViewControllerDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<WGWidgetListEditViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<WGWidgetListEditViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<WGWidgetListEditViewControllerDataSource>)dataSource;
-(id<WGWidgetListEditViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(long long)_layoutMode;
-(void)_cancelWidgetListEditView;
-(void)_dismissWidgetListEditView;
-(void)_loadItems;
-(void)_acknowledgeItemsSavingItemState:(BOOL)arg1 ;
-(id)_itemIdentifierForIndexPath:(id)arg1 ;
-(BOOL)_isNewItem:(id)arg1 ;
-(long long)_indexOfFirstEnabledWidgetInSection:(unsigned long long)arg1 ;
-(long long)_indexOfLastEnabledWidgetInSection:(unsigned long long)arg1 ;
-(unsigned long long)_indexForInsertingItemWithIdentifier:(id)arg1 intoArray:(id)arg2 ;
-(id)_itemIdentifiersInSection:(unsigned long long)arg1 ;
-(void)_enableItemAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_disableItemAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(id)_widgetListEditViewTableHeaderView;
-(void)_saveItemState;
-(void)_saveItemArrangement;
-(void)_acknowledgeItemsAndResetNewWidgetsCount;
-(void)_setDismissingDueToInterfaceAction:(BOOL)arg1 ;
-(void)_dismissDueToInterfaceActionAndAcknowledgeItemsSavingItemState:(BOOL)arg1 ;
-(id)_enabledItemIdentifiersForGroupID:(id)arg1 ;
-(long long)_compareItemWithIdentifier:(id)arg1 andItemWithIdentifierConsideringIsNew:(id)arg2 ;
-(unsigned long long)_sectionIndexForGroupKey:(id)arg1 ;
-(id)_groupKeyForSectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isDismissingDueToInterfaceAction;
@end
