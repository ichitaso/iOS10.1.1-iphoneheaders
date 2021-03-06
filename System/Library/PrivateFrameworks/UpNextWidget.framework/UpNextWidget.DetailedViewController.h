/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class EKTravelEngineHypothesis, UIImage;

@interface UpNextWidget.DetailedViewController : UIViewController <CLLocationManagerDelegate> {

	 showExpandedMode;
	 needsNewMapSnapshot;
	 needsMapPlaceholder;
	 lastKnownHypothesis;
	 lastKnownMapImage;
	 lastKnownCoordinate;
	 detailedView;
	 largeEventView;
	 largeReminderView;
	 smallElementsView;
	 lastKnownViewWidth;
	 timelinessAuthority;
	 outstandingHypothesizer;
	 outstandingSnapshotter;
	 locationManager;

}

@property (assign,nonatomic) BOOL showExpandedMode; 
@property (retain,nonatomic) EKTravelEngineHypothesis * lastKnownHypothesis; 
@property (retain,nonatomic) UIImage * lastKnownMapImage; 
@property (assign,nonatomic) CLLocationCoordinate2D lastKnownCoordinate; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)showExpandedMode;
-(void)setShowExpandedMode:(BOOL)arg1 ;
-(EKTravelEngineHypothesis *)lastKnownHypothesis;
-(void)setLastKnownHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(UIImage *)lastKnownMapImage;
-(void)setLastKnownMapImage:(UIImage *)arg1 ;
-(CLLocationCoordinate2D)lastKnownCoordinate;
-(void)setLastKnownCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)restoreWithHypothesis:(id)arg1 mapImage:(id)arg2 showExpandedMode:(BOOL)arg3 lastKnownCoordinate:(CLLocationCoordinate2D)arg4 ;
-(void)refreshWithAlarms:(id)arg1 events:(id)arg2 reminders:(id)arg3 ;
-(void)locationManager:(id)arg1 didChangeAuthorization:(int)arg2 ;
@end

