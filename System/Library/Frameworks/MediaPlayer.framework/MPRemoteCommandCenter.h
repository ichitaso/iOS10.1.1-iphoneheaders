/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRemoteCommandDelegate_Internal.h>

@protocol OS_dispatch_queue;
@class MPRemoteControlOrigin, NSBundle, NSMutableArray, NSObject, MPRemoteCommand, MPSkipIntervalCommand, MPRatingCommand, MPChangePlaybackRateCommand, MPFeedbackCommand, MPChangePlaybackPositionCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPPurchaseCommand, MPAdvanceShuffleModeCommand, MPAdvanceRepeatModeCommand, MPSetPlaybackQueueCommand, MPInsertIntoPlaybackQueueCommand, MPReorderQueueCommand, MPChangePlaybackProgressCommand, NSArray, NSString;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal> {

	MPRemoteControlOrigin* _origin;
	NSBundle* _bundle;
	BOOL _observing;
	NSMutableArray* _activeCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _mediaRemoteCommandHandler;
	BOOL _scheduledSupportedCommandsChangedNotification;
	BOOL _canBeNowPlayingApplication;
	MPRemoteCommand* _pauseCommand;
	MPRemoteCommand* _playCommand;
	MPRemoteCommand* _stopCommand;
	MPRemoteCommand* _togglePlayPauseCommand;
	MPRemoteCommand* _enableLanguageOptionCommand;
	MPRemoteCommand* _disableLanguageOptionCommand;
	MPRemoteCommand* _nextTrackCommand;
	MPRemoteCommand* _previousTrackCommand;
	MPSkipIntervalCommand* _skipForwardCommand;
	MPSkipIntervalCommand* _skipBackwardCommand;
	MPRemoteCommand* _seekForwardCommand;
	MPRemoteCommand* _seekBackwardCommand;
	MPRatingCommand* _ratingCommand;
	MPChangePlaybackRateCommand* _changePlaybackRateCommand;
	MPFeedbackCommand* _likeCommand;
	MPFeedbackCommand* _dislikeCommand;
	MPFeedbackCommand* _bookmarkCommand;
	MPChangePlaybackPositionCommand* _changePlaybackPositionCommand;
	MPChangeRepeatModeCommand* _changeRepeatModeCommand;
	MPChangeShuffleModeCommand* _changeShuffleModeCommand;
	MPRemoteCommand* _specialSeekForwardCommand;
	MPRemoteCommand* _specialSeekBackwardCommand;
	MPPurchaseCommand* _buyTrackCommand;
	MPPurchaseCommand* _buyAlbumCommand;
	MPPurchaseCommand* _preOrderAlbumCommand;
	MPPurchaseCommand* _cancelDownloadCommand;
	MPAdvanceShuffleModeCommand* _advanceShuffleModeCommand;
	MPAdvanceRepeatModeCommand* _advanceRepeatModeCommand;
	MPRemoteCommand* _createRadioStationCommand;
	MPSetPlaybackQueueCommand* _setPlaybackQueueCommand;
	MPInsertIntoPlaybackQueueCommand* _insertIntoPlaybackQueueCommand;
	MPRemoteCommand* _removeFromPlaybackQueueCommand;
	MPReorderQueueCommand* _reorderQueueCommand;
	MPFeedbackCommand* _addNowPlayingItemToLibraryCommand;
	MPFeedbackCommand* _addItemToLibraryCommand;
	MPChangePlaybackProgressCommand* _changePlaybackProgressCommand;

}

@property (nonatomic,readonly) MPRemoteCommand * specialSeekForwardCommand;                                    //@synthesize specialSeekForwardCommand=_specialSeekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * specialSeekBackwardCommand;                                   //@synthesize specialSeekBackwardCommand=_specialSeekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPPurchaseCommand * buyTrackCommand;                                            //@synthesize buyTrackCommand=_buyTrackCommand - In the implementation block
@property (nonatomic,readonly) MPPurchaseCommand * buyAlbumCommand;                                            //@synthesize buyAlbumCommand=_buyAlbumCommand - In the implementation block
@property (nonatomic,readonly) MPPurchaseCommand * preOrderAlbumCommand;                                       //@synthesize preOrderAlbumCommand=_preOrderAlbumCommand - In the implementation block
@property (nonatomic,readonly) MPPurchaseCommand * cancelDownloadCommand;                                      //@synthesize cancelDownloadCommand=_cancelDownloadCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceShuffleModeCommand * advanceShuffleModeCommand;                        //@synthesize advanceShuffleModeCommand=_advanceShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceRepeatModeCommand * advanceRepeatModeCommand;                          //@synthesize advanceRepeatModeCommand=_advanceRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * removeFromPlaybackQueueCommand;                               //@synthesize removeFromPlaybackQueueCommand=_removeFromPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPReorderQueueCommand * reorderQueueCommand;                                    //@synthesize reorderQueueCommand=_reorderQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * createRadioStationCommand;                                    //@synthesize createRadioStationCommand=_createRadioStationCommand - In the implementation block
@property (nonatomic,readonly) MPSetPlaybackQueueCommand * setPlaybackQueueCommand;                            //@synthesize setPlaybackQueueCommand=_setPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPInsertIntoPlaybackQueueCommand * insertIntoPlaybackQueueCommand;              //@synthesize insertIntoPlaybackQueueCommand=_insertIntoPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addNowPlayingItemToLibraryCommand;                          //@synthesize addNowPlayingItemToLibraryCommand=_addNowPlayingItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addItemToLibraryCommand;                                    //@synthesize addItemToLibraryCommand=_addItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackProgressCommand * changePlaybackProgressCommand;                //@synthesize changePlaybackProgressCommand=_changePlaybackProgressCommand - In the implementation block
@property (getter=_activeCommands,nonatomic,readonly) NSArray * activeCommands; 
@property (nonatomic,readonly) MPRemoteCommand * pauseCommand;                                                 //@synthesize pauseCommand=_pauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * playCommand;                                                  //@synthesize playCommand=_playCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * stopCommand;                                                  //@synthesize stopCommand=_stopCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * togglePlayPauseCommand;                                       //@synthesize togglePlayPauseCommand=_togglePlayPauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * enableLanguageOptionCommand;                                  //@synthesize enableLanguageOptionCommand=_enableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * disableLanguageOptionCommand;                                 //@synthesize disableLanguageOptionCommand=_disableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;                        //@synthesize changePlaybackRateCommand=_changePlaybackRateCommand - In the implementation block
@property (nonatomic,readonly) MPChangeRepeatModeCommand * changeRepeatModeCommand;                            //@synthesize changeRepeatModeCommand=_changeRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPChangeShuffleModeCommand * changeShuffleModeCommand;                          //@synthesize changeShuffleModeCommand=_changeShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * nextTrackCommand;                                             //@synthesize nextTrackCommand=_nextTrackCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * previousTrackCommand;                                         //@synthesize previousTrackCommand=_previousTrackCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipForwardCommand;                                     //@synthesize skipForwardCommand=_skipForwardCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipBackwardCommand;                                    //@synthesize skipBackwardCommand=_skipBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekForwardCommand;                                           //@synthesize seekForwardCommand=_seekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekBackwardCommand;                                          //@synthesize seekBackwardCommand=_seekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackPositionCommand * changePlaybackPositionCommand;                //@synthesize changePlaybackPositionCommand=_changePlaybackPositionCommand - In the implementation block
@property (nonatomic,readonly) MPRatingCommand * ratingCommand;                                                //@synthesize ratingCommand=_ratingCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * likeCommand;                                                //@synthesize likeCommand=_likeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * dislikeCommand;                                             //@synthesize dislikeCommand=_dislikeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * bookmarkCommand;                                            //@synthesize bookmarkCommand=_bookmarkCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCommandCenter;
-(void)dealloc;
-(void)_setupNotifications;
-(id)initWithOrigin:(id)arg1 bundle:(id)arg2 ;
-(void)_setupMediaRemoteCommandHandler;
-(void)_teardownMediaRemoteCommandHandler;
-(void)_teardownNotifications;
-(void)_scheduleSupportedCommandsChanged;
-(id)_activeCommands;
-(void)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 completion:(/*^block*/id)arg3 ;
-(void)dispatchCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned)arg2 ;
-(void)_commandTargetsDidChangeNotification:(id)arg1 ;
-(CFArrayRef)_copySupportedCommands;
-(void)remoteCommandDidMutatePropagatableProperty:(id)arg1 ;
-(id)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 ;
-(MPRemoteCommand *)pauseCommand;
-(MPRemoteCommand *)playCommand;
-(MPRemoteCommand *)stopCommand;
-(MPRemoteCommand *)togglePlayPauseCommand;
-(MPRemoteCommand *)enableLanguageOptionCommand;
-(MPRemoteCommand *)disableLanguageOptionCommand;
-(MPRemoteCommand *)nextTrackCommand;
-(MPRemoteCommand *)previousTrackCommand;
-(MPSkipIntervalCommand *)skipForwardCommand;
-(MPSkipIntervalCommand *)skipBackwardCommand;
-(MPRemoteCommand *)seekForwardCommand;
-(MPRemoteCommand *)seekBackwardCommand;
-(MPRatingCommand *)ratingCommand;
-(MPChangePlaybackRateCommand *)changePlaybackRateCommand;
-(MPFeedbackCommand *)likeCommand;
-(MPFeedbackCommand *)dislikeCommand;
-(MPFeedbackCommand *)bookmarkCommand;
-(MPChangePlaybackPositionCommand *)changePlaybackPositionCommand;
-(MPChangeRepeatModeCommand *)changeRepeatModeCommand;
-(MPChangeShuffleModeCommand *)changeShuffleModeCommand;
-(MPRemoteCommand *)specialSeekForwardCommand;
-(MPRemoteCommand *)specialSeekBackwardCommand;
-(MPPurchaseCommand *)buyTrackCommand;
-(MPPurchaseCommand *)buyAlbumCommand;
-(MPPurchaseCommand *)preOrderAlbumCommand;
-(MPPurchaseCommand *)cancelDownloadCommand;
-(MPAdvanceShuffleModeCommand *)advanceShuffleModeCommand;
-(MPAdvanceRepeatModeCommand *)advanceRepeatModeCommand;
-(MPRemoteCommand *)createRadioStationCommand;
-(MPSetPlaybackQueueCommand *)setPlaybackQueueCommand;
-(MPInsertIntoPlaybackQueueCommand *)insertIntoPlaybackQueueCommand;
-(MPRemoteCommand *)removeFromPlaybackQueueCommand;
-(MPReorderQueueCommand *)reorderQueueCommand;
-(MPFeedbackCommand *)addNowPlayingItemToLibraryCommand;
-(MPFeedbackCommand *)addItemToLibraryCommand;
-(MPChangePlaybackProgressCommand *)changePlaybackProgressCommand;
@end

