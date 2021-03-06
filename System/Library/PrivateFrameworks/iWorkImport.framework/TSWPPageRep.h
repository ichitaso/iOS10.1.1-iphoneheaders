/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContainerRep.h>

@class NSTimer;

@interface TSWPPageRep : TSDContainerRep {

	NSTimer* editingDidBeginTimer;

}

@property (nonatomic,retain) NSTimer * editingDidBeginTimer; 
+(id)p_overflowKnobImage;
-(void)updateFromLayout;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(void)p_updateLayoutBordersVisibility;
-(void)p_updateBorderLayers;
-(BOOL)p_hasValidHeaderFooterForType:(int)arg1 ;
-(NSTimer *)editingDidBeginTimer;
-(void)setEditingDidBeginTimer:(NSTimer *)arg1 ;
-(BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1 ;
-(int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(CGPoint)arg2 ;
-(id)p_hitRep:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg1 ;
-(void)p_createHeaderFooterOverflowIndicatorLayerIfNecessaryForType:(int)arg1 fragment:(int)arg2 ;
-(BOOL)p_headerFooterBorderVisibleForType:(int)arg1 ;
-(void)cleanUpTimer;
-(void)dealloc;
@end

