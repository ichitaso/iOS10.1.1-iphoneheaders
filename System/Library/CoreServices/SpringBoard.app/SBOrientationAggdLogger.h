/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSArray, NSString;

@interface SBOrientationAggdLogger : NSObject <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _layoutMonitor;
	long long _currentOrientation;
	unsigned long long _currentOrientationStartTime;
	NSArray* _currentElements;
	BOOL _isKeyboardOnScreen;
	unsigned long long _keyboardOnScreenStartTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(void)_orientationLockChanged:(id)arg1 ;
-(double)_bucketedElapsedTimeWithStartTime:(unsigned long long)arg1 ;
-(void)_saveOrientationLockAggdValues;
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
@end

