/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>
@optional
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2;
-(void)transaction:(id)arg1 willUpdateScene:(id)arg2;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;

@end
