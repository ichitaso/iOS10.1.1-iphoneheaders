/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, SKUIClientContext;

@interface SKUISettingsContext : NSObject {

	NSMutableDictionary* _elementTypeClass;
	NSMutableArray* _descriptionReusePool;
	NSMutableArray* _viewReusePool;
	SKUIClientContext* _clientContext;

}

@property (assign,nonatomic,__weak) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithClientContext:(id)arg1 ;
-(id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2 ;
-(void)recycleSettingDescriptions:(id)arg1 ;
-(void)_registerReuseClasses;
-(id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3 ;
-(void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2 ;
@end

