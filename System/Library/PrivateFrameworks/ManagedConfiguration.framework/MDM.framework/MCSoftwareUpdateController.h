/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCSoftwareUpdateManagerDelegate.h>
#import <libobjc.A.dylib/SUNetworkObserver.h>
#import <libobjc.A.dylib/MCSoftwareUpdateManagerDelegate.h>

@class NSError, MCSoftwareUpdateManager, MCSoftwareUpdateInternalOptions, MCSoftwareUpdateInfo, MCSoftwareUpdateStatus, MCSoftwareUpdateActionResult, NSString;

@interface MCSoftwareUpdateController : NSObject <MCSoftwareUpdateManagerDelegate, SUNetworkObserver, MCSoftwareUpdateManagerDelegate> {

	NSError* _suError;
	int _networkType;
	unsigned long long _downloadAttemptsRemaining;
	unsigned long long _installAttemptsRemaining;
	BOOL _isNewDownload;
	MCSoftwareUpdateManager* _manager;
	MCSoftwareUpdateInternalOptions* _options;
	/*^block*/id _ack;
	MCSoftwareUpdateInfo* _updateInfo;
	MCSoftwareUpdateStatus* _updateStatus;
	MCSoftwareUpdateActionResult* _updateActionResult;

}

@property (nonatomic,retain) MCSoftwareUpdateManager * manager;                              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) MCSoftwareUpdateInternalOptions * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id ack;                                                           //@synthesize ack=_ack - In the implementation block
@property (nonatomic,retain) MCSoftwareUpdateInfo * updateInfo;                              //@synthesize updateInfo=_updateInfo - In the implementation block
@property (nonatomic,retain) MCSoftwareUpdateStatus * updateStatus;                          //@synthesize updateStatus=_updateStatus - In the implementation block
@property (nonatomic,retain) MCSoftwareUpdateActionResult * updateActionResult;              //@synthesize updateActionResult=_updateActionResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(void)reset;
-(MCSoftwareUpdateInternalOptions *)options;
-(void)setOptions:(MCSoftwareUpdateInternalOptions *)arg1 ;
-(void)updateState;
-(void)handleError:(id)arg1 ;
-(void)setAck:(id)arg1 ;
-(id)ack;
-(MCSoftwareUpdateInfo *)updateInfo;
-(void)setUpdateInfo:(MCSoftwareUpdateInfo *)arg1 ;
-(void)download:(id)arg1 ;
-(void)refreshState;
-(void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4 ;
-(void)setSUError:(id)arg1 ;
-(void)install:(id)arg1 ;
-(void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3 ;
-(void)manager:(id)arg1 installFailedWithError:(id)arg2 ;
-(void)handleDownloadError:(id)arg1 ;
-(void)handleScanError:(id)arg1 ;
-(BOOL)_SUDownloadPhaseIsQueued:(id)arg1 ;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(MCSoftwareUpdateManager *)manager;
-(void)setManager:(MCSoftwareUpdateManager *)arg1 ;
-(void)manager:(id)arg1 downloadProgressChanged:(id)arg2 ;
-(void)setUpdateStatus:(MCSoftwareUpdateStatus *)arg1 ;
-(void)setUpdateActionResult:(MCSoftwareUpdateActionResult *)arg1 ;
-(void)_beginOSUpdateWithOptions:(id)arg1 acknowledge:(/*^block*/id)arg2 ;
-(MCSoftwareUpdateStatus *)updateStatus;
-(MCSoftwareUpdateActionResult *)updateActionResult;
-(int)errorCodeForNewRequest;
-(id)errorForErrorCode:(int)arg1 ;
-(int)errorCodeForOldRequest;
-(void)_respondWithErrorCode:(int)arg1 reset:(BOOL)arg2 ;
-(id)updateInfoForSUDescriptor:(id)arg1 ;
-(int)updateActionForState:(int)arg1 ;
-(id)susCurrentLanguage;
-(void)_respondWithSuccessAndReset:(BOOL)arg1 ;
-(void)_possiblyRespondWithDownloadProgress:(id)arg1 ;
-(void)handleInstallationError:(id)arg1 ;
-(void)_reallyDownload;
-(BOOL)isDevicePasscodeRequired;
-(void)_reallyInstall;
-(id)updateStatusForState:(int)arg1 progress:(id)arg2 ;
-(id)updateActionResultForState:(int)arg1 ;
-(void)checkOSUpdateWithResult:(/*^block*/id)arg1 ;
-(void)statusOfOSUpdateWithResult:(/*^block*/id)arg1 ;
-(void)downloadOSUpdateWithOptions:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)installOSUpdateWithOptions:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)defaultOSUpdateWithDownloadOptions:(id)arg1 installOptions:(id)arg2 result:(/*^block*/id)arg3 ;
@end
