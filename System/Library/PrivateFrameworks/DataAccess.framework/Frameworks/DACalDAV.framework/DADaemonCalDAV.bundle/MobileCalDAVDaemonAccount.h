/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVAccount.h>
#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <DADaemonCalDAV/DARefreshManagerDelegate.h>
#import <DADaemonCalDAV/DABabysittable.h>

@class DATrustHandler, CalDAVAgent, NSMutableDictionary, CoreDAVOptionsTask, NSTimer, NSMutableSet, NSString;

@interface MobileCalDAVDaemonAccount : MobileCalDAVAccount <DADataclassLockWatcher, DARefreshManagerDelegate, DABabysittable> {

	CalDAVAgent* _consumer;
	BOOL _shouldRegisterWithRefreshManager;
	BOOL _safeToRefresh;
	BOOL _waitingForGatekeeper;
	BOOL _holdingGatekeeperLock;
	BOOL _waitingForDiscoveryGatekeeper;
	BOOL _holdingDiscoveryGatekeeperLock;
	BOOL _forcedRefresh;
	BOOL _fullRefresh;
	int _refreshReason;
	double _lastRetryTimeout;
	NSMutableDictionary* _attachmentDownloadsByAttachmentUUID;
	NSMutableDictionary* _calendarAvailabilityRequests;
	NSMutableDictionary* _shareResponses;
	NSMutableDictionary* _directorySearches;
	CoreDAVOptionsTask* _optionsProbe;
	NSTimer* _optionsTimeoutTimer;
	NSMutableSet* _watchedCollections;

}

@property (nonatomic,retain) NSMutableDictionary * shareResponses;                                   //@synthesize shareResponses=_shareResponses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * directorySearches;                                //@synthesize directorySearches=_directorySearches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * calendarAvailabilityRequests;                     //@synthesize calendarAvailabilityRequests=_calendarAvailabilityRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attachmentDownloadsByAttachmentUUID;              //@synthesize attachmentDownloadsByAttachmentUUID=_attachmentDownloadsByAttachmentUUID - In the implementation block
@property (assign,nonatomic,__weak) CalDAVAgent * consumer;                                          //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) BOOL safeToRefresh;                                                     //@synthesize safeToRefresh=_safeToRefresh - In the implementation block
@property (assign,nonatomic) BOOL fullRefresh;                                                       //@synthesize fullRefresh=_fullRefresh - In the implementation block
@property (assign,nonatomic) BOOL forcedRefresh;                                                     //@synthesize forcedRefresh=_forcedRefresh - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterWithRefreshManager;                                  //@synthesize shouldRegisterWithRefreshManager=_shouldRegisterWithRefreshManager - In the implementation block
@property (assign,nonatomic) int refreshReason;                                                      //@synthesize refreshReason=_refreshReason - In the implementation block
@property (nonatomic,retain) CoreDAVOptionsTask * optionsProbe;                                      //@synthesize optionsProbe=_optionsProbe - In the implementation block
@property (nonatomic,retain) NSTimer * optionsTimeoutTimer;                                          //@synthesize optionsTimeoutTimer=_optionsTimeoutTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
+(int)extractDARefreshReasonFromContext:(id)arg1 ;
+(int)convertToMobileCalDAVRefreshReason:(int)arg1 ;
-(void)dealloc;
-(void)setConsumer:(CalDAVAgent *)arg1 ;
-(CalDAVAgent *)consumer;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(id)waiterID;
-(BOOL)monitorFoldersWithIDs:(id)arg1 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2 ;
-(void)cancelDownloadingInstance:(id)arg1 error:(id)arg2 ;
-(id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5 ;
-(id)respondToShareRequestForCalendar:(id)arg1 withResponse:(long long)arg2 consumer:(id)arg3 ;
-(void)cancelShareResponseInstance:(id)arg1 error:(id)arg2 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)getDAAccount;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(id)serverTokenRegistrationURL;
-(int)refreshReason;
-(void)setRefreshReason:(int)arg1 ;
-(NSTimer *)optionsTimeoutTimer;
-(void)setOptionsTimeoutTimer:(NSTimer *)arg1 ;
-(void)_cancelOptionsTimer;
-(CoreDAVOptionsTask *)optionsProbe;
-(void)setOptionsProbe:(CoreDAVOptionsTask *)arg1 ;
-(void)_serverProbeTimedOut;
-(void)cancelRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshActor:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)setFullRefresh:(BOOL)arg1 ;
-(void)setSafeToRefresh:(BOOL)arg1 ;
-(void)setForcedRefresh:(BOOL)arg1 ;
-(NSMutableDictionary *)calendarAvailabilityRequests;
-(void)cancelAllCalendarAvailabilityRequests;
-(void)calendarAvailabilityRequestIsGoingAway:(id)arg1 ;
-(void)_attachmentDownloadDidFinish:(id)arg1 ;
-(NSMutableDictionary *)attachmentDownloadsByAttachmentUUID;
-(void)cancelAllAttachmentDownloads;
-(void)calendarDirectorySearchIsGoingAway:(id)arg1 ;
-(NSMutableDictionary *)directorySearches;
-(void)cancelAllCalendarDirectorySearches;
-(void)shareResponseIsGoingAway:(id)arg1 ;
-(NSMutableDictionary *)shareResponses;
-(void)cancelAllSharingRequests;
-(void)_updateWatchedCollections;
-(BOOL)_hasSubscribedCalendars;
-(void)_refreshSubscribedCalendarChildAccounts;
-(BOOL)safeToRefresh;
-(void)_persistAccountSyncDiagnostics:(id)arg1 withContext:(id)arg2 completionTime:(id)arg3 willAttemptToRetry:(BOOL)arg4 hitInternalRefreshTimeout:(BOOL)arg5 error:(id)arg6 ;
-(BOOL)_hasChangesInStore:(void*)arg1 forChangesCall:(/*function pointer*/void*)arg2 ;
-(BOOL)_shouldRefreshInResponseToDBChange;
-(void)_continueRefresh;
-(BOOL)shouldRegisterWithRefreshManager;
-(void)setShouldRegisterWithRefreshManager:(BOOL)arg1 ;
-(void)_probeAndSync;
-(BOOL)fullRefresh;
-(BOOL)forcedRefresh;
-(void)setAttachmentDownloadsByAttachmentUUID:(NSMutableDictionary *)arg1 ;
-(void)setCalendarAvailabilityRequests:(NSMutableDictionary *)arg1 ;
-(void)setDirectorySearches:(NSMutableDictionary *)arg1 ;
-(void)setShareResponses:(NSMutableDictionary *)arg1 ;
-(BOOL)APSTopicHasValidPrefix:(id)arg1 ;
-(void)_refresh;
@end

