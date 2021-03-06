/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {

	SUButtonAccessoryView* _accessoryView;

}
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_accessoryView;
-(void)reloadForChangedRowCount:(long long)arg1 ;
-(id)newTermsAndConditionsFooter;
-(id)_headerItem;
-(void)_writeAReview:(id)arg1 ;
-(BOOL)_canWriteReview;
-(void)_reloadHeaderView;
@end

