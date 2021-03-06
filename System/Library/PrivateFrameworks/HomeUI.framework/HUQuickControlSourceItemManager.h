/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class NSSet, HFStaticItemProvider;

@interface HUQuickControlSourceItemManager : HFItemManager {

	NSSet* _controlItems;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,copy) NSSet * controlItems;                                     //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;              //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(/*^block*/id)_standardReadValidator;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 controlItems:(id)arg3 ;
-(void)setControlItems:(NSSet *)arg1 ;
-(NSSet *)controlItems;
@end

