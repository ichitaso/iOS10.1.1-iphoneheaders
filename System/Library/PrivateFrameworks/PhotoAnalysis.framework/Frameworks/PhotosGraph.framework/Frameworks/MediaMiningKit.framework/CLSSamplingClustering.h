/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDataDensityClustering.h>

@interface CLSSamplingClustering : CLSDataDensityClustering {

	unsigned long long _numberOfClusters;

}

@property (assign,nonatomic) unsigned long long numberOfClusters;              //@synthesize numberOfClusters=_numberOfClusters - In the implementation block
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfClusters;
-(void)setNumberOfClusters:(unsigned long long)arg1 ;
@end

