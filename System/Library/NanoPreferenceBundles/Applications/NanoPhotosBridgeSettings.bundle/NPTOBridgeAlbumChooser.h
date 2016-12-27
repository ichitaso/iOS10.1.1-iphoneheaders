/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PUAlbumListViewController.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class NSMutableArray, PHFetchResult, PHAssetCollection, UIViewController, PSRootController, PSSpecifier, NSString;

@interface NPTOBridgeAlbumChooser : PUAlbumListViewController <PHPhotoLibraryChangeObserver, PSController> {

	NSMutableArray* _allAlbums;
	id _syncedAlbumIdentifierPreferenceObserver;
	PHFetchResult* _albums;
	PHFetchResult* _favoritesFetch;
	PHAssetCollection* _favorites;
	PHFetchResult* _userLibraryFetch;
	PHAssetCollection* _userLibrary;
	PHFetchResult* _recentsFetch;
	PHAssetCollection* _recents;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

}

@property (nonatomic,retain) PHFetchResult * albums;                                        //@synthesize albums=_albums - In the implementation block
@property (nonatomic,retain) PHFetchResult * favoritesFetch;                                //@synthesize favoritesFetch=_favoritesFetch - In the implementation block
@property (nonatomic,retain) PHAssetCollection * favorites;                                 //@synthesize favorites=_favorites - In the implementation block
@property (nonatomic,retain) PHFetchResult * userLibraryFetch;                              //@synthesize userLibraryFetch=_userLibraryFetch - In the implementation block
@property (nonatomic,retain) PHAssetCollection * userLibrary;                               //@synthesize userLibrary=_userLibrary - In the implementation block
@property (nonatomic,retain) PHFetchResult * recentsFetch;                                  //@synthesize recentsFetch=_recentsFetch - In the implementation block
@property (nonatomic,retain) PHAssetCollection * recents;                                   //@synthesize recents=_recents - In the implementation block
@property (assign,nonatomic) UIViewController*<PSController> parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                             //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                       //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_syncedAlbumIdentifierPreferenceChanged;
-(PHFetchResult *)userLibraryFetch;
-(void)setRecentsFetch:(PHFetchResult *)arg1 ;
-(void)setUserLibrary:(PHAssetCollection *)arg1 ;
-(PHFetchResult *)recentsFetch;
-(void)setUserLibraryFetch:(PHFetchResult *)arg1 ;
-(PHAssetCollection *)userLibrary;
-(PHFetchResult *)favoritesFetch;
-(void)setFavoritesFetch:(PHFetchResult *)arg1 ;
-(PSSpecifier *)specifier;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(PHAssetCollection *)recents;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setRecents:(PHAssetCollection *)arg1 ;
-(void)_reloadData;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSRootController *)rootController;
-(void)setRootController:(PSRootController *)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)setFavorites:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)favorites;
-(void)setAlbums:(PHFetchResult *)arg1 ;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(PHFetchResult *)albums;
-(BOOL)shouldShowAllPhotosItem;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)_shouldShowAggregateItem;
-(BOOL)showAddNewAlbumPlaceholder;
-(BOOL)canBeShownFromSuspendedState;
@end
