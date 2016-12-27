/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)allKeys;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsKey:(long long)arg1 ;
-(CFDictionaryRef)p_cfDictionary;
-(long long)intForKey:(long long)arg1 ;
-(void)setInt:(long long)arg1 forKey:(long long)arg2 ;
-(BOOL)intIsPresentForKey:(long long)arg1 outValue:(long long*)arg2 ;
-(void)removeIntForKey:(long long)arg1 ;
-(void)removeAllInts;
-(void)applyFromIntToIntDictionary:(id)arg1 ;
-(id)arrayOfBoxedKeys;
@end
