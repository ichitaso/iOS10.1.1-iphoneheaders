/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface CloudLoadBulkArtworkInfoOperation : CloudLibraryOperation {

	NSArray* _cloudIDs;
	BOOL _useLongIDs;
	unsigned char _itemKind;
	NSArray* _cloudArtworkInfoDictionaries;

}

@property (nonatomic,readonly) BOOL useLongIDs;                                     //@synthesize useLongIDs=_useLongIDs - In the implementation block
@property (nonatomic,readonly) unsigned char itemKind;                              //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) NSArray * cloudArtworkInfoDictionaries;              //@synthesize cloudArtworkInfoDictionaries=_cloudArtworkInfoDictionaries - In the implementation block
-(BOOL)useLongIDs;
-(id)initWithCloudIDs:(id)arg1 ;
-(NSArray *)cloudArtworkInfoDictionaries;
-(void)main;
-(unsigned char)itemKind;
@end

