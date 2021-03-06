/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface DDScannerList : NSObject {

	int _type;
	NSMutableArray* _waitQueue;
	NSMutableArray* _scannerCache;
	NSMutableArray* _activeScanners;

}
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
-(void)enqueueJob:(/*^block*/id)arg1 ;
-(id)getCachedScanner;
-(void)activateScanner:(id)arg1 ;
-(void)pushBackScanner:(id)arg1 ;
-(/*^block*/id)dequeueJob;
-(BOOL)full;
-(id)scanner;
@end

