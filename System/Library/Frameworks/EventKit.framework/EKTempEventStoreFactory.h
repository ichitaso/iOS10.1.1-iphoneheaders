/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTempEventStoreFactory : NSObject
+(id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id*)arg3 forDirectory:(id*)arg4 ;
+(id)tempCalendarStoreDirectory:(id*)arg1 ;
+(void)createTempCalendarStoreAtDirectory:(id)arg1 ;
+(id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id*)arg3 forDirectory:(id*)arg4 existingPath:(id)arg5 ;
+(id)_tempBase;
+(void)_makeEmptyDBInDirectory:(id)arg1 ;
+(void)_setupCoreDataInDirectory:(id)arg1 ;
+(void)_createEmptyDirectory:(id)arg1 ;
+(id)createEventStoreWithType:(long long)arg1 ;
+(void)createTempCalendarStoreForPath:(id*)arg1 forDirectory:(id*)arg2 ;
+(int)_storeTypeForTestBackingStoreType:(long long)arg1 ;
@end
