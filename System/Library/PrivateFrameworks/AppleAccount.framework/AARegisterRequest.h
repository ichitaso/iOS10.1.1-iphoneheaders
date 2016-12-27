/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAuthenticateRequest.h>

@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest {

	NSMutableDictionary* _additionalCookieHeaders;

}
+(Class)responseClass;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(void)addCookieHeaders:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;
@end
