/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SAUIDelayedActionCommand, BKSProcessAssertion;

@interface _AFUIAssertingDelayedActionCommand : NSObject {

	SAUIDelayedActionCommand* _command;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) SAUIDelayedActionCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BKSProcessAssertion * assertion;                 //@synthesize assertion=_assertion - In the implementation block
-(SAUIDelayedActionCommand *)command;
-(BKSProcessAssertion *)assertion;
-(id)initWithCommand:(id)arg1 assertion:(id)arg2 ;
@end

