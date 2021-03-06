/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCarrierBundlingController : SUScriptObject

@property (readonly) NSString * statusEligible; 
@property (readonly) NSString * statusNeedsManualVerification; 
@property (readonly) NSString * statusNotEligible; 
@property (readonly) NSString * statusUnknown; 
@property (readonly) NSString * statusUnlinked; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)attributeKeys;
-(void)updateLastKnownStatus:(id)arg1 ;
-(NSString *)statusEligible;
-(NSString *)statusNeedsManualVerification;
-(NSString *)statusNotEligible;
-(NSString *)statusUnknown;
-(NSString *)statusUnlinked;
-(id)scriptAttributeKeys;
-(id)_className;
@end

