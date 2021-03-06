/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/RecentsItem.h>

@class SearchResult, NSString;

@interface CustomSearchResultHistoryItem : NSObject <RecentsItem> {

	SearchResult* _customSearchResult;

}

@property (nonatomic,readonly) SearchResult * customSearchResult;              //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SearchResult *)customSearchResult;
-(BOOL)isEqual:(id)arg1 ;
-(double)timestamp;
-(id)initWithSearchResult:(id)arg1 ;
@end

