/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand> {

	NSMutableDictionary* _seen;
	NSMutableArray* _commands;

}

@property (nonatomic,retain) NSMutableDictionary * seen;              //@synthesize seen=_seen - In the implementation block
@property (nonatomic,retain) NSMutableArray * commands;               //@synthesize commands=_commands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)applyToString:(id)arg1 ;
-(NSMutableArray *)commands;
-(void)setCommands:(NSMutableArray *)arg1 ;
-(BOOL)addToGroup:(id)arg1 ;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)addSeenRange:(TopoIDRange)arg1 ;
-(void)setSeen:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)seen;
-(void)closeGroup;
-(void)addCommand:(id)arg1 ;
@end

