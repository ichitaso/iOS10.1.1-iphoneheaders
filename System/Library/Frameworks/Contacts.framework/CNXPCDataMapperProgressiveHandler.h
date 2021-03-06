/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ProgressiveResultsHandlerProtocol.h>

@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {

	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}
-(void)dealloc;
-(void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2 ;
-(void)completedWithError:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

