/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTSubheaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * leftText; 
@property (nonatomic,retain) SAUIDecoratedText * rightText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subheaderItem;
+(id)subheaderItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)leftText;
-(void)setLeftText:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)rightText;
-(void)setRightText:(SAUIDecoratedText *)arg1 ;
@end

