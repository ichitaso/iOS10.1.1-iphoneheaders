/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface CDXAWDReporter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _serverConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) AWDServerConnection * serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
-(void)_reportMetricId:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)reportExtensionChanged:(id)arg1 blockingEntries:(unsigned long long)arg2 identificationEntries:(unsigned long long)arg3 enabled:(BOOL)arg4 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AWDServerConnection *)serverConnection;
-(void)setServerConnection:(AWDServerConnection *)arg1 ;
@end

