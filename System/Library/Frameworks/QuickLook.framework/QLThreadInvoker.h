/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLConnection, NSData, NSError;

@interface QLThreadInvoker : NSObject {

	NSURLConnection* _connection;
	NSData* _data;
	NSError* _error;

}
-(id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)connectionDidReceiveData:(id)arg1 ;
-(void)connectionDidReceiveDataLengthReceived:(id)arg1 ;
-(void)connectionDidFailWithError:(id)arg1 ;
@end

