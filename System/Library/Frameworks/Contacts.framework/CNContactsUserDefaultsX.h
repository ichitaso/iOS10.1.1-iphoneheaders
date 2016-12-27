/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactsUserDefaults.h>

@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults {

	CNFoundationUserDefaults* _foundationUserDefaults;

}

@property (retain) CNFoundationUserDefaults * foundationUserDefaults;              //@synthesize foundationUserDefaults=_foundationUserDefaults - In the implementation block
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)sortOrder;
-(id)countryCode;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)initWithFoundationUserDefaults:(id)arg1 ;
-(CNFoundationUserDefaults *)foundationUserDefaults;
-(void)setFoundationUserDefaults:(CNFoundationUserDefaults *)arg1 ;
-(long long)displayNameOrder;
@end
