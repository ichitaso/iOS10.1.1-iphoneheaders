/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DownloadPipeline, SSSQLiteDatabase, ExternalDownloadState, DownloadPolicyManager, NSOrderedSet;

@interface DownloadsSession : NSObject {

	DownloadPipeline* _pipeline;
	SSSQLiteDatabase* _database;
	ExternalDownloadState* _externalState;
	DownloadPolicyManager* _policyManager;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) DownloadPipeline * pipeline;                           //@synthesize pipeline=_pipeline - In the implementation block
@property (nonatomic,readonly) DownloadPolicyManager * policyManager;                 //@synthesize policyManager=_policyManager - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * activeDownloadIdentifiers; 
-(id)initWithSessionDescriptor:(id)arg1 ;
-(id)placeholderDownloadForPurchaseIdentifier:(long long)arg1 ;
-(id)externalValuesForDownloadID:(long long)arg1 ;
-(id)newEventDictionaryWithDownloadIdentifier:(long long)arg1 assetIdentifier:(long long)arg2 ;
-(NSOrderedSet *)activeDownloadIdentifiers;
-(id)valueForExternalProperty:(id)arg1 ofAssetID:(long long)arg2 ;
-(id)valueForExternalProperty:(id)arg1 ofDownloadID:(long long)arg2 ;
-(id)downloadForStoreDownload:(id)arg1 ;
-(BOOL)placeholderDownloadCanceledForPurchaseIdentifier:(long long)arg1 ;
-(id)placeholderDownloadForPurchase:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(DownloadPolicyManager *)policyManager;
-(SSSQLiteDatabase *)database;
-(DownloadPipeline *)pipeline;
@end

