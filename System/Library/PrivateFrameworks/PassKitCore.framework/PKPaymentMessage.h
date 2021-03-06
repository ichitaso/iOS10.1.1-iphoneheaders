/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding> {

	BOOL _allowDeepLink;
	BOOL _hasAssociatedPaymentApplication;
	BOOL _archiveOnNextTransaction;
	BOOL _archived;
	NSString* _identifier;
	NSString* _serviceIdentifier;
	NSString* _content;
	NSDate* _messageDate;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                        //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSDate * messageDate;                                //@synthesize messageDate=_messageDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL allowDeepLink;                                //@synthesize allowDeepLink=_allowDeepLink - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPaymentApplication;              //@synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication - In the implementation block
@property (assign,nonatomic) BOOL archiveOnNextTransaction;                     //@synthesize archiveOnNextTransaction=_archiveOnNextTransaction - In the implementation block
@property (assign,getter=isArchived,nonatomic) BOOL archived;                   //@synthesize archived=_archived - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
+(id)paymentMessageWithDictionary:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)content;
-(BOOL)isValid;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setAllowDeepLink:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentMessage:(id)arg1 ;
-(void)setHasAssociatedPaymentApplication:(BOOL)arg1 ;
-(void)setArchiveOnNextTransaction:(BOOL)arg1 ;
-(BOOL)isArchived;
-(void)setArchived:(BOOL)arg1 ;
-(NSDate *)messageDate;
-(void)setMessageDate:(NSDate *)arg1 ;
-(NSString *)serviceIdentifier;
-(BOOL)hasAssociatedPaymentApplication;
-(BOOL)allowDeepLink;
-(BOOL)archiveOnNextTransaction;
@end

