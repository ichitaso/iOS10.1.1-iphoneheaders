/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSettings/HOSSubtitleCell.h>

@class HMHome;

@interface HOSHomeCell : HOSSubtitleCell {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;              //@synthesize home=_home - In the implementation block
-(id)sharedText;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
