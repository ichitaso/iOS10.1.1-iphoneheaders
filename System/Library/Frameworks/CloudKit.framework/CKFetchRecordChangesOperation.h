/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	CKRecordZoneID* _recordZoneID;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _fetchRecordChangesCompletionBlock;
	CKServerChangeToken* _resultServerChangeToken;
	NSData* _resultClientChangeTokenData;
	long long _status;
	NSMutableDictionary* _recordErrors;
	/*^block*/id _serverChangeTokenFetchedBlock;
	/*^block*/id _changeTokensUpdatedBlock;

}

@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;                       //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                              //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                       //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                         //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,copy) id serverChangeTokenFetchedBlock;                             //@synthesize serverChangeTokenFetchedBlock=_serverChangeTokenFetchedBlock - In the implementation block
@property (nonatomic,copy) id changeTokensUpdatedBlock;                                  //@synthesize changeTokensUpdatedBlock=_changeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * recordZoneID;                                //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                        //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                               //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,readonly) BOOL moreComing; 
@property (nonatomic,copy) id fetchRecordChangesCompletionBlock;                         //@synthesize fetchRecordChangesCompletionBlock=_fetchRecordChangesCompletionBlock - In the implementation block
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(long long)changeTypesFromSetCallbacks;
-(id)recordWithIDWasDeletedBlock;
-(id)serverChangeTokenFetchedBlock;
-(id)changeTokensUpdatedBlock;
-(void)setServerChangeTokenFetchedBlock:(id)arg1 ;
-(void)setChangeTokensUpdatedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(BOOL)shouldFetchAssetContents;
-(NSData *)resultClientChangeTokenData;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(NSArray *)desiredKeys;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(BOOL)fetchAllChanges;
-(id)fetchRecordChangesCompletionBlock;
-(void)setFetchRecordChangesCompletionBlock:(id)arg1 ;
-(id)recordChangedBlock;
-(id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2 ;
-(BOOL)moreComing;
@end
