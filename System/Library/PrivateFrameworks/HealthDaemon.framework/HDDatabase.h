/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSQLiteDatabasePoolDelegate.h>
#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDatabase.h>
#import <libobjc.A.dylib/HDSQLiteDatabaseDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class HDDatabaseJournal, HDProfile, NSString, HDContentProtectionManager, NSLock, NSConditionLock, NSMutableSet, NSHashTable, NSOperationQueue, NSObject, NSMutableArray, NSMutableDictionary, HDSQLiteDatabasePool;

@interface HDDatabase : NSObject <HDSQLiteDatabasePoolDelegate, HDContentProtectionObserver, HDDiagnosticObject, HDHealthDatabase, HDSQLiteDatabaseDelegate> {

	shared_ptr<health::DataStore>* _highFrequencyDataStore;
	BOOL _shouldNotifyFirstUnlockObservers;
	BOOL _isObservingContentProtection;
	BOOL _checkpointRequired;
	BOOL _hasScheduledCheckpoint;
	BOOL _integrityCheckInProgress;
	BOOL _didRunPostMigrationUpdates;
	int _invalidated;
	HDDatabaseJournal* _journal;
	HDProfile* _profile;
	double _offsetTimeInterval;
	NSString* _homeDirectoryPath;
	HDContentProtectionManager* _contentProtectionManager;
	NSString* _threadLocalActiveConnectionKey;
	NSLock* _schemaMigrationLock;
	NSConditionLock* _activeDatabasesLock;
	NSMutableSet* _activeDatabases;
	NSHashTable* _migratedDatabases;
	NSOperationQueue* _asynchronousOperationQueue;
	NSObject*<OS_dispatch_queue> _protectedDataQueue;
	NSMutableArray* _firstUnlockBlocks;
	long long _protectedDataState;
	long long _observedContentProtectionState;
	NSObject*<OS_dispatch_queue> _protectedDataObserverQueue;
	NSObject*<OS_dispatch_queue> _protectedDataObserverNotificationQueue;
	NSHashTable* _protectedDataObservers;
	NSObject*<OS_dispatch_queue> _journalQueue;
	NSObject*<OS_dispatch_group> _journalGroup;
	unsigned long long _pendingJournalMerges;
	NSObject*<OS_dispatch_queue> _hfdQueue;
	NSMutableDictionary* _extendedTransactions;
	HDSQLiteDatabasePool* _databasePool;

}

@property (nonatomic,copy) NSString * homeDirectoryPath;                                                                           //@synthesize homeDirectoryPath=_homeDirectoryPath - In the implementation block
@property (nonatomic,retain) HDContentProtectionManager * contentProtectionManager;                                                //@synthesize contentProtectionManager=_contentProtectionManager - In the implementation block
@property (nonatomic,retain) NSString * threadLocalActiveConnectionKey;                                                            //@synthesize threadLocalActiveConnectionKey=_threadLocalActiveConnectionKey - In the implementation block
@property (nonatomic,retain) NSLock * schemaMigrationLock;                                                                         //@synthesize schemaMigrationLock=_schemaMigrationLock - In the implementation block
@property (nonatomic,retain) NSConditionLock * activeDatabasesLock;                                                                //@synthesize activeDatabasesLock=_activeDatabasesLock - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeDatabases;                                                                       //@synthesize activeDatabases=_activeDatabases - In the implementation block
@property (nonatomic,retain) NSHashTable * migratedDatabases;                                                                      //@synthesize migratedDatabases=_migratedDatabases - In the implementation block
@property (nonatomic,retain) NSOperationQueue * asynchronousOperationQueue;                                                        //@synthesize asynchronousOperationQueue=_asynchronousOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> protectedDataQueue;                                                      //@synthesize protectedDataQueue=_protectedDataQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * firstUnlockBlocks;                                                                   //@synthesize firstUnlockBlocks=_firstUnlockBlocks - In the implementation block
@property (assign,nonatomic) long long protectedDataState;                                                                         //@synthesize protectedDataState=_protectedDataState - In the implementation block
@property (assign,nonatomic) long long observedContentProtectionState;                                                             //@synthesize observedContentProtectionState=_observedContentProtectionState - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyFirstUnlockObservers;                                                                //@synthesize shouldNotifyFirstUnlockObservers=_shouldNotifyFirstUnlockObservers - In the implementation block
@property (assign,nonatomic) BOOL isObservingContentProtection;                                                                    //@synthesize isObservingContentProtection=_isObservingContentProtection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> protectedDataObserverQueue;                                              //@synthesize protectedDataObserverQueue=_protectedDataObserverQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> protectedDataObserverNotificationQueue;                                  //@synthesize protectedDataObserverNotificationQueue=_protectedDataObserverNotificationQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * protectedDataObservers;                                                                 //@synthesize protectedDataObservers=_protectedDataObservers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> journalQueue;                                                            //@synthesize journalQueue=_journalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> journalGroup;                                                            //@synthesize journalGroup=_journalGroup - In the implementation block
@property (assign,nonatomic) unsigned long long pendingJournalMerges;                                                              //@synthesize pendingJournalMerges=_pendingJournalMerges - In the implementation block
@property (assign,nonatomic) int invalidated;                                                                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> hfdQueue;                                                                //@synthesize hfdQueue=_hfdQueue - In the implementation block
@property (assign,nonatomic) BOOL checkpointRequired;                                                                              //@synthesize checkpointRequired=_checkpointRequired - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledCheckpoint;                                                                          //@synthesize hasScheduledCheckpoint=_hasScheduledCheckpoint - In the implementation block
@property (assign,nonatomic) BOOL integrityCheckInProgress;                                                                        //@synthesize integrityCheckInProgress=_integrityCheckInProgress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extendedTransactions;                                                           //@synthesize extendedTransactions=_extendedTransactions - In the implementation block
@property (assign,nonatomic) BOOL didRunPostMigrationUpdates;                                                                      //@synthesize didRunPostMigrationUpdates=_didRunPostMigrationUpdates - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabasePool * databasePool;                                                                //@synthesize databasePool=_databasePool - In the implementation block
@property (nonatomic,readonly) HDDatabaseJournal * journal;                                                                        //@synthesize journal=_journal - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                                                           //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) double offsetTimeInterval;                                                                            //@synthesize offsetTimeInterval=_offsetTimeInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDataProtectedByFirstUnlockAvailable,nonatomic,readonly) BOOL dataProtectedByFirstUnlockAvailable; 
@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
+(id)allEntityClassesWithProtectionClass:(long long)arg1 ;
+(long long)currentSchemaVersionForProtectedDatabase:(BOOL)arg1 ;
+(BOOL)shouldEnableFutureMigrations;
+(id)allEntityClasses;
+(void)loadEntityClasses;
+(id)_databaseCorruptionDefaultKeyForDatabaseWithName:(id)arg1 ;
+(void)reportDatabaseCorruptionForDatabaseWithName:(id)arg1 ;
+(void)didEncounterUncorruptedDatabaseWithName:(id)arg1 ;
+(void)reportIntegrityCheckFailure;
+(void)didPassIntegrityCheck;
-(BOOL)isProtectedDataAvailable;
-(id)virtualFilesystemModuleForDatabase:(id)arg1 ;
-(BOOL)checkpointRequired;
-(void)setCheckpointRequired:(BOOL)arg1 ;
-(BOOL)addJournalEntries:(id)arg1 error:(id*)arg2 ;
-(HDProfile *)profile;
-(void)performWhenDataProtectedByFirstUnlockIsAvailable:(/*^block*/id)arg1 ;
-(id)highFrequencyDataStoreURL;
-(BOOL)accessHighFrequencyDataStoreWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(void)removeProtectedDataObserver:(id)arg1 ;
-(void)addProtectedDataObserver:(id)arg1 ;
-(HDContentProtectionManager *)contentProtectionManager;
-(id)diagnosticDescription;
-(void)setProfile:(HDProfile *)arg1 ;
-(BOOL)addJournalEntry:(id)arg1 error:(id*)arg2 ;
-(long long)_migrateOrCreateSchemaWithDatabase:(id)arg1 protectedDatabase:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(id)_databaseNameForProtectedDatabase:(BOOL)arg1 ;
-(long long)_migrateDatabase:(id)arg1 fromUserVersion:(long long)arg2 protectedDatabase:(BOOL)arg3 error:(id*)arg4 ;
-(long long)_createEntitiesInDatabase:(id)arg1 protectedEntities:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 error:(id*)arg3 ;
-(double)offsetTimeInterval;
-(BOOL)didRunPostMigrationUpdates;
-(BOOL)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)setDidRunPostMigrationUpdates:(BOOL)arg1 ;
-(long long)migrateOrCreateSchemaInDatabase:(id)arg1 protectedDatabaseAvailable:(BOOL)arg2 error:(id*)arg3 ;
-(void)beginObservingContentProtection;
-(void)invalidateAndWait;
-(void)invalidateAndObliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(NSString *)homeDirectoryPath;
-(void)setOffsetTimeInterval:(double)arg1 ;
-(id)_journalDirectoryPath;
-(id)mainDatabaseURL;
-(void)_enableIncrementalAutoVacuumForDatabaseAtURL:(id)arg1 ;
-(id)protectedDatabaseURL;
-(void)_reportDatabaseSizes;
-(long long)_fileSizeForURL:(id)arg1 error:(id*)arg2 ;
-(id)_URLForWALForDatabaseAtURL:(id)arg1 ;
-(long long)_protectedDataState;
-(BOOL)_canAttachProtectedDatabaseWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_isDatabaseValidWithError:(id*)arg1 ;
-(id)_writerDatabaseWithError:(id*)arg1 ;
-(id)_highPriorityReaderDatabaseWithError:(id*)arg1 ;
-(id)_readerDatabaseWithError:(id*)arg1 ;
-(void)_setActiveDatabase:(id)arg1 ;
-(BOOL)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_activeDatabase;
-(id)_databaseForOptions:(unsigned long long)arg1 outerDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)performTransactionWithOptions:(unsigned long long)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
-(id)_createDatabaseConnectionWithURL:(id)arg1 ;
-(id)_createDatabaseConnection;
-(long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id*)arg2 ;
-(BOOL)performMigrationForOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_newDatabaseConnectionWithError:(id*)arg1 ;
-(void)_protectedDataQueue_beginObservingContentProtection;
-(void)_protectedDataQueue_mergeJournalAsynchronously;
-(void)_performIntegrityCheck;
-(BOOL)performJournalMergeUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_journalQueue_performJournalMergeAndCleanup;
-(void)_protectedDatabaseDidBecomeAvailable;
-(id)_copyProtectedDataObservers;
-(void)_protectedDataObserverQueue_addObserver:(id)arg1 ;
-(void)_protectedDataObserverQueue_removeObserver:(id)arg1 ;
-(shared_ptr<health::DataStore>*)_highFrequencyDataStoreWithError:(id*)arg1 ;
-(id)databaseSizeInBytesExcludingHFD;
-(id)HFDSizeInBytes;
-(void)_invalidateAndWaitWithHandler:(/*^block*/id)arg1 ;
-(id)newDatabaseForDatabasePool:(id)arg1 error:(id*)arg2 ;
-(void)databasePool:(id)arg1 didFlushDatabases:(id)arg2 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(void)performAsynchronously:(/*^block*/id)arg1 ;
-(id)beginExtendedTransactionWithOptions:(unsigned long long)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id*)arg4 ;
-(id)extendedDatabaseTransactionForIdentifier:(id)arg1 ;
-(void)finalizeExtendedTransactionForIdentifier:(id)arg1 ;
-(BOOL)isDataProtectedByFirstUnlockAvailable;
-(id)initWithHomeDirectoryPath:(id)arg1 profile:(id)arg2 ;
-(id)dumpSchemaAndReturnError:(id*)arg1 ;
-(BOOL)discardHighFrequencyDataStoreWithError:(id*)arg1 ;
-(HDDatabaseJournal *)journal;
-(void)setHomeDirectoryPath:(NSString *)arg1 ;
-(void)setContentProtectionManager:(HDContentProtectionManager *)arg1 ;
-(NSString *)threadLocalActiveConnectionKey;
-(void)setThreadLocalActiveConnectionKey:(NSString *)arg1 ;
-(NSLock *)schemaMigrationLock;
-(void)setSchemaMigrationLock:(NSLock *)arg1 ;
-(NSConditionLock *)activeDatabasesLock;
-(void)setActiveDatabasesLock:(NSConditionLock *)arg1 ;
-(NSMutableSet *)activeDatabases;
-(void)setActiveDatabases:(NSMutableSet *)arg1 ;
-(NSHashTable *)migratedDatabases;
-(void)setMigratedDatabases:(NSHashTable *)arg1 ;
-(NSOperationQueue *)asynchronousOperationQueue;
-(void)setAsynchronousOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)protectedDataQueue;
-(void)setProtectedDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)firstUnlockBlocks;
-(void)setFirstUnlockBlocks:(NSMutableArray *)arg1 ;
-(long long)protectedDataState;
-(void)setProtectedDataState:(long long)arg1 ;
-(long long)observedContentProtectionState;
-(void)setObservedContentProtectionState:(long long)arg1 ;
-(BOOL)shouldNotifyFirstUnlockObservers;
-(void)setShouldNotifyFirstUnlockObservers:(BOOL)arg1 ;
-(BOOL)isObservingContentProtection;
-(void)setIsObservingContentProtection:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)protectedDataObserverQueue;
-(void)setProtectedDataObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)protectedDataObserverNotificationQueue;
-(void)setProtectedDataObserverNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)protectedDataObservers;
-(void)setProtectedDataObservers:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)journalQueue;
-(void)setJournalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)journalGroup;
-(void)setJournalGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(unsigned long long)pendingJournalMerges;
-(void)setPendingJournalMerges:(unsigned long long)arg1 ;
-(int)invalidated;
-(void)setInvalidated:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)hfdQueue;
-(void)setHfdQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasScheduledCheckpoint;
-(void)setHasScheduledCheckpoint:(BOOL)arg1 ;
-(BOOL)integrityCheckInProgress;
-(void)setIntegrityCheckInProgress:(BOOL)arg1 ;
-(NSMutableDictionary *)extendedTransactions;
-(void)setExtendedTransactions:(NSMutableDictionary *)arg1 ;
-(HDSQLiteDatabasePool *)databasePool;
@end

