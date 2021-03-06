/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString;

@interface CNiOSABStringMatchContactPredicate : CNPredicate <CNiOSContactPredicate> {

	NSString* _searchString;
	NSString* _accountIdentifier;
	NSString* _containerIdentifier;
	NSString* _groupIdentifier;

}

@property (nonatomic,copy,readonly) NSString * searchString;                     //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                  //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)searchString;
-(NSString *)groupIdentifier;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 error:(_CFError*)arg5 ;
-(BOOL)cn_supportsNativeSorting;
-(id)initWithSearchString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4 ;
-(NSString *)containerIdentifier;
-(NSString *)accountIdentifier;
@end

