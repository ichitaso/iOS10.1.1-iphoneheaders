/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@class NSString;

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {

	NSString* _machServiceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg1 ;
-(NSString *)description;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
