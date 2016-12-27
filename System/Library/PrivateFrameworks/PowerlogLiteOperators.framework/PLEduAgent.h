/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLEduAgent : PLAgent {

	PLXPCListenerOperatorComposition* _syncBubbleStatusNotification;

}

@property (retain) PLXPCListenerOperatorComposition * syncBubbleStatusNotification;              //@synthesize syncBubbleStatusNotification=_syncBubbleStatusNotification - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventPointDefinitionMode;
+(id)entryEventPointDefinitionSyncBubble;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)logEventPointMode:(BOOL)arg1 ;
-(PLXPCListenerOperatorComposition *)syncBubbleStatusNotification;
-(void)setSyncBubbleStatusNotification:(PLXPCListenerOperatorComposition *)arg1 ;
@end
