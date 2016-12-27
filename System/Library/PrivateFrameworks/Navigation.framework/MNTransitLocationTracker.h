/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNSteppingLocationTracker.h>
#import <libobjc.A.dylib/MNTransitScheduleTrackerDelegate.h>

@class GEOTransitRouteMatcher, MNTransitScheduleTracker, GEORoadMatcher, NSDate, MNLocation, NSString;

@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNTransitScheduleTrackerDelegate> {

	GEOTransitRouteMatcher* _transitRouteMatcher;
	MNTransitScheduleTracker* _scheduleTracker;
	GEORoadMatcher* _roadMatcher;
	NSDate* _lastLocationTimestamp;
	NSDate* _lastAccurateLocationDate;
	MNLocation* _lastMatchedLocation;
	NSDate* _startDate;
	BOOL _hasArrived;
	BOOL _debugSnapToTransitLines;

}

@property (assign,nonatomic) BOOL debugSnapToTransitLines;              //@synthesize debugSnapToTransitLines=_debugSnapToTransitLines - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopTracking;
-(int)transportType;
-(id)initWithNavigationSession:(id)arg1 ;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)transitScheduleTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2 ;
-(void)transitScheduleTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3 ;
-(id)_correctedLocationForLocation:(id)arg1 ;
-(id)_locationForInaccurateLocation:(id)arg1 ;
-(id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2 ;
-(double)_timeToDisplayStaleGPSLocation;
-(BOOL)_isInaccurateLocation:(id)arg1 ;
-(BOOL)debugSnapToTransitLines;
-(void)setDebugSnapToTransitLines:(BOOL)arg1 ;
@end
