/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OADColorMap : NSObject {

	NSMutableDictionary* mMappings;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(void)addMapping:(int)arg1 index:(int)arg2 ;
-(int)mappingForIndex:(int)arg1 ;
-(void)addDefaultMappings:(BOOL)arg1 ;
@end

