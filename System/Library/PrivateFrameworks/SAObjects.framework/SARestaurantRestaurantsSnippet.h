/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISirilandSnippet.h>

@class NSArray, NSDictionary;

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (nonatomic,copy) NSArray * attributionOrder; 
@property (nonatomic,copy) NSArray * contributingProviderIds; 
@property (nonatomic,copy) NSDictionary * providerPunchOutMap; 
@property (nonatomic,copy) NSArray * restaurants; 
+(id)restaurantsSnippet;
+(id)restaurantsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siri_restaurants_getNavigationPathRestaurant:(id*)arg1 andType:(long long*)arg2 ;
-(id)siri_restaurants_navigationPathForRestaurantAtIndex:(long long)arg1 type:(long long)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)attributionOrder;
-(void)setAttributionOrder:(NSArray *)arg1 ;
-(NSArray *)contributingProviderIds;
-(void)setContributingProviderIds:(NSArray *)arg1 ;
-(NSDictionary *)providerPunchOutMap;
-(void)setProviderPunchOutMap:(NSDictionary *)arg1 ;
-(NSArray *)restaurants;
-(void)setRestaurants:(NSArray *)arg1 ;
@end

