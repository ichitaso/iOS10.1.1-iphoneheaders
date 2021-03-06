/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/MiroMemoryEditorBasePlayerViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MiroMemoryEditorAutoEditCompletionActionDelegate.h>

@protocol MiroMemoryEditorMenuViewControllerDelegate;
@class MiroMemory, UITableView, NSIndexPath, NSString;

@interface MiroMemoryEditorMenuViewController : MiroMemoryEditorBasePlayerViewController <UITableViewDelegate, UITableViewDataSource, MiroMemoryEditorAutoEditCompletionActionDelegate> {

	BOOL _showingActivityIndicatorForContentEditor;
	MiroMemory* _memory;
	id<MiroMemoryEditorMenuViewControllerDelegate> _menuDelegate;
	UITableView* _tableView;
	NSIndexPath* _selectedIndexPath;

}

@property (assign,nonatomic) BOOL showingActivityIndicatorForContentEditor;                                   //@synthesize showingActivityIndicatorForContentEditor=_showingActivityIndicatorForContentEditor - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                                             //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic,__weak) id<MiroMemoryEditorMenuViewControllerDelegate> menuDelegate;              //@synthesize menuDelegate=_menuDelegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                 //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)_updateFonts;
-(void)popFromNavigationController;
-(void)setMenuDelegate:(id<MiroMemoryEditorMenuViewControllerDelegate>)arg1 ;
-(void)cancelAutoEditWaitingBehavior;
-(void)startAutoEditWaitingBehavior;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)performAutoEditDidCompleteAction;
-(id<MiroMemoryEditorMenuViewControllerDelegate>)menuDelegate;
-(void)setShowingActivityIndicatorForContentEditor:(BOOL)arg1 ;
-(id)_normalizedIndexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
-(NSIndexPath *)selectedIndexPath;
-(id)_getTimeStringFromSeconds:(double)arg1 ;
-(BOOL)showingActivityIndicatorForContentEditor;
@end

