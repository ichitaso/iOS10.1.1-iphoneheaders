/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDCanvasSelection.h>

@class NSSet;

@interface KNCanvasSelection : TSDCanvasSelection {

	NSSet* mBuildChunks;

}

@property (nonatomic,readonly) NSSet * unlockedDrawableInfos; 
@property (nonatomic,readonly) NSSet * drawableInfos; 
@property (nonatomic,readonly) NSSet * buildChunks; 
@property (nonatomic,readonly) NSSet * unlockedInfosSupportingHyperlinkActions; 
@property (nonatomic,readonly) BOOL containsOnlyUnlockedInfosSupportingHyperlinkActions; 
+(Class)archivedSelectionClass;
+(id)emptySelection;
-(id)initWithInfos:(id)arg1 ;
-(id)UUIDDescription;
-(NSSet *)buildChunks;
-(id)initWithPersistableInfos:(id)arg1 drawableToActionGhostIndexPromiseMap:(id)arg2 buildChunks:(id)arg3 ;
-(id)initWithInfos:(id)arg1 buildChunks:(id)arg2 ;
-(id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)arg1 ;
-(NSSet *)unlockedDrawableInfos;
-(NSSet *)unlockedInfosSupportingHyperlinkActions;
-(id)copyExcludingBuildChunks:(id)arg1 ;
-(id)copyReplacingChunksWithChunks:(id)arg1 ;
-(BOOL)containsBuildChunksOfAnimationType:(long long)arg1 ;
-(BOOL)containsOnlyUnlockedInfosSupportingHyperlinkActions;
-(NSSet *)drawableInfos;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
