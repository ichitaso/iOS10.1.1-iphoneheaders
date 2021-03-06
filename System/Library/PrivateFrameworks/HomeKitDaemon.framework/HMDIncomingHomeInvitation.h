/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class NSData, NSString, NSDictionary, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation {

	NSData* _inviterPublicKey;
	NSString* _inviterControllerName;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
@property (nonatomic,copy,readonly) NSData * inviterPublicKey;                     //@synthesize inviterPublicKey=_inviterPublicKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterControllerName;              //@synthesize inviterControllerName=_inviterControllerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterUserID; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)bulletinContext;
-(id)describeWithFormat;
-(NSString *)homeName;
-(NSUUID *)homeUUID;
-(NSString *)inviterUserID;
-(NSString *)inviterControllerName;
-(NSData *)inviterPublicKey;
-(id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterPublicKey:(id)arg6 inviterControllerName:(id)arg7 expiryDate:(id)arg8 ;
@end

