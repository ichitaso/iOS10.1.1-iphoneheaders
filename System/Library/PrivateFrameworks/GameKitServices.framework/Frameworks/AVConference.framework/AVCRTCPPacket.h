/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface AVCRTCPPacket : NSObject {

	unsigned char _packetType;
	unsigned _SSRC;

}

@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,setter=SRC,nonatomic) unsigned SSRC;              //@synthesize SSRC=_SSRC - In the implementation block
+(id)newPacketWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(id)description;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(unsigned char)packetType;
-(unsigned)SSRC;
-(void)setPacketType:(unsigned char)arg1 ;
-(void)setSSRC:(unsigned)arg1 ;
@end

