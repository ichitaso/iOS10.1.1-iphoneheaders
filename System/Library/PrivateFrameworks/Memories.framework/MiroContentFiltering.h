/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroContentFiltering : NSObject
+(id)liveValueForKey:(id)arg1 ;
+(int)minimumDurationToFilter;
+(int)maxiumumDurationToSendAll;
+(int)minimumScoreAllowedAsBRoll;
+(int)minimumScoreAllowed;
+(double)bRollAdjustPercentageDefault;
+(double)bRollAdjustPercentageSlow;
+(double)bRollAdjustPercentageMedium;
+(double)bRollAdjustPercentageFast;
+(double)bRollAdjustForRequiredBRollPercentage;
+(int)assumedPhotoDuration;
+(double)videoTooShortInSeconds;
+(double)postSelectionDupeTestDurationInSeconds;
+(double)sloMoClusterTimeDurationInSeconds;
+(double)addBackMoreAfterDurationInSecondsFast;
+(double)addBackMoreAfterDurationInSecondsMedium;
+(double)addBackMoreAfterDurationInSecondsSlow;
+(int)clusterCountToTrim;
+(int)clusterTooLargeTrim;
+(double)shootingRatioMinBestDuration;
+(double)shootingRatioSmallSetRatio;
+(double)shootingRatioMaxDurationRatioAbove;
+(double)shootingRatioMaxOverSuggestedMultiplier;
+(double)shootingRatioMaxDurationRatioBelow;
+(int)endingGroupingCount;
+(int)minCountToAllowEndGrouping;
@end

