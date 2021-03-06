/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRNonLocalVersionSending.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol BRNonLocalVersionReceiving;
@class BRCItemID, BRCStatInfo, NSString, BRCXPCClient, BRCServerZone, BRCAppLibrary, CKRecordID, NSURL;

@interface BRCNonLocalVersionsSender : _BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass> {

	id<BRNonLocalVersionReceiving> _receiver;
	BRCItemID* _itemID;
	BRCStatInfo* _st;
	NSString* _currentEtag;
	NSString* _storagePathPrefix;
	NSObject* _storage;
	BRCXPCClient* _client;
	BRCServerZone* _serverZone;
	BRCAppLibrary* _appLibrary;
	CKRecordID* _recordID;
	/*^block*/id _reply;
	BOOL _includeCachedVersions;
	NSURL* _logicalURL;
	NSURL* _physicalURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * logicalURL;                    //@synthesize logicalURL=_logicalURL - In the implementation block
@property (nonatomic,readonly) NSURL * physicalURL;                   //@synthesize physicalURL=_physicalURL - In the implementation block
@property (assign,nonatomic) BOOL includeCachedVersions;              //@synthesize includeCachedVersions=_includeCachedVersions - In the implementation block
+(id)senderWithLookup:(id)arg1 client:(id)arg2 XPCReceiver:(id)arg3 error:(id*)arg4 ;
-(NSURL *)logicalURL;
-(NSURL *)physicalURL;
-(void)setIncludeCachedVersions:(BOOL)arg1 ;
-(oneway void)invalidate;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithDocument:(id)arg1 serverItem:(id)arg2 relpath:(id)arg3 logicalURL:(id)arg4 client:(id)arg5 XPCReceiver:(id)arg6 error:(id*)arg7 ;
-(id)_fetchThumbnailOperationForVersionRecord:(id)arg1 physicalURL:(id)arg2 ;
-(id)_depsTrackingOperation;
-(id)_fetchVersionsOperationWithDepsOp:(id)arg1 ;
-(BOOL)includeCachedVersions;
-(void)listNonLocalVersionsWithReply:(/*^block*/id)arg1 ;
@end

