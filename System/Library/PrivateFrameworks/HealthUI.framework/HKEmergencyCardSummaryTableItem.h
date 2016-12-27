/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {

	HKMedicalIDPersonSummaryCell* _cell;

}
-(void)setData:(id)arg1 ;
-(UIEdgeInsets)separatorInset;
-(id)_cell;
-(void)localeDidChange:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(void)timeZoneDidChange:(id)arg1 ;
@end
