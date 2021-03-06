/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _accessLevel;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(id)init;
-(CoreDAVItemWithNoChildren *)accessLevel;
-(id)copyParseRules;
-(void)setAccessLevel:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)initWithAccess:(int)arg1 ;
@end

