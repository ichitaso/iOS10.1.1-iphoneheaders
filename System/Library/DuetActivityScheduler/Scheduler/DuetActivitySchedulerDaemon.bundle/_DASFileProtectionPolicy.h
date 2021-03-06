/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicy.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSObject;

@interface _DASFileProtectionPolicy : NSObject <_DASActivityPolicy> {

	BOOL _isClassCLocked;
	BOOL _passwordConfigured;
	int _classCLockedToken;
	NSString* _policyName;
	NSArray* _triggers;
	NSObject*<OS_dispatch_queue> _handleUnlockQueue;

}

@property (nonatomic,copy) NSString * policyName;                                         //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                          //@synthesize triggers=_triggers - In the implementation block
@property (assign,nonatomic) BOOL isClassCLocked;                                         //@synthesize isClassCLocked=_isClassCLocked - In the implementation block
@property (assign,nonatomic) BOOL passwordConfigured;                                     //@synthesize passwordConfigured=_passwordConfigured - In the implementation block
@property (assign,nonatomic) int classCLockedToken;                                       //@synthesize classCLockedToken=_classCLockedToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handleUnlockQueue;              //@synthesize handleUnlockQueue=_handleUnlockQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(NSString *)policyName;
-(void)setPolicyName:(NSString *)arg1 ;
-(id)initializeTriggers;
-(BOOL)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(void)setIsClassCLocked:(BOOL)arg1 ;
-(int)classCLockedToken;
-(void)setClassCLockedToken:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)handleUnlockQueue;
-(void)setPasswordConfigured:(BOOL)arg1 ;
-(void)setHandleUnlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)passwordConfigured;
-(id)init;
-(BOOL)isClassCLocked;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

