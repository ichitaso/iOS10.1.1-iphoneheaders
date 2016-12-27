/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@interface CKFetchUserQuotaOperation : CKDatabaseOperation {

	/*^block*/id _fetchUserQuotaCompletionBlock;
	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;              //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (nonatomic,copy) id fetchUserQuotaCompletionBlock;                 //@synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock - In the implementation block
-(id)init;
-(BOOL)hasCKOperationCallbacksSet;
-(void)performCKOperation;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchUserQuotaCompletionBlock;
-(void)setFetchUserQuotaCompletionBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(unsigned long long)quotaAvailable;
@end
