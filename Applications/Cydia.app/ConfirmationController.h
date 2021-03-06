/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CydiaWebViewController.h>

@class Database;

@interface ConfirmationController : CydiaWebViewController {

	Database* database_;
	MenesObjectHandle<UIAlertView, 0> essential_;
	MenesObjectHandle<NSDictionary, 0> changes_;
	MenesObjectHandle<NSMutableArray, 0> issues_;
	MenesObjectHandle<NSDictionary, 0> sizes_;
	char substrate_;

}
-(void)applyRightButton;
-(void)_doContinue;
-(void)confirmButtonClicked;
-(id)invokeDefaultMethodWithArguments:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)complete;
-(void)cancelButtonClicked;
-(id)leftButton;
-(id)initWithDatabase:(id)arg1 ;
@end

