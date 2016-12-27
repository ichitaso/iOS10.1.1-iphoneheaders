/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSHTTPURLResponse, NSDictionary;

@interface SLFacebookResponse : NSObject <NSCoding> {

	NSData* _responseData;
	NSHTTPURLResponse* _urlResponse;
	id _untypedResponseParameters;
	long long _httpErrorCode;

}

@property (readonly) NSDictionary * responseParameters; 
@property (readonly) int APIresponseErrorCode; 
@property (readonly) long long httpErrorCode;                        //@synthesize httpErrorCode=_httpErrorCode - In the implementation block
@property (readonly) NSHTTPURLResponse * urlResponse; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasError;
-(BOOL)hasBadTokenError;
-(long long)httpErrorCode;
-(NSDictionary *)responseParameters;
-(id)untypedResponseParameters;
-(id)initWithResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(BOOL)hasHTTPStatusOK;
-(BOOL)isBatchResponse;
-(NSHTTPURLResponse *)urlResponse;
-(int)APIresponseErrorCode;
-(BOOL)hasMissingTokenOrAppID;
-(id)checkpointURL;
-(id)failedRequestIDs;
-(long long)httpStatusCode;
@end
