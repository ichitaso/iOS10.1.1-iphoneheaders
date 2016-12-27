/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NCWidgetViewController_Service_IPC
@optional
-(void)__setActiveDisplayMode:(long long)arg1 requestIdentifier:(id)arg2;
-(void)__setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2;
-(void)__closeTransactionForPreferredHeightChangeWithIdentifier:(id)arg1;

@required
-(void)__viewWillTransitionToSize:(CGSize)arg1 requestIdentifier:(id)arg2;
-(void)__prepareForAnimationsForRequestWithIdentifier:(id)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1;
-(void)__requestEncodedLayerTreeToURL:(id)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)__performUpdateWithReplyHandler:(/*^block*/id)arg1;
-(void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;

@end
