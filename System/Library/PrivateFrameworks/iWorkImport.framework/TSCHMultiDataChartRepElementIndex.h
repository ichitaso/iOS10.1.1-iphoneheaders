/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying> {

	unsigned long long mSeriesIndex;
	unsigned long long mValueIndex;

}

@property (nonatomic,readonly) unsigned long long seriesIndex; 
@property (nonatomic,readonly) unsigned long long valueIndex; 
+(id)repElementIndexWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2 ;
-(id)initWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2 ;
-(id)seriesIndexSet;
-(id)valueIndexSet;
-(unsigned long long)valueIndex;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)seriesIndex;
@end

