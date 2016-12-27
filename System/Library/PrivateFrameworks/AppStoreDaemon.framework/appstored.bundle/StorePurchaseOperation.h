/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSPurchaseManager;

@interface StorePurchaseOperation : ISOperation {

	SSPurchaseManager* _purchaseManager;
	long long _jobID;

}
-(id)_purchaseWithJobID:(long long)arg1 ;
-(id)_createExternalPurchaseFromPurchase:(id)arg1 ;
-(void)_addPurchase:(id)arg1 toManager:(id)arg2 withPurchaseID:(long long)arg3 ;
-(id)initWithPurchaseManager:(id)arg1 jobID:(long long)arg2 ;
-(void)run;
@end
