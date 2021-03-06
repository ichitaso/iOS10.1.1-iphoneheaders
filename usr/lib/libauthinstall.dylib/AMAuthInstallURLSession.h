/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libauthinstall.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libauthinstall.dylib/libauthinstall.dylib-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSURLSession, NSString;

@interface AMAuthInstallURLSession : NSObject <NSURLSessionDelegate> {

	double _timeout;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _responses;
	NSMutableDictionary* _data;
	NSMutableDictionary* _completions;
	NSURLSession* _session;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * responses;                 //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completions;               //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSMutableDictionary *)responses;
-(void)setResponses:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)completions;
-(NSURLSession *)session;
-(void)sendRequest:(CFHTTPMessageRef)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultSessionConfigurationWithIdentifier:(id)arg1 ;
-(id)_urlRequestForHTTPMessage:(CFHTTPMessageRef)arg1 ;
-(id)_defaultSession;
-(void)setCompletions:(NSMutableDictionary *)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
@end

