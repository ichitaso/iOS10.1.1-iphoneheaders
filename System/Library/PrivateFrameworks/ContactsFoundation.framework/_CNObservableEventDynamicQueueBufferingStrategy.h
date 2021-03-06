/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy {

	CNQueue* _queue;

}

@property (nonatomic,readonly) CNQueue * queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(CNQueue *)queue;
-(id)allEvents;
-(void)addEvent:(id)arg1 ;
@end

