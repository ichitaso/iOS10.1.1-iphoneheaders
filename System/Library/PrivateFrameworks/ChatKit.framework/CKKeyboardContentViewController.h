/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInputViewController.h>

@class UIViewController, NSString;

@interface CKKeyboardContentViewController : UIInputViewController {

	UIViewController* _viewController;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(NSString *)identifier;
-(void)loadView;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)viewDidLoad;
-(id)initWithViewController:(id)arg1 identifier:(id)arg2 ;
@end

