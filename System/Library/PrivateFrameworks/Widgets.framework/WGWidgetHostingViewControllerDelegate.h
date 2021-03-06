/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WGWidgetHostingViewControllerDelegate <NSObject>
@optional
-(void)remoteViewControllerDidConnectForWidget:(id)arg1;
-(void)remoteViewControllerDidDisconnectForWidget:(id)arg1;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
-(void)remoteViewControllerViewDidHideForWidget:(id)arg1;
-(/*^block*/id)widget:(id)arg1 didUpdatePreferredHeight:(double)arg2 completion:(/*^block*/id)arg3;
-(void)contentAvailabilityDidChangeForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(long long)activeLayoutModeForWidget:(id)arg1;
-(UIEdgeInsets*)marginInsetsForWidget:(id)arg1;

@required
-(CGSize*)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;

@end

