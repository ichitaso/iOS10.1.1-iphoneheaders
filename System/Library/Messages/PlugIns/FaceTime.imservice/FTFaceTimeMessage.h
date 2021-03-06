/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying> {

	NSData* _sessionToken;

}

@property (copy) NSData * sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(id)messageBody;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValidMessage;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(id)requiredKeys;
@end

