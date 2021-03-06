/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUCallTreeNode : NSObject {

	VMUCallTreeNode* _parent;
	NSString* _name;
	unsigned long long _address;
	unsigned _count;
	unsigned long long _numBytes;
	unsigned _numChildren;
	SCD_Union_VM2* _un;

}
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4 ;
+(id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 ;
+(id)makeFakeRootForNode:(id)arg1 ;
-(unsigned long long)numBytes;
-(void)dealloc;
-(unsigned)count;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)parent;
-(BOOL)isPseudo;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;
-(id)largestTopOfStackPath;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(unsigned)numChildren;
-(void)setNumChildren:(unsigned)arg1 ;
-(void)getBrowserName:(id)arg1 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(BOOL)arg4 ;
-(long long)compareSizeAndCount:(id)arg1 ;
-(void)parseNameIntoSymbol:(id*)arg1 library:(id*)arg2 loadAddress:(unsigned long long*)arg3 offset:(unsigned long long*)arg4 address:(unsigned long long*)arg5 suffix:(id*)arg6 ;
-(id)pseudoName;
-(id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2 ;
-(void)countFunctionOccurrencesInTree:(id)arg1 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 showPseudoNodes:(BOOL)arg2 ;
-(BOOL)callTreeHasBranches;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 showPseudoNodes:(BOOL)arg2 ;
-(id)filterOutSymbols:(id)arg1 required:(id)arg2 ;
-(id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3 ;
-(id)pruneCount:(unsigned)arg1 ;
-(id)pruneMallocSize:(unsigned long long)arg1 ;
-(id)allChildren;
-(id)browserName;
-(BOOL)symbolNameIsUnknown;
-(BOOL)isMallocBlockContentNode;
-(id)nameWithoutOffset;
-(id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 ;
-(long long)comparePuttingMainThreadFirst:(id)arg1 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 ;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 ;
-(id)invertedNode;
-(id)filterOutSymbols:(id)arg1 ;
-(id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(BOOL)arg2 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1 ;
-(unsigned long long)address;
-(void)addChild:(id)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(void)setChildren:(id)arg1 ;
@end

