/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * outputLogs; 
@property (nonatomic,copy) NSString * results; 
@property (assign,nonatomic) long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)abstractClientCommandCompleted;
+(id)abstractClientCommandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)results;
-(void)setResults:(NSString *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)outputLogs;
-(void)setOutputLogs:(NSArray *)arg1 ;
@end
