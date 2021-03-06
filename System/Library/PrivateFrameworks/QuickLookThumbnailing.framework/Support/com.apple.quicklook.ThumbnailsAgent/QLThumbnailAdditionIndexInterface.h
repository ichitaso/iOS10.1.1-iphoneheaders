/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/Support/com.apple.quicklook.ThumbnailsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLThumbnailAdditionIndexInterface
@required
-(void)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeThumbnailForURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)retrieveAllAdditions:(/*^block*/id)arg1;
-(void)removeAllAdditions;
-(void)addThumbnailForURL:(id)arg1 size:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)hasThumbnailForURL:(id)arg1 updateLastHitDate:(BOOL)arg2 andSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4;

@end

