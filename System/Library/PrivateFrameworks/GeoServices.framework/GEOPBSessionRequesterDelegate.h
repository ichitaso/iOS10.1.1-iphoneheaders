/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOPBSessionRequesterDelegate <NSObject>
@optional
-(void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
-(void)requesterDidFinish:(id)arg1;
-(void)requesterDidCancel:(id)arg1;
-(void)requester:(id)arg1 didFailWithError:(id)arg2;
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1 callback:(/*^block*/id)arg2;

@end

