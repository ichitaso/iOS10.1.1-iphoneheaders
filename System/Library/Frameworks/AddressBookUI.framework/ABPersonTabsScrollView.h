/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol ABPersonTabsScrollView <NSObject>
@property (assign,nonatomic) double minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) id<ABPersonTabsLayoutManager> tabsLayoutManager; 
@required
-(void)setBackgroundView:(id)arg1;
-(UIView *)backgroundView;
-(void)setMinimumBottomInset:(double)arg1;
-(id<ABPersonTabsLayoutManager>)tabsLayoutManager;
-(void)setTabsLayoutManager:(id)arg1;
-(double)minimumBottomInset;

@end

