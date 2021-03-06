/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData {

	NSString* _inviteeUserID;
	NSString* _inviteeName;
	NSUUID* _inviteeUUID;

}

@property (nonatomic,copy,readonly) NSString * inviteeUserID;              //@synthesize inviteeUserID=_inviteeUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviteeName;                //@synthesize inviteeName=_inviteeName - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * inviteeUUID;                  //@synthesize inviteeUUID=_inviteeUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithInviteeUserID:(id)arg1 inviteeName:(id)arg2 invitationState:(long long)arg3 expiryDate:(id)arg4 ;
-(NSString *)inviteeUserID;
-(NSUUID *)inviteeUUID;
-(NSString *)inviteeName;
@end

