/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@class NSMapTable;

@interface HUCollectionViewController : UICollectionViewController {

	NSMapTable* _installedChildViewControllersKeyedByCell;

}

@property (nonatomic,retain) NSMapTable * installedChildViewControllersKeyedByCell;              //@synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell - In the implementation block
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(NSMapTable *)installedChildViewControllersKeyedByCell;
-(void)setInstalledChildViewControllersKeyedByCell:(NSMapTable *)arg1 ;
@end
