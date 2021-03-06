/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol SUActivityDelegate;
@class UIImage, NSString, UIViewController;

@interface SUActivity : UIActivity {

	id<SUActivityDelegate> _delegate;
	UIImage* _suActivityImage;
	NSString* _suActivityTitle;
	NSString* _suActivityType;
	UIViewController* _suActivityViewController;

}

@property (assign,nonatomic,__weak) id<SUActivityDelegate> ITunesStoreDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)setActivityTitle:(id)arg1 ;
-(void)setActivityImage:(id)arg1 ;
-(void)setActivityViewController:(id)arg1 ;
-(id)activityImage;
-(void)setITunesStoreDelegate:(id<SUActivityDelegate>)arg1 ;
-(id<SUActivityDelegate>)ITunesStoreDelegate;
-(void)setActivityType:(id)arg1 ;
@end

