/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDBezierPathSource.h>
#import <iWorkImport/TSDSmartPathSource.h>

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource> {

	int mType;
	double mOutsetFrom;
	double mOutsetTo;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) double outsetFrom; 
@property (assign,nonatomic) double outsetTo; 
+(id)pathSourceAtAngleOfSize:(CGSize)arg1 forType:(int)arg2 ;
+(id)pathSourceOfLength:(double)arg1 ;
-(id)initWithBezierPath:(id)arg1 ;
-(void)bend;
-(BOOL)isLineSegment;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(double)outsetFrom;
-(double)outsetTo;
-(void)p_setBezierPath:(id)arg1 ;
-(void)setOutsetFrom:(double)arg1 ;
-(void)setOutsetTo:(double)arg1 ;
-(long long)pathElementIndexForKnobTag:(unsigned long long)arg1 ;
-(CGPoint)fixedPointForControlKnobChange;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)bezierPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
@end
