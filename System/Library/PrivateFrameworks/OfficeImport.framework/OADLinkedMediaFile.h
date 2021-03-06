/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADMovie.h>

@class NSURL;

@interface OADLinkedMediaFile : OADMovie {

	NSURL* mUrl;
	BOOL mIsExternal;

}

@property (retain) NSURL * url; 
@property (assign) BOOL isExternal; 
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isExternal;
-(void)setIsExternal:(BOOL)arg1 ;
@end

