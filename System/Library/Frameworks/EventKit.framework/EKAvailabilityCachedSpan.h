/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, EKAvailabilitySpan;

@interface EKAvailabilityCachedSpan : NSObject {

	NSDate* _creationDate;
	EKAvailabilitySpan* _span;

}

@property (nonatomic,retain) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) EKAvailabilitySpan * span;              //@synthesize span=_span - In the implementation block
-(id)description;
-(EKAvailabilitySpan *)span;
-(void)setSpan:(EKAvailabilitySpan *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
@end

