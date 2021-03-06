/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSWatchMetricsConfiguration, NSObject;

@interface SSWatchMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSWatchMetricsConfiguration* _metricsConfiguration;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                      //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) SSWatchMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
-(id)init;
-(BOOL)isEnabled;
-(id)_connection;
-(void)setMetricsConfiguration:(SSWatchMetricsConfiguration *)arg1 ;
-(SSWatchMetricsConfiguration *)metricsConfiguration;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

