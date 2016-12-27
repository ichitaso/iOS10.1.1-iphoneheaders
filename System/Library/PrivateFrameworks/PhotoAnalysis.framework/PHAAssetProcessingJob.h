/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSArray, NSMutableDictionary;

@interface PHAAssetProcessingJob : PHAWorkerJob {

	NSArray* _assetLocalIdentifiers;
	NSMutableDictionary* _resultsByAssetLocalIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * incompleteAssetLocalIdentifiers; 
@property (nonatomic,readonly) NSMutableDictionary * resultsByAssetLocalIdentifier;              //@synthesize resultsByAssetLocalIdentifier=_resultsByAssetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * assetLocalIdentifiers;                                  //@synthesize assetLocalIdentifiers=_assetLocalIdentifiers - In the implementation block
-(unsigned long long)resultCount;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)completionScore;
-(BOOL)finished;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4 ;
-(NSArray *)assetLocalIdentifiers;
-(unsigned long long)resultForAssetLocalIdentifier:(id)arg1 ;
-(id)statusAsDictionary;
-(void)reportResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2 ;
-(NSMutableDictionary *)resultsByAssetLocalIdentifier;
-(BOOL)isEqualToWorkerJob:(id)arg1 ignoreResults:(BOOL)arg2 ;
-(unsigned long long)successfulResultCount;
-(NSArray *)incompleteAssetLocalIdentifiers;
@end
