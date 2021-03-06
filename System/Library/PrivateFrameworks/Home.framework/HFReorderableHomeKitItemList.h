/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol HMApplicationData;
@class NSString, NSArray;

@interface HFReorderableHomeKitItemList : NSObject <NSCopying, NSMutableCopying> {

	id<HMApplicationData> _applicationDataContainer;
	NSString* _category;
	NSArray* _sortedHomeKitObjectIdentifiers;

}

@property (nonatomic,readonly) NSString * _applicationDataKey; 
@property (nonatomic,copy) NSArray * sortedHomeKitObjectIdentifiers;                               //@synthesize sortedHomeKitObjectIdentifiers=_sortedHomeKitObjectIdentifiers - In the implementation block
@property (nonatomic,__weak,readonly) id<HMApplicationData> applicationDataContainer;              //@synthesize applicationDataContainer=_applicationDataContainer - In the implementation block
@property (nonatomic,readonly) NSString * category;                                                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) id sortedHomeKitItemComparator; 
@property (nonatomic,readonly) id sortedHomeKitObjectComparator; 
+(id)_dataForHomeKitItem:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2 ;
-(NSString *)_applicationDataKey;
-(id<HMApplicationData>)applicationDataContainer;
-(NSArray *)sortedHomeKitObjectIdentifiers;
-(void)setSortedHomeKitObjectIdentifiers:(NSArray *)arg1 ;
-(/*^block*/id)_homeKitItemDataComparator;
-(/*^block*/id)_sortedHomeKitIdentifierComparator;
-(/*^block*/id)_actionSetTypeComparator;
-(/*^block*/id)_reorderableObjectDateAddedComparator;
-(/*^block*/id)_reorderableObjectTitleComparator;
-(id)sortedHomeKitItemComparator;
-(id)sortedHomeKitObjectComparator;
@end

