/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation {

	NSArray* _emailAddresses;
	NSArray* _userRecordIDs;
	/*^block*/id _discoverUserInfosCompletionBlock;
	NSMutableDictionary* _emailsToUserInfos;
	NSMutableDictionary* _userRecordIDsToUserInfos;

}

@property (nonatomic,retain) NSMutableDictionary * emailsToUserInfos;                     //@synthesize emailsToUserInfos=_emailsToUserInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userRecordIDsToUserInfos;              //@synthesize userRecordIDsToUserInfos=_userRecordIDsToUserInfos - In the implementation block
@property (nonatomic,copy) NSArray * emailAddresses;                                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * userRecordIDs;                                       //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (nonatomic,copy) id discoverUserInfosCompletionBlock;                           //@synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2 ;
-(void)setDiscoverUserInfosCompletionBlock:(id)arg1 ;
-(NSArray *)userRecordIDs;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(id)discoverUserInfosCompletionBlock;
-(NSMutableDictionary *)emailsToUserInfos;
-(NSMutableDictionary *)userRecordIDsToUserInfos;
-(void)setEmailsToUserInfos:(NSMutableDictionary *)arg1 ;
-(void)setUserRecordIDsToUserInfos:(NSMutableDictionary *)arg1 ;
-(void)setLongLived:(BOOL)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationInfoClass;
-(NSArray *)emailAddresses;
@end

