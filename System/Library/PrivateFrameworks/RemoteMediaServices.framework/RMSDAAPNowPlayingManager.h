/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, RMSDAAPNowPlayingManagerDelegate;
@class RMSDAAPRequestManager, RMSNowPlayingInfo, RMSControlInterface, NSURLSessionDataTask, NSObject, NSString, NSArray, NSNumber;

@interface RMSDAAPNowPlayingManager : NSObject {

	RMSDAAPRequestManager* _requestManager;
	RMSNowPlayingInfo* _currentNowPlayingInfo;
	RMSControlInterface* _controlInterface;
	NSURLSessionDataTask* _nowPlayingInfoRequest;
	NSURLSessionDataTask* _artworkRequest;
	NSURLSessionDataTask* _audioRoutesRequest;
	NSURLSessionDataTask* _volumeRequest;
	NSObject*<OS_dispatch_source> _artworkRetryTimer;
	long long _requestBackoffInterval;
	long long _artworkRequestBackoffInterval;
	NSString* _currentArtworkIdentifier;
	NSArray* _currentAudioRoutes;
	NSNumber* _lastVolume;
	BOOL _isObserving;
	BOOL _observing;
	id<RMSDAAPNowPlayingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSDAAPNowPlayingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RMSControlInterface * controlInterface;                            //@synthesize controlInterface=_controlInterface - In the implementation block
@property (getter=isObserving,nonatomic,readonly) BOOL observing;                               //@synthesize observing=_observing - In the implementation block
-(void)setDelegate:(id<RMSDAAPNowPlayingManagerDelegate>)arg1 ;
-(id<RMSDAAPNowPlayingManagerDelegate>)delegate;
-(BOOL)isObserving;
-(RMSControlInterface *)controlInterface;
-(void)setControlInterface:(RMSControlInterface *)arg1 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)endObservingNowPlaying;
-(void)beginObservingNowPlaying;
-(void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)arg1 ;
-(void)_requestAudioRoutes;
-(void)_requestVolume;
-(void)_refreshNowPlayingInfoRequest;
-(void)_requestNowPlayingInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelArtworkRetryTimer;
-(void)_scheduleArtworkRetryForNowPlayingInfo:(id)arg1 delay:(double)arg2 ;
-(BOOL)_audioRoutes:(id)arg1 equalAudioRoutes:(id)arg2 ;
@end
