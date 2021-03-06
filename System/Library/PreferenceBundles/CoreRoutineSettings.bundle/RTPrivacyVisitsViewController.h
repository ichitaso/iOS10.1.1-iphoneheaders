/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableViewController.h>

@class RTPrivacyLOI;

@interface RTPrivacyVisitsViewController : RTMapAndTableViewController {

	RTPrivacyLOI* _privacyLOI;

}

@property (nonatomic,retain) RTPrivacyLOI * privacyLOI;              //@synthesize privacyLOI=_privacyLOI - In the implementation block
-(void)setPrivacyLOI:(RTPrivacyLOI *)arg1 ;
-(void)_displayPrivacyLOI:(id)arg1 ;
-(RTPrivacyLOI *)privacyLOI;
-(void)_removePrivacyLOI:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
@end

