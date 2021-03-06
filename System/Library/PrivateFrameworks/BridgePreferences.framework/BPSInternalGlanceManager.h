/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NGSSettingsManagerDelegate.h>

@class NGSSettingsManager, NSHashTable, NSString;

@interface BPSInternalGlanceManager : NSObject <NGSSettingsManagerDelegate> {

	BOOL _settingsAreValid;
	NGSSettingsManager* _glanceManager;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                           //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL settingsAreValid;                             //@synthesize settingsAreValid=_settingsAreValid - In the implementation block
@property (nonatomic,readonly) NGSSettingsManager * glanceManager;              //@synthesize glanceManager=_glanceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGlanceManager;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_loadSettings;
-(void)settingsManagerReloadedGlances:(id)arg1 ;
-(void)loadSettingsIfNeeded;
-(NGSSettingsManager *)glanceManager;
-(BOOL)settingsAreValid;
-(void)setSettingsAreValid:(BOOL)arg1 ;
@end

