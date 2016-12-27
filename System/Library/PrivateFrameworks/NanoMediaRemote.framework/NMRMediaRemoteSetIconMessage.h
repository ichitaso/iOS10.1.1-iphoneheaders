/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetIconMessage, NSData, NSString, NSDate;

@interface NMRMediaRemoteSetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetIconMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * icon; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 ;
-(NSData *)icon;
-(NSDate *)serializationDate;
-(id)protobufData;
-(NSString *)bundleID;
-(NSData *)originalDigest;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 ;
@end
