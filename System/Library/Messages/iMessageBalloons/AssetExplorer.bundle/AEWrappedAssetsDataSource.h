/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class PUAssetsDataSource;

@interface AEWrappedAssetsDataSource : PXAssetsDataSource {

	PUAssetsDataSource* __reviewAssetsDataSource;

}

@property (nonatomic,readonly) PUAssetsDataSource * _reviewAssetsDataSource;              //@synthesize _reviewAssetsDataSource=__reviewAssetsDataSource - In the implementation block
-(id)initWithReviewAssetsDataSource:(id)arg1 ;
-(PUAssetsDataSource *)_reviewAssetsDataSource;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
@end

