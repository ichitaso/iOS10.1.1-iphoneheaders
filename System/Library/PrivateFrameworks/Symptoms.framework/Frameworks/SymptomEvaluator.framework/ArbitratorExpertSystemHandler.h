/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>

@protocol OS_dispatch_source;
@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSObject;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {

	ArbitratorExpertSystemState* currentState;
	NSArray* states;
	id flowAnalyticsObserver;
	SystemSettingsRelay* settingsRelay;
	unsigned administrativeState;
	AnalyticsWorkspace* arbitratorWorkspace;
	DiagnosticCaseUsageAnalytics* caseUsageSpace;
	NSObject*<OS_dispatch_source> periodicTimer;
	BOOL _initializationComplete;
	unsigned long long _externalStepper;

}

@property (assign) unsigned long long externalStepper;              //@synthesize externalStepper=_externalStepper - In the implementation block
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(void)resetAllForCustomerBuilds;
+(void)setInitializeAsHelper:(BOOL)arg1 ;
+(void)updateCaseStatisticsWith:(id)arg1 ;
+(BOOL)statisticsRowForDiagnosticCase:(id)arg1 matchesWith:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)shutdown;
-(void)_dumpState;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)_administrativeDisable;
-(void)_bringStateToIdle;
-(void)_administrativeEnable;
-(void)startSessionWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 queue:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)cancelSessionWithIdentifier:(id)arg1 ;
-(void)endSessionWithIdentifier:(id)arg1 forced:(BOOL)arg2 ;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)responseDictWithSuccess:(BOOL)arg1 sessionId:(id)arg2 reasonCode:(long long)arg3 ;
-(void)startSessionWithSignature:(id)arg1 isSnapshot:(BOOL)arg2 preferredTimeout:(double)arg3 events:(id)arg4 payload:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)startLogCollectionForSession:(id)arg1 withSignature:(id)arg2 ;
-(void)endLogCollectionForSession:(id)arg1 withSignature:(id)arg2 ;
-(void)getDiagnosticCaseUsageStatistics:(/*^block*/id)arg1 ;
-(void)resetDiagnosticCaseStorage;
-(void)resetDiagnosticCaseUsage;
-(void)resetAll;
-(void)_completeInitialization:(BOOL)arg1 ;
-(void)_purgeDiagnosticCaseUsage;
-(void)_updateAverageCasesPerDay;
-(BOOL)_initializeWorkspace;
-(void)_scheduleMaintenanceActivity;
-(void)_initializeStateMachine;
-(void)_updateCaseStatisticsWith:(id)arg1 ;
-(void)_updateDailyCaseStatisticsWith:(id)arg1 ;
-(void)handleResourceNotifyOfType:(unsigned long long)arg1 event:(id)arg2 ;
-(void)startSessionWithSignature:(id)arg1 uuid:(id)arg2 events:(id)arg3 action:(/*^block*/id)arg4 ;
-(BOOL)shouldGenerateReportForSignature:(id)arg1 trigger:(unsigned long long)arg2 ;
-(BOOL)_arbitratorReady;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 create:(BOOL)arg5 ;
-(void)recordReportForSignature:(id)arg1 trigger:(unsigned long long)arg2 ;
-(long long)_removeDiagnosticCaseUsageMatchingDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(void)_updateDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 lastSeen:(id)arg5 dampeningType:(BOOL)arg6 ;
-(void)periodicSessionManagement;
-(void)endSessions:(id)arg1 forced:(BOOL)arg2 ;
-(void)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 queue:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)_bringStateToAlerted;
-(void)updateSignatureWithBundleIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(id)_createDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(double)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
-(long long)_removeAllDiagnosticCaseUsageFor:(id)arg1 ;
-(void)_bringStateToCompleted;
-(void)startPeriodicTimer;
-(void)stopPeriodicTimer;
-(void)endSession:(id)arg1 forced:(BOOL)arg2 ;
-(unsigned long long)externalStepper;
-(void)setExternalStepper:(unsigned long long)arg1 ;
@end

