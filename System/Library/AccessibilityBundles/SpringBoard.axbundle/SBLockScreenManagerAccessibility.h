/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/__SBLockScreenManagerAccessibility_super.h>

@interface SBLockScreenManagerAccessibility : __SBLockScreenManagerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_handleAuthenticationFeedback:(id)arg1 ;
-(void)_setUILocked:(BOOL)arg1 ;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(BOOL)mesaCoordinator:(id)arg1 requestsUnlockWithIntent:(int)arg2 ;
@end

