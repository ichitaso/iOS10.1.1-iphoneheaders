/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject {

	long long _storeItemID;
	NSDictionary* _additionalTrackMetadata;

}

@property (nonatomic,readonly) long long storeItemID;                               //@synthesize storeItemID=_storeItemID - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalTrackMetadata;              //@synthesize additionalTrackMetadata=_additionalTrackMetadata - In the implementation block
-(id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2 ;
-(id)storeItem;
-(NSDictionary *)additionalTrackMetadata;
-(long long)storeItemID;
@end

