/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTPBIAdConfig;

@interface FCIAdConfiguration : NSObject {

	NTPBIAdConfig* _pbConfig;
	BOOL _segmentsEnabled;
	double _segmentsThreshold;
	long long _segmentsSubmissionFrequency;
	long long _segmentsHistoryWindowInterval;
	long long _segmentsMinimumArticleCount;

}

@property (getter=areSegmentsEnabled,nonatomic,readonly) BOOL segmentsEnabled;              //@synthesize segmentsEnabled=_segmentsEnabled - In the implementation block
@property (nonatomic,readonly) double segmentsThreshold;                                    //@synthesize segmentsThreshold=_segmentsThreshold - In the implementation block
@property (nonatomic,readonly) long long segmentsSubmissionFrequency;                       //@synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency - In the implementation block
@property (nonatomic,readonly) long long segmentsHistoryWindowInterval;                     //@synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval - In the implementation block
@property (nonatomic,readonly) long long segmentsMinimumArticleCount;                       //@synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPBIAdConfig:(id)arg1 ;
-(double)segmentsThreshold;
-(long long)segmentsSubmissionFrequency;
-(long long)segmentsHistoryWindowInterval;
-(BOOL)areSegmentsEnabled;
-(long long)segmentsMinimumArticleCount;
@end

