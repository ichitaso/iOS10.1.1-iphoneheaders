/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSString;

@interface PGPotentialBusinessMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _businessNode;
	long long _year;

}

@property (readonly) PGGraphNode * businessNode;              //@synthesize businessNode=_businessNode - In the implementation block
@property (readonly) long long year;                          //@synthesize year=_year - In the implementation block
@property (readonly) NSString * business; 
-(long long)year;
-(NSString *)business;
-(id)initWithBusinessNode:(id)arg1 year:(long long)arg2 ;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphNode *)businessNode;
@end

