/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SAMPSetOutputSource : SADomainCommand

@property (nonatomic,copy) NSURL * outputSourceId; 
+(id)setOutputSource;
+(id)setOutputSourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)outputSourceId;
-(void)setOutputSourceId:(NSURL *)arg1 ;
@end

