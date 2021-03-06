/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
@class NSMutableDictionary, NSObject;

@interface PLProcessPortMap : NSObject {

	int _NbPids;
	int _NbFds;
	int* _Pids;
	proc_fdinfo* _Fds;
	NSMutableDictionary* _localPortToPidAndProcessName;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign) int NbPids;                                                      //@synthesize NbPids=_NbPids - In the implementation block
@property (assign) int* Pids;                                                       //@synthesize Pids=_Pids - In the implementation block
@property (assign) int NbFds;                                                       //@synthesize NbFds=_NbFds - In the implementation block
@property (assign) proc_fdinfo* Fds;                                                //@synthesize Fds=_Fds - In the implementation block
@property (retain) NSMutableDictionary * localPortToPidAndProcessName;              //@synthesize localPortToPidAndProcessName=_localPortToPidAndProcessName - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(int*)Pids;
-(proc_fdinfo*)Fds;
-(void)reconstructPortMapInternal;
-(NSMutableDictionary *)localPortToPidAndProcessName;
-(void)setLocalPortToPidAndProcessName:(NSMutableDictionary *)arg1 ;
-(int)getPids;
-(int)getFds:(proc_taskallinfo)arg1 withPid:(int)arg2 ;
-(void)setNbFds:(int)arg1 ;
-(int)NbFds;
-(void)setFds:(proc_fdinfo*)arg1 ;
-(int)NbPids;
-(void)setNbPids:(int)arg1 ;
-(void)setPids:(int*)arg1 ;
-(void)reconstructPortMap;
-(id)pidAndProcessNameForLocalPort:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

