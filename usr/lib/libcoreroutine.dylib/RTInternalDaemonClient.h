/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTDaemonInternalProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface RTInternalDaemonClient : NSObject <RTDaemonInternalProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)fetchMagicalMomentsModelPropertyListRepresentation:(/*^block*/id)arg1 ;
-(void)requestCurrentMicroLocation;
-(void)forceSequentialClusterIdentification:(/*^block*/id)arg1 ;
-(void)injectLocationOfInterest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeLocationOfInterest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)injectVisit:(id)arg1 locationOfInterest:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)removeVisit:(id)arg1 locationOfInterest:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchStoredLocationsFromDate:(id)arg1 toDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchPredictedApplicationsForEvent:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)processDataForPredictionModelWithReply:(/*^block*/id)arg1 ;
-(void)printMagicalMomentsModelWithReply:(/*^block*/id)arg1 ;
-(void)syncRoutineStateModelFromCompanionToGizmo:(/*^block*/id)arg1 ;
-(void)forceUpdateAssetMetadata;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)processDataForRoomAssistModelWithReply:(/*^block*/id)arg1 ;
-(void)printRoomAssistModel:(/*^block*/id)arg1 ;
-(void)forceEventModelRefresh;
@end

