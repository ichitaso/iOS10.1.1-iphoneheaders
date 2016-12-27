/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardNameDataSource.h>

@class NSString;

@interface CNVCardNameComponents : NSObject <CNVCardNameDataSource> {

	NSString* _formattedName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _title;
	NSString* _suffix;
	NSString* _companyName;
	BOOL _isCompany;

}

@property (copy,readonly) NSString * formattedName;                 //@synthesize formattedName=_formattedName - In the implementation block
@property (readonly) BOOL isCompany;                                //@synthesize isCompany=_isCompany - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (readonly) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (readonly) NSString * middleName;                         //@synthesize middleName=_middleName - In the implementation block
@property (readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (readonly) NSString * suffix;                             //@synthesize suffix=_suffix - In the implementation block
@property (readonly) NSString * companyName;                        //@synthesize companyName=_companyName - In the implementation block
+(id)components;
+(id)componentsWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 title:(id)arg4 suffix:(id)arg5 companyName:(id)arg6 isCompany:(BOOL)arg7 ;
-(NSString *)title;
-(NSString *)formattedName;
-(NSString *)companyName;
-(BOOL)isCompany;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)suffix;
-(NSString *)middleName;
@end
