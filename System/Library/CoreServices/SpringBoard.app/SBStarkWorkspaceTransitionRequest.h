/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransitionRequest.h>

@class SBStarkScreenController;

@interface SBStarkWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {

	SBStarkScreenController* _screenController;

}

@property (nonatomic,retain) SBStarkScreenController * screenController;              //@synthesize screenController=_screenController - In the implementation block
+(id)requestWithScreenController:(id)arg1 ;
-(id)initWithWorkspace:(id)arg1 display:(id)arg2 ;
-(SBStarkScreenController *)screenController;
-(void)setScreenController:(SBStarkScreenController *)arg1 ;
-(id)initWithScreenController:(id)arg1 ;
@end

