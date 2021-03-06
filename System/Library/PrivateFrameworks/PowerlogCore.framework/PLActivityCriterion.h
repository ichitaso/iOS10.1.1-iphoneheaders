/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLActivityCriterionDelegate;
@interface PLActivityCriterion : NSObject {

	BOOL _satisfied;
	id<PLActivityCriterionDelegate> _delegate;

}

@property (assign,nonatomic) BOOL satisfied;                              //@synthesize satisfied=_satisfied - In the implementation block
@property (__weak) id<PLActivityCriterionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<PLActivityCriterionDelegate>)arg1 ;
-(id<PLActivityCriterionDelegate>)delegate;
-(void)didEnableActivity:(id)arg1 ;
-(void)didCompleteActivity:(id)arg1 ;
-(void)didInterruptActivity:(id)arg1 ;
-(void)didDisableActivity:(id)arg1 ;
-(BOOL)satisfied;
-(void)setSatisfied:(BOOL)arg1 ;
@end

