/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INStartPhotoPlaybackIntentResponseExport.h>

@class NSNumber, _INPBStartPhotoPlaybackIntentResponse, NSString;

@interface INStartPhotoPlaybackIntentResponse : INIntentResponse <INStartPhotoPlaybackIntentResponseExport> {

	_INPBStartPhotoPlaybackIntentResponse* _responseMessagePBRepresentation;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * searchResultsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
+(long long)_intentHandlingStatusFromCode:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)code;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)_responseMessagePBRepresentation;
-(void)setSearchResultsCount:(NSNumber *)arg1 ;
-(NSNumber *)searchResultsCount;
@end

