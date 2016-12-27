/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSTabDialogInformation : NSObject {

	BOOL _presented;
	/*^block*/id _presentationBlock;
	/*^block*/id _dismissalBlock;

}

@property (nonatomic,copy,readonly) id dismissalBlock;              //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
-(id)initWithPresentationBlock:(/*^block*/id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
-(void)presentIfNeeded;
-(id)dismissalBlock;
@end
