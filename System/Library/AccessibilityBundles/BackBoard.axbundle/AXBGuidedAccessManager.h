/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXBGuidedAccessManager : NSObject {

	id _notificationToken;
	id _guidedAccessServer;

}
+(BOOL)allowsTripleClickSheet;
+(BOOL)inGuidedAccess;
+(void)initializeMonitor;
-(void)_loadBackboardServerBundle;
-(id)_guidedAccessServer;
-(id)init;
@end

