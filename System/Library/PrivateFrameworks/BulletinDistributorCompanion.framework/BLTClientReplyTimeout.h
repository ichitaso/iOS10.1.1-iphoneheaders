/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BLTClientReplyTimeout : NSObject {

	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,retain) NSDate * timeout;              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;               //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(void)setTimeout:(NSDate *)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSDate *)timeout;
@end
