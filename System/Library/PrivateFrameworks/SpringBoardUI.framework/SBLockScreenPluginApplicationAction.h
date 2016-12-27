/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBLockScreenPluginAction.h>

@class NSString, NSURL;

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction {

	NSString* _bundleID;
	NSURL* _url;
	unsigned long long _transitionStyle;

}

@property (nonatomic,copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (setter=setURL:,nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) unsigned long long transitionStyle;              //@synthesize transitionStyle=_transitionStyle - In the implementation block
+(id)actionWithURL:(id)arg1 ;
+(id)actionWithBundleID:(id)arg1 ;
-(id)description;
-(unsigned long long)transitionStyle;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(BOOL)isApplicationAction;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
@end
