/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADTableStyleResolver.h>

@class OADTextListStyle;

@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver {

	OADTextListStyle* _parentTextListStyle;

}

@property (nonatomic,readonly) OADTextListStyle * parentTextListStyle;              //@synthesize parentTextListStyle=_parentTextListStyle - In the implementation block
-(void)dealloc;
-(void)applyTextStyle:(id)arg1 toParagraph:(id)arg2 ;
-(void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6 ;
-(void)fixFill:(id)arg1 ;
-(void)applyTextBodyPropertiesToCellPropertiesInCell:(id)arg1 ;
-(void)removeUnnecessaryOverridesInCellProperties:(id)arg1 strokeType:(int)arg2 resolvedStroke:(id)arg3 ;
-(OADTextListStyle *)parentTextListStyle;
-(id)initWithTable:(id)arg1 parentTextListStyle:(id)arg2 ;
@end

