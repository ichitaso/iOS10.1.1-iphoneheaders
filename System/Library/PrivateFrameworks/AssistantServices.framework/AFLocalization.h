/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AFLocalization : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tables;

}
+(id)sharedInstance;
-(id)init;
-(id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 languageCode:(id)arg4 ;
@end

