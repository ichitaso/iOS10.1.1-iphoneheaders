/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSURegressionModel.h>

@interface TSUMovingAverageRegressionModel : TSURegressionModel {

	int mNumTrendPoint;
	double* mTrendXValues;
	double* mTrendYValues;

}
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5 ;
-(int)regressionType;
-(int)numCoefficients;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)rSquared;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray;
-(int)numSuperscriptRanges;
-(NSRange)superscriptRangeAtIndex:(int)arg1 ;
-(id)equationString;
-(id)initWithMappings:(int)arg1 xs:(id)arg2 ys:(id)arg3 numPeriod:(int)arg4 ;
-(int)numTrendPoint;
-(double)trendXValueAtIndex:(int)arg1 ;
-(double)trendYValueAtIndex:(int)arg1 ;
-(void)dealloc;
@end

