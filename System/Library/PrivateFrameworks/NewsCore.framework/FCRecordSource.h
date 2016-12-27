/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCacheCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCFetchCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@class FCCKDatabase, FCKeyValueStore, FCCacheCoordinator, FCFetchCoordinator, FCThreadSafeMutableDictionary, NSArray, NSString;

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCFetchCoordinatorDelegate, FCCacheFlushing> {

	FCCKDatabase* _contentDatabase;
	FCKeyValueStore* _localStore;
	FCCacheCoordinator* _cacheCoordinator;
	FCFetchCoordinator* _fetchCoordinator;
	FCThreadSafeMutableDictionary* _fetchErrorsByKey;

}

@property (nonatomic,readonly) FCCKDatabase * contentDatabase;                                //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * localStore;                                  //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) FCCacheCoordinator * cacheCoordinator;                         //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (nonatomic,readonly) FCFetchCoordinator * fetchCoordinator;                         //@synthesize fetchCoordinator=_fetchCoordinator - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * fetchErrorsByKey;              //@synthesize fetchErrorsByKey=_fetchErrorsByKey - In the implementation block
@property (nonatomic,readonly) NSArray * desiredKeys; 
@property (nonatomic,readonly) NSArray * genericKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordType;
+(id)storeFilename;
+(unsigned long long)storeVersion;
+(unsigned long long)lowThresholdDataSizeLimit;
+(unsigned long long)highThresholdDataSizeLimit;
+(BOOL)supportsDeletions;
+(id)canaryRecordName;
+(id)identifierFromCKRecord:(id)arg1 ;
+(id)changeTagFromCKRecord:(id)arg1 ;
+(id)modificationDateFromCKRecord:(id)arg1 ;
+(unsigned long long)defaultFetchOperationCachePolicy;
+(double)defaultFetchOperationMaximumCachedAge;
-(id)init;
-(FCKeyValueStore *)localStore;
-(NSArray *)desiredKeys;
-(FCCKDatabase *)contentDatabase;
-(id)fetchOperationForRecordsWithIDs:(id)arg1 ;
-(id)_desiredKeysForContentStoreFrontID:(id)arg1 ;
-(id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 ;
-(NSArray *)genericKeys;
-(id)localizableKeys;
-(FCCacheCoordinator *)cacheCoordinator;
-(id)_saveCKRecordsWithWriteLock:(id)arg1 fetchContext:(id)arg2 ;
-(FCThreadSafeMutableDictionary *)fetchErrorsByKey;
-(id)_faultableRecordsWithIdentifiers:(id)arg1 ;
-(id)_ckRecordIDFromIdentifier:(id)arg1 ;
-(id)_identifierFromCKRecordID:(id)arg1 ;
-(id)saveRecords:(id)arg1 ;
-(id)_recordBaseFromCKRecord:(id)arg1 ;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 context:(id)arg3 ;
-(id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 ;
-(void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 ;
-(id)_desiredKeysWithCacheDictionary:(id)arg1 ;
-(id)_localizedKeysByOriginalWithCacheDictionary:(id)arg1 ;
-(id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2 ;
-(id)cachedRecordsWithIDs:(id)arg1 ;
-(id)_fetchErrorForKey:(id)arg1 ;
-(FCFetchCoordinator *)fetchCoordinator;
@end
