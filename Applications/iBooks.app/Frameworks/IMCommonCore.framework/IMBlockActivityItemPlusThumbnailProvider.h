/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <IMCommonCore/IMBlockActivityItemProvider.h>

@interface IMBlockActivityItemPlusThumbnailProvider : IMBlockActivityItemProvider {

	/*^block*/id _thumbnailResolutionBlock;

}

@property (nonatomic,copy) id thumbnailResolutionBlock;              //@synthesize thumbnailResolutionBlock=_thumbnailResolutionBlock - In the implementation block
-(id)initWithUTI:(id)arg1 resolutionBlock:(/*^block*/id)arg2 thumbnailResolutionBlock:(/*^block*/id)arg3 ;
-(id)thumbnailResolutionBlock;
-(void)setThumbnailResolutionBlock:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
@end

