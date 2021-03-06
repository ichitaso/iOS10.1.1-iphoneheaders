/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WPZoneTrackerDelegate.h>
#import <libobjc.A.dylib/WPDeviceScannerDelegate.h>

@protocol CRKClassSessionBeaconBrowserDelegate;
@class WPZoneTracker, WPDeviceScanner, NSMutableSet, NSSet, NSString;

@interface CRKClassSessionBeaconBrowser : NSObject <WPZoneTrackerDelegate, WPDeviceScannerDelegate> {

	WPZoneTracker* mZoneTracker;
	WPDeviceScanner* mDeviceScanner;
	NSMutableSet* mScanningZones;
	long long mIncreasedScanRequestCount;
	BOOL _isBrowsing;
	BOOL _isScanning;
	id<CRKClassSessionBeaconBrowserDelegate> _delegate;
	NSSet* _organizationUUIDs;
	NSSet* _controlGroupIdentifiers;

}

@property (assign,nonatomic) BOOL isBrowsing;                                                       //@synthesize isBrowsing=_isBrowsing - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                                                       //@synthesize isScanning=_isScanning - In the implementation block
@property (assign,nonatomic,__weak) id<CRKClassSessionBeaconBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * organizationUUIDs;                                               //@synthesize organizationUUIDs=_organizationUUIDs - In the implementation block
@property (nonatomic,copy) NSSet * controlGroupIdentifiers;                                         //@synthesize controlGroupIdentifiers=_controlGroupIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOrganizationUUID:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<CRKClassSessionBeaconBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id<CRKClassSessionBeaconBrowserDelegate>)delegate;
-(void)setIsScanning:(BOOL)arg1 ;
-(void)deviceScannerDidUpdateState:(id)arg1 ;
-(void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)scanner:(id)arg1 foundRequestedDevices:(id)arg2 ;
-(void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3 ;
-(void)zoneTracker:(id)arg1 enteredZone:(id)arg2 ;
-(void)zoneTracker:(id)arg1 exitedZone:(id)arg2 ;
-(void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3 ;
-(void)zoneTrackerDidUpdateState:(id)arg1 ;
-(BOOL)isBrowsing;
-(BOOL)isScanning;
-(void)startBrowsing;
-(void)delegateDidFailWithError:(id)arg1 ;
-(void)setIsBrowsing:(BOOL)arg1 ;
-(void)updateZones;
-(void)startInitialScan;
-(void)stopScanningForDevicesInAllZones;
-(void)updateScanner;
-(void)increasedScanDurationElapsed;
-(NSSet *)organizationUUIDs;
-(id)organizationUUIDsMatchingZoneData:(id)arg1 ;
-(id)zoneDataForOrganizationUUID:(id)arg1 ;
-(void)startScanningForDevicesInZone:(id)arg1 ;
-(void)stopScanningForDevicesInZone:(id)arg1 ;
-(NSSet *)controlGroupIdentifiers;
-(void)delegateDidFindClassSession:(id)arg1 flags:(unsigned short)arg2 ;
-(void)setControlGroupIdentifiers:(NSSet *)arg1 ;
-(void)increaseScanFrequencyForDuration:(double)arg1 ;
-(id)stateDictionary;
-(void)setOrganizationUUIDs:(NSSet *)arg1 ;
-(void)stopBrowsing;
@end

