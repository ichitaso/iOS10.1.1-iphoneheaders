/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableSet;

@interface SBOrientationLockManager : NSObject {

	long long _userLockedOrientation;
	long long _previousLockedOrientation;
	CFRunLoopObserverRef _runLoopObserver;
	NSMutableSet* _lockOverrideReasons;

}
+(id)sharedInstance;
-(void)setLockOverrideEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)restoreStateFromPrefs;
-(BOOL)isUserLocked;
-(long long)effectiveLockedOrientation;
-(void)lock:(long long)arg1 ;
-(long long)userLockOrientation;
-(void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(BOOL)arg2 changes:(/*^block*/id)arg3 ;
-(void)_updateLockStateWithChanges:(/*^block*/id)arg1 ;
-(BOOL)lockOverrideEnabled;
-(void)_addLockOverrideReason:(id)arg1 orientation:(long long)arg2 force:(BOOL)arg3 ;
-(void)_removeLockOverrideReason:(id)arg1 ;
-(void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(BOOL)arg2 ;
-(void)_handler_runLoopObserverDispose;
-(void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2 ;
-(void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2 ;
-(void)updateLockOverrideForCurrentDeviceOrientation;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)isEffectivelyLocked;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

