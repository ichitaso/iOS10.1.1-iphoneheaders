/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, FCFeedEdition, NSArray;


@protocol FCFeedGroupOutlining <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) long long groupType; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) FCFeedEdition * edition; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned long long mergeID; 
@property (nonatomic,copy,readonly) NSArray * headlines; 
@property (nonatomic,copy,readonly) NSString * backingTagID; 
@required
-(NSString *)name;
-(NSString *)identifier;
-(unsigned long long)options;
-(FCFeedEdition *)edition;
-(NSString *)sourceIdentifier;
-(NSDate *)creationDate;
-(long long)groupType;
-(unsigned long long)mergeID;
-(NSArray *)headlines;
-(NSString *)backingTagID;

@end
