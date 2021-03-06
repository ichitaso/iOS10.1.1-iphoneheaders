/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ETPointFIFO : NSObject {

	ETPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) ETPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)flush;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(ETPointFIFO *)arg1 ;
-(ETPointFIFO *)nextFIFO;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)emitPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

