/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * securityOrigin; 
@property (assign,nonatomic) BOOL isLocalStorage; 
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setIsLocalStorage:(BOOL)arg1 ;
-(id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(BOOL)arg2 ;
-(BOOL)isLocalStorage;
-(NSString *)securityOrigin;
@end

