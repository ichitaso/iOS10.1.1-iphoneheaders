/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKWelcomeView.h>

@class UIButton;

@interface PKPassWelcomeView : PKWelcomeView {

	UIButton* _appStoreButton;

}
+(UIEdgeInsets)margins;
+(UIEdgeInsets)textInsets;
+(id)messageAttributedString:(BOOL)arg1 ;
+(double)headerImageRegionHeight;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(void)_scanCodePressed;
-(void)_appStorePressed;
@end

