/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary;

@interface GEOLogMsgEventFactory : NSObject {

	NSMutableDictionary* _appStateTransitionData;
	NSMutableDictionary* _appStateTransitionTimingData;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)clearStateTimingData;
-(int)_bucketValueForTimeDelta:(double)arg1 ;
-(int)_bucketValueForTravelTime:(double)arg1 ;
-(id)logMsgEventForUserAction:(id)arg1 eventValue:(id)arg2 eventTarget:(int)arg3 ;
-(id)logMsgEventForMapLaunch:(id)arg1 sourceAppId:(id)arg2 ttlEventTime:(id)arg3 ;
-(id)logMsgEventForStaleResources:(id)arg1 ;
-(id)logMsgEventForStateTransition:(id)arg1 generateOnlyIfStateChanged:(BOOL)arg2 ;
-(id)logMsgEventForTileSetState:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4 ;
-(id)logMsgEventForPlaceDataCacheFromAppWithID:(id)arg1 ;
-(id)logMsgEventForNetworkService:(int)arg1 requestErrorDomain:(id)arg2 requestErrorCode:(long long)arg3 requestErrorDescription:(id)arg4 requestDataSize:(int)arg5 responseDataSize:(int)arg6 responseTime:(int)arg7 ;
-(id)logMsgEventForCacheHitWithCacheType:(int)arg1 cacheHitCount:(unsigned)arg2 cacheMissCount:(unsigned)arg3 ;
-(id)logMsgEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(BOOL)arg3 navigationAudioFeedback:(GEONavigationAudioFeedback)arg4 durationOfTrip:(double)arg5 ;
-(id)logMsgEventForTransitAppLaunchWithBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3 ;
-(id)logMsgEventForTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6 ;
-(id)logMsgEventForTimeToLeaveIntialTravelTime:(double)arg1 ;
-(id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 messageCount:(int)arg3 messageSize:(long long)arg4 retryCount:(int)arg5 ;
-(id)logMsgEventForListInteractionSessionOfType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3 ;
-(id)logMsgEventForRefineSearchSessionOfType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4 ;
-(id)logMsgsEventForMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(BOOL)arg4 startDate:(id)arg5 forDuration:(double)arg6 ;
-(id)logMsgEventForProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4 ;
-(id)logMsgEventForRidebookingEndState:(int)arg1 endView:(int)arg2 rideAppId:(id)arg3 originBlurred:(id)arg4 destinationBlurred:(id)arg5 exploredOtherOptions:(BOOL)arg6 rideType:(id)arg7 distanceToPickupInMeters:(double)arg8 paymentIsApplePay:(BOOL)arg9 numberOfAvailableExtensions:(unsigned long long)arg10 switchedApp:(BOOL)arg11 showedSurgePricingAlert:(BOOL)arg12 durationOfSessionInSeconds:(double)arg13 installedApp:(BOOL)arg14 timestamp:(long long)arg15 unavailable:(BOOL)arg16 movedPickupLocation:(BOOL)arg17 errorMessages:(id)arg18 numberOfAppsInstalled:(unsigned long long)arg19 enabled:(unsigned long long)arg20 ;
-(id)logMsgEventForRidebookedBookedUsingMaps:(BOOL)arg1 cancelled:(BOOL)arg2 contactedDriver:(BOOL)arg3 viewedInProactiveTray:(BOOL)arg4 tappedProactiveTrayItem:(BOOL)arg5 viewedDetails:(BOOL)arg6 rideAppId:(id)arg7 numberOfAppsInstalled:(unsigned long long)arg8 enabled:(unsigned long long)arg9 ;
-(id)logMsgEventForTablebookingWithSessionID:(id)arg1 endState:(int)arg2 endView:(int)arg3 bookTableAppId:(id)arg4 muid:(unsigned long long)arg5 blurredReservationTimestamp:(long long)arg6 blurredBookingTimestamp:(long long)arg7 durationOfSessionInSeconds:(double)arg8 installNeeded:(BOOL)arg9 installNeededTappedAppId:(id)arg10 installCompleted:(BOOL)arg11 tableSize:(unsigned)arg12 addedSpecialRequest:(BOOL)arg13 swipedAvailableTimes:(BOOL)arg14 tappedDatePicker:(BOOL)arg15 errorMessages:(id)arg16 ;
-(id)logMsgEventForTablebookedSessionWithSessionID:(id)arg1 bookedTables:(id)arg2 ;
-(id)bookedTableWithBookedUsingMaps:(BOOL)arg1 cancelled:(BOOL)arg2 viewedInProactiveTray:(BOOL)arg3 tappedProactiveTrayItem:(BOOL)arg4 viewedInPlacecard:(BOOL)arg5 viewedDetailsInPlacecard:(BOOL)arg6 isAsync:(BOOL)arg7 bookedAppId:(id)arg8 muid:(unsigned long long)arg9 called:(BOOL)arg10 routed:(BOOL)arg11 tappedChangeReservation:(BOOL)arg12 tappedCancelReservation:(BOOL)arg13 ;
@end

