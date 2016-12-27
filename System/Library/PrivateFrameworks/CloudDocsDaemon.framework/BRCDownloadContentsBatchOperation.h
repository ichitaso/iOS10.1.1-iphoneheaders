/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@interface BRCDownloadContentsBatchOperation : BRCTransferBatchOperation {

	/*^block*/id _perDownloadCompletionBlock;

}

@property (copy) id perDownloadCompletionBlock;              //@synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg1 ;
-(void)setPerDownloadCompletionBlock:(id)arg1 ;
-(void)addDownload:(id)arg1 ;
-(void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
-(id)perDownloadCompletionBlock;
-(id)transferredObjectsPrettyName;
@end
