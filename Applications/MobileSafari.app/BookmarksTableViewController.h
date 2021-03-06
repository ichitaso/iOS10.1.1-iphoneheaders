/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <SafariServices/_SFPopoverSizingTableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/_SFBookmarkInfoViewControllerDelegate.h>
#import <MobileSafari/BookmarksPanelStateRestoring.h>

@protocol BookmarksTableViewControllerDelegate, LinkPreviewProvider;
@class NSString, WebBookmarkCollection, WebBookmarkList, WebBookmark, UISearchBar;

@interface BookmarksTableViewController : _SFPopoverSizingTableViewController <UISearchBarDelegate, _SFBookmarkInfoViewControllerDelegate, BookmarksPanelStateRestoring> {

	WebBookmarkCollection* _collection;
	WebBookmarkList* _bookmarkList;
	WebBookmark* _favoritesFolder;
	UISearchBar* _searchBar;
	NSString* _userTypedFilter;
	unsigned long long _skipOffset;
	BOOL _needsInitialContentOffsetUpdateForTableHeaderView;
	BOOL _needsContentOffsetUpdate;
	double _restoredScrollPosition;
	WebBookmark* _folder;
	id<BookmarksTableViewControllerDelegate> _delegate;
	id<LinkPreviewProvider> _linkPreviewProvider;

}

@property (nonatomic,readonly) int folderID; 
@property (nonatomic,retain) WebBookmark * folder;                                                  //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic,__weak) id<BookmarksTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<LinkPreviewProvider> linkPreviewProvider;                    //@synthesize linkPreviewProvider=_linkPreviewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * collectionType; 
-(id)bookmarksNavigationController;
-(id<LinkPreviewProvider>)linkPreviewProvider;
-(void)setLinkPreviewProvider:(id<LinkPreviewProvider>)arg1 ;
-(id)currentStateDictionary;
-(BOOL)restoreStateWithDictionary:(id)arg1 ;
-(double)currentScrollPosition;
-(void)restoreScrollPosition:(double)arg1 ;
-(void)reloadBookmarks;
-(id)initWithFolder:(id)arg1 inCollection:(id)arg2 skipOffset:(unsigned)arg3 ;
-(void)updateSeparatorInset;
-(void)_recreateBookmarkLists;
-(BOOL)_inRootFolder;
-(id)bookmarksTableViewCellWithReuseIdentifier:(id)arg1 ;
-(id)_tintedImageNamed:(id)arg1 ;
-(id)_grayedOutFavoriteFolderIcon;
-(id)_collectionForRowAtIndexPath:(id)arg1 ;
-(id)_grayedOutHistoryFolderIcon;
-(id)_bookmarkAtIndexPath:(id)arg1 ;
-(id)_tableViewCellForBookmark:(id)arg1 ;
-(void)_pushInfoViewControllerForBookmark:(id)arg1 ;
-(id)initWithFolder:(id)arg1 inCollection:(id)arg2 ;
-(void)_updateTableViewCellsTextStyleForEditing:(BOOL)arg1 ;
-(void)setScrollViewScrollsToTop:(BOOL)arg1 ;
-(id)selectedBookmarks;
-(void)setDelegate:(id<BookmarksTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<BookmarksTableViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)commitPreviewViewController:(id)arg1 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_updateTitle;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateContentOffsetIfNeeded;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(BOOL)hasTranslucentAppearance;
-(WebBookmark *)folder;
-(void)setFolder:(WebBookmark *)arg1 ;
-(int)folderID;
-(NSString *)collectionType;
@end

