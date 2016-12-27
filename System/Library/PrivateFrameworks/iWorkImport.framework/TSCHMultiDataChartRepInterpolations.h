/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface TSCHMultiDataChartRepInterpolations : NSObject {

	CAMediaTimingFunction* mOverallTimingFunction;
	CAMediaTimingFunction* mIndividualTimingFunction;

}

@property (nonatomic,readonly) CAMediaTimingFunction * overall; 
@property (nonatomic,readonly) CAMediaTimingFunction * individual; 
+(id)interpolationsWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2 ;
-(id)initWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2 ;
-(CAMediaTimingFunction *)individual;
-(void)dealloc;
-(CAMediaTimingFunction *)overall;
@end
