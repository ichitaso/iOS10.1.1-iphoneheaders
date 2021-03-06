/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {

	double _trackedValue;
	NSArray* _values;
	long long _valuesCount;
	long long _currentIndex;
	BOOL _isAccumulating;

}

@property (assign,nonatomic) double trackedValue;              //@synthesize trackedValue=_trackedValue - In the implementation block
@property (assign,nonatomic) BOOL isAccumulating;              //@synthesize isAccumulating=_isAccumulating - In the implementation block
-(id)init;
-(double)speed;
-(void)addValue:(double)arg1 ;
-(double)trackedValue;
-(BOOL)isAccumulating;
-(void)setIsAccumulating:(BOOL)arg1 ;
-(void)setTrackedValue:(double)arg1 ;
@end

