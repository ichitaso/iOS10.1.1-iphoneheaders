/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest {

	GEOPhotoInfo* _info;
	/*^block*/id _imageHandler;

}

@property (nonatomic,copy) id imageHandler;              //@synthesize imageHandler=_imageHandler - In the implementation block
@property (retain) GEOPhotoInfo * info;                  //@synthesize info=_info - In the implementation block
+(id)requestWithMapItem:(id)arg1 info:(id)arg2 ;
-(id)url;
-(GEOPhotoInfo *)info;
-(void)setInfo:(GEOPhotoInfo *)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)handleData:(id)arg1 ;
-(id)imageHandler;
-(void)setImageHandler:(id)arg1 ;
@end
