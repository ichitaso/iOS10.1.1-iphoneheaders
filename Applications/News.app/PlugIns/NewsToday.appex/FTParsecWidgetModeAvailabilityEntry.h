/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/FTWidgetModeAvailabilityEntry.h>

@class NSString;

@interface FTParsecWidgetModeAvailabilityEntry : NSObject <FTWidgetModeAvailabilityEntry> {

	/*^block*/id _availabilityChangedNotificationBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class widgetModeContextClass; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock;              //@synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock - In the implementation block
-(Class)widgetModeContextClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
-(id)init;
-(BOOL)isAvailable;
@end
