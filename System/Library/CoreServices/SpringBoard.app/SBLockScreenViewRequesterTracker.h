/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface SBLockScreenViewRequesterTracker : NSObject {

	NSMutableSet* _requesters;

}
-(BOOL)hasRequesters;
-(void)setRequested:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)addRequester:(id)arg1 ;
-(void)removeRequester:(id)arg1 ;
@end
