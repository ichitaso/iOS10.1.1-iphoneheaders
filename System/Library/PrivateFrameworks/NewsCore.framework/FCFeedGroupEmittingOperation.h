/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol NSCoding;
@class FCFeedGroupEmittingContext, NSString, FCFeedGroup;

@interface FCFeedGroupEmittingOperation : FCOperation {

	/*^block*/id _groupEmittingCompletionHandler;
	FCFeedGroupEmittingContext* _context;
	id<NSCoding> _cursor;
	id<NSCoding> _toCursor;
	NSString* _groupEmitterIdentifier;
	FCFeedGroup* _resultGroup;
	id<NSCoding> _resultCursor;

}

@property (nonatomic,copy) id groupEmittingCompletionHandler;                       //@synthesize groupEmittingCompletionHandler=_groupEmittingCompletionHandler - In the implementation block
@property (nonatomic,readonly) FCFeedGroupEmittingContext * context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<NSCoding> cursor;                                 //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) id<NSCoding> toCursor;                               //@synthesize toCursor=_toCursor - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier;              //@synthesize groupEmitterIdentifier=_groupEmitterIdentifier - In the implementation block
@property (nonatomic,retain) FCFeedGroup * resultGroup;                             //@synthesize resultGroup=_resultGroup - In the implementation block
@property (nonatomic,retain) id<NSCoding> resultCursor;                             //@synthesize resultCursor=_resultCursor - In the implementation block
-(FCFeedGroupEmittingContext *)context;
-(id<NSCoding>)cursor;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSString *)groupEmitterIdentifier;
-(id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(void)setResultCursor:(id<NSCoding>)arg1 ;
-(void)setResultGroup:(FCFeedGroup *)arg1 ;
-(id<NSCoding>)resultCursor;
-(id<NSCoding>)toCursor;
-(void)setGroupEmittingCompletionHandler:(id)arg1 ;
-(id)groupEmittingCompletionHandler;
-(FCFeedGroup *)resultGroup;
@end

