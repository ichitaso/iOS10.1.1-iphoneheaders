/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ASFolderChangedHistory : NSObject {

	int _count;
	NSDate* _startTime;

}

@property (assign,nonatomic) int count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
-(int)count;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setCount:(int)arg1 ;
-(NSDate *)startTime;
-(id)initWithCount:(int)arg1 ;
@end
