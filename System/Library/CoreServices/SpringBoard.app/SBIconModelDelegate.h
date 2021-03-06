/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconModelDelegate <NSObject>
@optional
-(void)willUnarchiveIconModel:(id)arg1 withMetadata:(id)arg2;
-(BOOL)canSaveIconState:(id)arg1;
-(void)didSaveIconState:(id)arg1;
-(void)didDeleteIconState:(id)arg1;

@required
-(unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
-(unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
-(unsigned long long)maxIconCountForDock;
-(unsigned long long)maxListCountForFolders;
-(unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
-(BOOL)supportsDock;
-(BOOL)canAddWebClip:(id)arg1;
-(BOOL)canAddDownloadingIconForApplication:(id)arg1;
-(id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
-(id)placeholdersByDisplayIDForIconModel:(id)arg1;
-(id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3;

@end

