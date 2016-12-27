/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDSeriesSampleEntity : HDSampleEntity
+(id)_databaseTable;
+(id)columnsDefinition;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(BOOL)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(/*^block*/id)objectInsertionFilterForProfile:(id)arg1 ;
+(long long)_insertionEra;
+(void)updateInsertionEra;
+(id)additionalPredicateForEnumeration;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(/*^block*/id)arg4 ;
-(BOOL)freezeWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id*)arg3 ;
@end
