/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRemoteComplication.h>

@class NTKCompanion3rdPartyApp;

@interface NTKCompanionRemoteComplication : NTKRemoteComplication {

	NTKCompanion3rdPartyApp* _app;

}

@property (nonatomic,retain) NTKCompanion3rdPartyApp * app;              //@synthesize app=_app - In the implementation block
+(id)complicationWithApp:(id)arg1 ;
-(NTKCompanion3rdPartyApp *)app;
-(id)localizedDetailText;
-(void)setApp:(NTKCompanion3rdPartyApp *)arg1 ;
@end
