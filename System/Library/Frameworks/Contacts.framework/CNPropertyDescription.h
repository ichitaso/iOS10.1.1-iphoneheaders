/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CNPropertyDescription : NSObject <NSSecureCoding, NSCopying> {

	NSString* _key;
	SEL _readSelector;
	SEL _writeSelector;
	/*^block*/id _valueForKeyTransform;
	BOOL _isNonnull;

}

@property (nonatomic,readonly) SEL readSelector;                           //@synthesize readSelector=_readSelector - In the implementation block
@property (nonatomic,readonly) SEL writeSelector;                          //@synthesize writeSelector=_writeSelector - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) Class valueClass; 
@property (nonatomic,readonly) BOOL isSingleValue; 
@property (nonatomic,readonly) BOOL isMultiValue; 
@property (nonatomic,readonly) BOOL isNonnull;                             //@synthesize isNonnull=_isNonnull - In the implementation block
@property (nonatomic,copy,readonly) id valueForKeyTransform;               //@synthesize valueForKeyTransform=_valueForKeyTransform - In the implementation block
@property (nonatomic,readonly) id nilValue; 
@property (nonatomic,readonly) NSArray * equivalentLabelSets; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isNonnull;
-(id)initWithKey:(id)arg1 readSelector:(SEL)arg2 writeSelector:(SEL)arg3 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2 ;
-(BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2 ;
-(id)nilValue;
-(NSArray *)equivalentLabelSets;
-(id)stringForIndexingForContact:(id)arg1 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(id)equivalentLabelsForLabel:(id)arg1 ;
-(id)valueForKeyTransform;
-(BOOL)abPropertyID:(int*)arg1 ;
-(BOOL)setCNValue:(id)arg1 onABPerson:(void*)arg2 withDependentPropertiesContext:(id)arg3 error:(id*)arg4 ;
-(void*)ABValueForABPerson:(void*)arg1 ;
-(void)assertValueType:(id)arg1 ;
-(void)copyFromABPerson:(void*)arg1 toContact:(id)arg2 ;
-(BOOL)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(_CFError*)arg3 ;
-(BOOL)isSingleValue;
-(id)valueWithResetIdentifiers:(id)arg1 ;
-(SEL)readSelector;
-(SEL)writeSelector;
-(BOOL)isMultiValue;
-(id)CNValueForContact:(id)arg1 ;
-(BOOL)isWritable;
-(Class)valueClass;
@end
