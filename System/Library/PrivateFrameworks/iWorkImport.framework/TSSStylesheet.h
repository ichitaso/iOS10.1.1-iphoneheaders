/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKTransformableObject.h>

@class TSUMutableRetainedPointerSet, NSMutableDictionary, TSURetainedPointerKeyDictionary, TSWPParagraphStyle, NSSet, NSString;

@interface TSSStylesheet : TSPObject <TSKTransformableObject> {

	TSSStylesheet* mParent;
	TSSStylesheet* mChild;
	TSUMutableRetainedPointerSet* mStyles;
	NSMutableDictionary* mIdentifierToStyleMap;
	TSURetainedPointerKeyDictionary* mParentToChildrenStyleMap;
	NSMutableDictionary* mUUIDToStyleMap;
	BOOL mIsLocked;
	BOOL mCanCullStyles;
	BOOL mBaseStyleSetUpdated;

}

@property (nonatomic,readonly) TSWPParagraphStyle * defaultPresenterNotesParagraphStyle; 
@property (nonatomic,readonly) TSSStylesheet * parent; 
@property (nonatomic,readonly) TSSStylesheet * child; 
@property (assign,nonatomic) BOOL isLocked; 
@property (assign,nonatomic) BOOL canCullStyles; 
@property (nonatomic,readonly) NSSet * styles; 
@property (nonatomic,readonly) NSSet * baseStyles; 
@property (nonatomic,readonly) BOOL baseStyleSetUpdated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3 ;
+(id)presenterNotesParagraphStyleIdentifier;
+(id)p_presenterNotesListStyleIdentifierForListLabelType:(int)arg1 ;
-(id)styleWithIdentifier:(id)arg1 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)hyperlinkStyle;
-(id)rootAncestor;
-(id)defaultColumnStyle;
-(id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3 ;
-(void)removeStyle:(id)arg1 ;
-(id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2 ;
-(id)stylesOfClass:(Class)arg1 ;
-(id)cascadedStyleWithIdentifier:(id)arg1 ;
-(void)addStyle:(id)arg1 withIdentifier:(id)arg2 ;
-(id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3 ;
-(void)setIdentifier:(id)arg1 ofStyle:(id)arg2 ;
-(void)moveAllStylestoStylesheet:(id)arg1 stripIdentifiers:(BOOL)arg2 ;
-(void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 shouldDoDOLC:(BOOL)arg4 ;
-(id)stylesPassingTest:(/*^block*/id)arg1 ;
-(id)namedStylesOfClass:(Class)arg1 ;
-(id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 ;
-(id)addDuplicateOfStyle:(id)arg1 withIdentifier:(id)arg2 ;
-(TSSStylesheet *)child;
-(id)childrenOfStyle:(id)arg1 ;
-(BOOL)isDescendentOf:(id)arg1 ;
-(BOOL)isAncestorOf:(id)arg1 ;
-(void)style:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3 ;
-(BOOL)isChildOf:(id)arg1 ;
-(BOOL)isParentOf:(id)arg1 ;
-(id)styleWithUUIDIfAvailable:(id)arg1 ;
-(BOOL)containsStyle:(id)arg1 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)p_allFilteredIdentifiersInArchive:(const StylesheetArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveStyles:(id)arg1 toArchiver:(id)arg2 ;
-(void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 ;
-(void)unlockStylesheetForDurationOfBlock:(/*^block*/id)arg1 ;
-(unsigned long long)descendantCount;
-(id)initWithContext:(id)arg1 canCullStyles:(BOOL)arg2 ;
-(void)setParent:(id)arg1 withParentStyleMap:(CFDictionaryRef)arg2 ;
-(BOOL)p_shouldDoDOLCForStyle:(id)arg1 ;
-(void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 shouldDoDOLC:(BOOL)arg4 ;
-(void)p_removeStyle:(id)arg1 ;
-(BOOL)cascadedContainsStyle:(id)arg1 ;
-(id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2 ;
-(id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2 ;
-(void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2 ;
-(void)p_setParent:(id)arg1 ofStyle:(id)arg2 ;
-(void)enumerateStylesUsingBlock:(/*^block*/id)arg1 ;
-(id)p_stylesPassingTest:(/*^block*/id)arg1 cascade:(BOOL)arg2 ;
-(id)cascadedStylesPassingTest:(/*^block*/id)arg1 ;
-(void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 ;
-(id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4 ;
-(void)p_addStyleToParentChildren:(id)arg1 ;
-(void)moveStyle:(id)arg1 toStylesheet:(id)arg2 stripIdentifiers:(BOOL)arg3 overwriteIdentifiers:(BOOL)arg4 ;
-(void)p_removeStyleFromParentChildren:(id)arg1 ;
-(BOOL)canCullStyles;
-(void)setCanCullStyles:(BOOL)arg1 ;
-(void)addStyle:(id)arg1 withParent:(id)arg2 ;
-(void)setParent:(id)arg1 ofStyle:(id)arg2 ;
-(id)stylesWithName:(id)arg1 ;
-(id)identifiedStyles;
-(id)identifiedStylesOfClass:(Class)arg1 ;
-(void)enumerateCascadedStylesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)baseStyleSetUpdated;
-(void)resetBaseStyleSetUpdatedFlag;
-(id)firstCascadedStylePassingTest:(/*^block*/id)arg1 ;
-(id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2 ;
-(id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3 ;
-(id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4 ;
-(id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2 ;
-(id)_defaultCharacterStyleWasCreated:(BOOL*)arg1 ;
-(id)_hyperlinkStyleWasCreated:(BOOL*)arg1 ;
-(id)_defaultParagraphStyleWasCreated:(BOOL*)arg1 ;
-(id)_defaultListStyleWasCreated:(BOOL*)arg1 ;
-(id)_defaultColumnStyleWasCreated:(BOOL*)arg1 ;
-(id)headerAndFooterStyle;
-(id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(BOOL*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)allPresenterNotesStyles;
-(void)addDefaultPresenterNotesStylesIfAbsent;
-(TSWPParagraphStyle *)defaultPresenterNotesParagraphStyle;
-(void)upgradeDefaultPresenterNotesStyles;
-(void)p_upgradeDefaultPresenterNotesStylesResetExisting:(BOOL)arg1 ;
-(id)p_boxedLabelTypesForNotesListStyles;
-(id)p_newDefaultPresenterNotesListStyleWithContext:(id)arg1 forListLabelType:(int)arg2 ;
-(id)p_defaultPresenterNotesListStylePropertyMapForListLabelType:(int)arg1 ;
-(id)p_defaultPresenterNotesParagraphStyleWithContext:(id)arg1 ;
-(id)p_defaultPresenterNotesParagraphStylePropertyMap;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isLocked;
-(id)initWithContext:(id)arg1 ;
-(id)defaultParagraphStyle;
-(TSSStylesheet *)parent;
-(void)setParent:(TSSStylesheet *)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(NSSet *)baseStyles;
-(void)addStyle:(id)arg1 ;
-(NSSet *)styles;
-(id)defaultCharacterStyle;
-(id)defaultListStyle;
@end

