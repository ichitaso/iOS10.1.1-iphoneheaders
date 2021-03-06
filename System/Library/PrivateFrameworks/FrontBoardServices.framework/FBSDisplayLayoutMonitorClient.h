/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@protocol FBSDisplayLayoutMonitorClientDelegate;
@interface FBSDisplayLayoutMonitorClient : FBSSystemServiceFacilityClient {

	id<FBSDisplayLayoutMonitorClientDelegate> _delegate;

}
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2 ;
-(void)configureConnectMessage:(id)arg1 ;
-(void)_handleDisplayLayoutUpdate:(id)arg1 ;
-(void)invalidate;
@end

