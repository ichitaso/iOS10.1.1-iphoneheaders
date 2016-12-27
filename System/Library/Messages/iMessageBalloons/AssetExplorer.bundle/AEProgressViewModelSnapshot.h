/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetExplorer/AssetExplorer-Structs.h>
@class NSDictionary, PXIndexPathSet;

@interface AEProgressViewModelSnapshot : NSObject {

	unsigned long long _correspondingDataSourceIdentifier;
	NSDictionary* __progressByIndexPath;
	PXIndexPathSet* __pathsWithProgress;

}

@property (nonatomic,readonly) NSDictionary * _progressByIndexPath;                               //@synthesize _progressByIndexPath=__progressByIndexPath - In the implementation block
@property (nonatomic,readonly) PXIndexPathSet * _pathsWithProgress;                               //@synthesize _pathsWithProgress=__pathsWithProgress - In the implementation block
@property (nonatomic,readonly) unsigned long long correspondingDataSourceIdentifier;              //@synthesize correspondingDataSourceIdentifier=_correspondingDataSourceIdentifier - In the implementation block
-(NSDictionary *)_progressByIndexPath;
-(BOOL)hasProgressForIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)progressForIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXIndexPathSet *)_pathsWithProgress;
-(id)initWithProgressByIndexPath:(id)arg1 dataSourceIdenfitier:(unsigned long long)arg2 ;
-(unsigned long long)correspondingDataSourceIdentifier;
@end
