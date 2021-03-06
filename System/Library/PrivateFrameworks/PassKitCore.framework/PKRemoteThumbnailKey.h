/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKRemoteThumbnailKey : NSObject <NSCopying> {

	NSString* _requestIdentifier;
	NSData* _requestData;

}

@property (nonatomic,retain) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSData * requestData;                      //@synthesize requestData=_requestData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)requestIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(NSData *)requestData;
@end

