/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {

	CFMachPortRef _machPort;
	int _styleOverrides;
	NSMutableSet* _statusBarItems;

}
-(void)dealloc;
-(int)addStyleOverrides:(int)arg1 ;
-(int)removeStyleOverrides:(int)arg1 ;
-(void)addStatusBarItem:(int)arg1 ;
-(void)removeStatusBarItem:(int)arg1 ;
-(unsigned)publisherPort;
-(id)initWithCFMachPort:(CFMachPortRef)arg1 ;
-(id)statusBarItems;
-(int)styleOverrides;
@end

