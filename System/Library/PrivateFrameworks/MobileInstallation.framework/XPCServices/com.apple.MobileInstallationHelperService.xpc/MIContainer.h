/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCMContainer, NSURL;

@interface MIContainer : NSObject {

	MCMContainer* _container;
	unsigned long long _status;

}

@property (nonatomic,readonly) MCMContainer * container;                  //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSURL * containerURL; 
@property (nonatomic,readonly) long long contentClass; 
@property (nonatomic,readonly) unsigned long long status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long diskUsage; 
+(id)containerWithIdentifier:(id)arg1 ofContentClass:(long long)arg2 createIfNeeded:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
+(id)tempContainerWithIdentifier:(id)arg1 ofContentClass:(long long)arg2 error:(id*)arg3 ;
+(id)_bundleContainerForIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)_groupContainerIdentifiersForBundleId:(id)arg1 ;
+(id)allContainersForIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)containersWithClass:(long long)arg1 error:(id*)arg2 ;
-(long long)contentClass;
-(BOOL)makeContainerLiveWithError:(id*)arg1 ;
-(BOOL)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 withError:(id*)arg3 ;
-(BOOL)purgeContentWithError:(id*)arg1 ;
-(BOOL)captureStoreDataFromDirectory:(id)arg1 doCopy:(BOOL)arg2 failureIsFatal:(BOOL)arg3 withError:(id*)arg4 ;
-(unsigned long long)diskUsage;
-(NSURL *)containerURL;
-(id)description;
-(MCMContainer *)container;
-(unsigned long long)status;
-(id)initWithContainer:(id)arg1 ;
@end
