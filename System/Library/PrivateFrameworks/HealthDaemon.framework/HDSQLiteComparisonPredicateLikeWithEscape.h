/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSString;

@interface HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate {

	NSString* _escapeCharacter;

}

@property (nonatomic,readonly) NSString * escapeCharacter;              //@synthesize escapeCharacter=_escapeCharacter - In the implementation block
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3 ;
-(NSString *)escapeCharacter;
@end
