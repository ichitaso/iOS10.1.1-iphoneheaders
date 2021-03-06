/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface VSFailable : NSObject <NSSecureCoding> {

	long long _kind;
	id _object;
	NSError* _error;

}

@property (assign,nonatomic) long long kind;              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSError * error;               //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)objectClass;
+(id)failableWithError:(id)arg1 ;
+(id)failableWithObject:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(long long)kind;
-(id)initWithObject:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setKind:(long long)arg1 ;
-(void)unwrapObject:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
@end

