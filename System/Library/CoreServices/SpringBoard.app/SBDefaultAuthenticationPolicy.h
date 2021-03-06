/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFAuthenticationPolicy.h>

@class SecureBackup, NSString;

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy> {

	SecureBackup* _secureBackupHelper;

}

@property (setter=_setSecureBackupHelper:,getter=_secureBackupHelper,nonatomic,retain) SecureBackup * secureBackupHelper;              //@synthesize secureBackupHelper=_secureBackupHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_secureBackupHelper;
-(void)_setSecureBackupHelper:(id)arg1 ;
-(void)cachePasscode:(id)arg1 ;
-(BOOL)shouldClearBlockStateOnSync;
-(void)clearPasscodeCache;
-(BOOL)usesSecureMode;
-(void)wipeDeviceWithReason:(id)arg1 ;
-(BOOL)allowAuthenticationRevocation;
@end

