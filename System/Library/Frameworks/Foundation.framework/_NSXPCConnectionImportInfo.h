/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock;

@interface _NSXPCConnectionImportInfo : NSObject {

	unsigned long long _generationCount;
	NSLock* _lock;
	CFDictionaryRef _proxyNumberToCount;

}
-(void)addProxy:(id)arg1 ;
-(BOOL)removeProxy:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

