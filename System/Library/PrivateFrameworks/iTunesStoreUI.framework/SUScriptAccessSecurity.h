/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUScriptAccessSecurity : NSObject
-(BOOL)canAccessTelephonyInFrame:(id)arg1 error:(id*)arg2 ;
-(BOOL)canAccessFacebookWithURL:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(BOOL)_canAccessType:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(BOOL)_canAccessType:(id)arg1 withURL:(id)arg2 inFrame:(id)arg3 error:(id*)arg4 ;
-(id)_accessDictionaryForType:(id)arg1 ;
-(id)_copyResourceURLsForWebFrame:(id)arg1 ;
-(BOOL)_urls:(id)arg1 matchPatternStrings:(id)arg2 ;
-(BOOL)_url:(id)arg1 matchesExpressions:(id)arg2 ;
-(BOOL)canAccessFacebookInFrame:(id)arg1 error:(id*)arg2 ;
@end

