/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIViewElement, NSArray, SKUIIndexBarViewElement, SKUINavigationBarViewElement, SKUIToolbarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement {

	NSMutableArray* _collectionElements;
	SKUIViewElement* _collectionHeaderViewElement;
	BOOL _needsStateReset;

}

@property (nonatomic,readonly) NSArray * collectionElements; 
@property (nonatomic,readonly) SKUIViewElement * collectionHeaderViewElement; 
@property (nonatomic,readonly) SKUIIndexBarViewElement * indexBarViewElement; 
@property (nonatomic,readonly) SKUINavigationBarViewElement * navigationBarElement; 
@property (nonatomic,readonly) SKUIToolbarViewElement * toolbarElement; 
@property (nonatomic,readonly) long long numberOfSplits; 
@property (nonatomic,readonly) BOOL needsStateReset;                                             //@synthesize needsStateReset=_needsStateReset - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUINavigationBarViewElement *)navigationBarElement;
-(long long)numberOfSplits;
-(BOOL)needsStateReset;
-(SKUIIndexBarViewElement *)indexBarViewElement;
-(SKUIViewElement *)collectionHeaderViewElement;
-(NSArray *)collectionElements;
-(SKUIToolbarViewElement *)toolbarElement;
@end

