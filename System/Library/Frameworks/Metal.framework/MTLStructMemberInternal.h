/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLStructMember.h>

@class NSString;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned _offset : 32;
	unsigned _dataType : 16;
	id _details;

}
-(id)describe;
-(id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 details:(id)arg4 ;
-(void)dealloc;
-(id)name;
-(unsigned long long)offset;
-(id)structType;
-(id)arrayType;
-(unsigned long long)dataType;
@end

