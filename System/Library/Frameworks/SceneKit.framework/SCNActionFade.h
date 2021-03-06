/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionFade : SCNAction {

	SCNCActionFade* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)fadeOutWithDuration:(double)arg1 ;
+(id)fadeInWithDuration:(double)arg1 ;
+(id)fadeOpacityBy:(double)arg1 duration:(double)arg2 ;
+(id)fadeOpacityTo:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parameters;
-(id)reversedAction;
@end

