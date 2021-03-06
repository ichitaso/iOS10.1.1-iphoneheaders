/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <appstored/appstored-Structs.h>
@class NSObject, NSMutableArray;

@interface UserNotificationCenter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableArray* _userNotifications;

}
+(id)defaultCenter;
-(void)updateUserNotification:(id)arg1 withUserNotification:(id)arg2 ;
-(void)cancelUserNotifications:(id)arg1 ;
-(void)_showPreparedNotification:(id)arg1 ;
-(id)showUserNotification:(id)arg1 withOptions:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateUserNotification:(id)arg1 withDictionary:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_finishUserNotification:(CFUserNotificationRef)arg1 withResponseFlags:(unsigned long long)arg2 ;
-(void)cancelUserNotification:(id)arg1 ;
-(id)prepareUserNotificationWithDialog:(id)arg1 ;
-(id)showDialog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)showPreparedNotification:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)updateUserNotification:(id)arg1 withDialog:(id)arg2 ;
-(id)init;
-(id)showUserNotification:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

