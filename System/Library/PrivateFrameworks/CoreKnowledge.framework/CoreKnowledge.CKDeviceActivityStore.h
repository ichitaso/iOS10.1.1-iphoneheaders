/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreKnowledge/CoreKnowledge.CKDeviceActivityStorePrivate.h>
#import <CoreKnowledge/CoreKnowledge.CKReadableDeviceActivityStore.h>
#import <CoreKnowledge/CoreKnowledge.CKWritableDeviceActivityStore.h>

@class _TtC13CoreKnowledge16CKKnowledgeStore;

@interface CoreKnowledge.CKDeviceActivityStore : NSObject <CoreKnowledge.CKDeviceActivityStorePrivate, CoreKnowledge.CKReadableDeviceActivityStore, CoreKnowledge.CKWritableDeviceActivityStore> {

	 store;

}

@property (readonly,nonatomic) _TtC13CoreKnowledge16CKKnowledgeStore * backingStore; 
+(id)dateFormat;
-(_TtC13CoreKnowledge16CKKnowledgeStore *)backingStore;
-(id)recordedActivities;
-(BOOL)setFirstSeen:(id)arg1 forActivityId:(id)arg2 error:(id*)arg3 ;
-(BOOL)setLastSeen:(id)arg1 forActivityId:(id)arg2 error:(id*)arg3 ;
-(BOOL)setFrequency:(long long)arg1 forActivityId:(id)arg2 error:(id*)arg3 ;
-(BOOL)setLastDuration:(double)arg1 forActivityId:(id)arg2 error:(id*)arg3 ;
-(BOOL)setTotalDuration:(double)arg1 forActivityId:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteActivityWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)recordedActivityWithIdentifier:(id)arg1 ;
-(BOOL)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4 ;
@end

