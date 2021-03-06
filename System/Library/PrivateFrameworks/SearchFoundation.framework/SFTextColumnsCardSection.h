/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSection.h>

@class NSString, NSArray;

@interface SFTextColumnsCardSection : SFCardSection {

	NSString* _title;
	long long _titleWeight;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long titleWeight;              //@synthesize titleWeight=_titleWeight - In the implementation block
@property (nonatomic,copy) NSArray * columns;                    //@synthesize columns=_columns - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)titleWeight;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setTitleWeight:(long long)arg1 ;
@end

