/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriResponse.h>

@class STTimer;

@interface AFGetTimerResponse : AFSiriResponse {

	STTimer* _timer;

}

@property (nonatomic,retain) STTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(STTimer *)timer;
-(void)setTimer:(STTimer *)arg1 ;
@end
