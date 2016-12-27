/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUIUserAgentInternal.h>

@class NSString;

@interface FBUIUserAgent : NSObject <FBUIUserAgentInternal> {

	BOOL _systemApp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;              //@synthesize systemApp=_systemApp - In the implementation block
+(id)sharedAgent;
-(id)processManager;
-(id)init;
-(id)mainDisplay;
-(id)mainQueue;
-(id)sceneManager;
-(BOOL)isSystemApp;
-(id)mainScene;
-(void)setSystemApp:(BOOL)arg1 ;
-(id)currentProcess;
@end
