/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateFormatter, NSNumberFormatter, NSDate;

@interface CSLDateLabelStringFormatCache : NSObject {

	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSDateFormatter* _relativeDateFormatter;
	NSDateFormatter* _dayOfWeekMonthDayFormatter;
	NSDateFormatter* _timeNoAMPMFormatter;
	NSDateFormatter* _longYMDHMSZFormatter;
	NSDateFormatter* _longYMDHMSNoSpaceFormatter;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _timerNumberFormatter;
	NSDateFormatter* _abbreviatedTimerFormatter;
	NSDateFormatter* _alarmSnoozeFormatter;
	NSDate* _timerReferenceDate;
	NSDate* _alarmReferenceDate;

}
+(id)sharedInstance;
-(void)resetFormatters:(id)arg1 ;
-(BOOL)_shouldShowHoursForTimerDuration:(double)arg1 ;
-(id)formatNumberAsDecimal:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)arg1 ;
-(id)formatTimerDuration:(double)arg1 ;
-(id)formatAbbreviatedTimerDuration:(double)arg1 ;
-(id)formatAlarmSnoozeDuration:(double)arg1 ;
-(id)init;
-(void)resetFormattersIfNecessary;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1 ;
-(id)formatDateAsTimeNoAMPM:(id)arg1 ;
-(id)formatDateAsLongYMDHMSZWithDate:(id)arg1 ;
-(id)formatDateAsTimeStyle:(id)arg1 ;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)arg1 ;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsRelativeDateStyle:(id)arg1 ;
-(id)formatDateAsDayMonthYearStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)arg1 ;
-(id)formatDateAsDayOfWeek:(id)arg1 ;
@end
