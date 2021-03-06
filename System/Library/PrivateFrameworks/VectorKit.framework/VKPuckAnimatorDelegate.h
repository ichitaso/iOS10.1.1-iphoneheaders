/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKPuckAnimatorDelegate <NSObject>
@required
-(void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
-(void)puckAnimator:(id)arg1 updatedPosition:(const Mercator3<double>*)arg2 course:(double)arg3;
-(void)puckAnimatorDidStop:(id)arg1;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(Matrix<double, 3, 1>)arg2;

@end

