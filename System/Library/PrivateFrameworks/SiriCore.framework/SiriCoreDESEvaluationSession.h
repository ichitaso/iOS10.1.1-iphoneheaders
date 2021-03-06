/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSURLSession, SiriCoreLocalSpeechRecognizer, NSString;

@interface SiriCoreDESEvaluationSession : NSObject <NSURLSessionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _baseURL;
	NSURLSession* _session;
	SiriCoreLocalSpeechRecognizer* _recognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
-(void)_runWithRecords:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRecipeResponse:(id)arg1 records:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendRecipeResponseForRecord:(id)arg1 recipeId:(id)arg2 result:(id)arg3 error:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_runWithCompletion:(/*^block*/id)arg1 ;
@end

