/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface _LSUserActivityWasContinuedInfo : NSObject {

	BOOL _submitted;
	BOOL _fromPairedDevice;
	BOOL _browserFallback;
	BOOL _cancelled;
	int _interactionType;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	unsigned long long _suggestedActionType;
	unsigned long long _payloadSize;
	double _transferSpeed;
	double _transferDuration;
	NSError* _error;

}

@property (copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * activityType;                                 //@synthesize activityType=_activityType - In the implementation block
@property (assign) unsigned long long suggestedActionType;                //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (getter=isFromPairedDevice) BOOL fromPairedDevice;              //@synthesize fromPairedDevice=_fromPairedDevice - In the implementation block
@property (getter=isBrowserFallback) BOOL browserFallback;                //@synthesize browserFallback=_browserFallback - In the implementation block
@property (assign) unsigned long long payloadSize;                        //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign) double transferSpeed;                                  //@synthesize transferSpeed=_transferSpeed - In the implementation block
@property (assign) double transferDuration;                               //@synthesize transferDuration=_transferDuration - In the implementation block
@property (copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (assign) int interactionType;                                   //@synthesize interactionType=_interactionType - In the implementation block
-(void)setTransferSpeed:(double)arg1 ;
-(void)setBrowserFallback:(BOOL)arg1 ;
-(void)setSuggestedActionType:(unsigned long long)arg1 ;
-(double)transferSpeed;
-(BOOL)isBrowserFallback;
-(void)submitWasSuggestedInfo;
-(BOOL)isFromPairedDevice;
-(void)setFromPairedDevice:(BOOL)arg1 ;
-(unsigned long long)suggestedActionType;
-(void)submit;
-(id)description;
-(void)setInteractionType:(int)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(int)interactionType;
-(NSString *)activityType;
-(double)transferDuration;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setTransferDuration:(double)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(unsigned long long)payloadSize;
@end
