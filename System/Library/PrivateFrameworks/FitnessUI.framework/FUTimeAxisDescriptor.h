/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FUAxisDescriptor.h>

@class UIFont, UIColor, NSArray, NSMutableArray, NSMutableDictionary, NSDateComponents, FUDateAnchorRule, NSString;

@interface FUTimeAxisDescriptor : NSObject <FUAxisDescriptor> {

	NSArray* _cachedAxisLabels;
	NSArray* _cachedAxisSubLabels;
	NSMutableArray* _cachedAxisLabelColors;
	NSMutableDictionary* _hourFormatters;
	NSMutableDictionary* _weekdayFormatters;
	NSMutableDictionary* _dayFormatters;
	NSMutableDictionary* _monthFormatters;
	NSMutableDictionary* _yearFormatters;
	BOOL _hideClippedLabels;
	BOOL _generateSubAxisDescriptorOnlyForNoonMidnight;
	BOOL _subAxisCapitalize;
	id _minValue;
	id _maxValue;
	unsigned long long _labelAlignment;
	UIFont* _labelFont;
	UIColor* _highlightedLabelColor;
	UIColor* _unhighlightedLabelColor;
	UIColor* _selectedLabelColor;
	double _axisDescriptorPadding;
	double _subAxisDescriptorPadding;
	UIFont* _subLabelFont;
	UIColor* _highlightedSubLabelColor;
	UIColor* _unhighlightedSubLabelColor;
	unsigned long long _textStyle;
	NSDateComponents* _axisSpacing;
	FUDateAnchorRule* _anchorRule;
	unsigned long long _timeInterval;
	unsigned long long _subTextStyle;
	NSDateComponents* _subAxisSpacing;
	FUDateAnchorRule* _subAnchorRule;
	unsigned long long _subTimeInterval;
	double _subAxisVerticalPadding;

}

@property (assign,nonatomic) unsigned long long textStyle;                                   //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSDateComponents * axisSpacing;                                 //@synthesize axisSpacing=_axisSpacing - In the implementation block
@property (nonatomic,retain) FUDateAnchorRule * anchorRule;                                  //@synthesize anchorRule=_anchorRule - In the implementation block
@property (assign,nonatomic) unsigned long long timeInterval;                                //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) unsigned long long subTextStyle;                                //@synthesize subTextStyle=_subTextStyle - In the implementation block
@property (nonatomic,retain) NSDateComponents * subAxisSpacing;                              //@synthesize subAxisSpacing=_subAxisSpacing - In the implementation block
@property (nonatomic,retain) FUDateAnchorRule * subAnchorRule;                               //@synthesize subAnchorRule=_subAnchorRule - In the implementation block
@property (assign,nonatomic) unsigned long long subTimeInterval;                             //@synthesize subTimeInterval=_subTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL generateSubAxisDescriptorOnlyForNoonMidnight;              //@synthesize generateSubAxisDescriptorOnlyForNoonMidnight=_generateSubAxisDescriptorOnlyForNoonMidnight - In the implementation block
@property (assign,nonatomic) BOOL subAxisCapitalize;                                         //@synthesize subAxisCapitalize=_subAxisCapitalize - In the implementation block
@property (assign,nonatomic) double subAxisVerticalPadding;                                  //@synthesize subAxisVerticalPadding=_subAxisVerticalPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id minValue;                                                    //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,retain) id maxValue;                                                    //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) unsigned long long labelAlignment;                              //@synthesize labelAlignment=_labelAlignment - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                                             //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIFont * subLabelFont;                                          //@synthesize subLabelFont=_subLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * highlightedLabelColor;                                //@synthesize highlightedLabelColor=_highlightedLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * unhighlightedLabelColor;                              //@synthesize unhighlightedLabelColor=_unhighlightedLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedLabelColor;                                   //@synthesize selectedLabelColor=_selectedLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedSubLabelColor;                             //@synthesize highlightedSubLabelColor=_highlightedSubLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * unhighlightedSubLabelColor;                           //@synthesize unhighlightedSubLabelColor=_unhighlightedSubLabelColor - In the implementation block
@property (assign,nonatomic) double axisDescriptorPadding;                                   //@synthesize axisDescriptorPadding=_axisDescriptorPadding - In the implementation block
@property (assign,nonatomic) double subAxisDescriptorPadding;                                //@synthesize subAxisDescriptorPadding=_subAxisDescriptorPadding - In the implementation block
@property (assign,nonatomic) BOOL hideClippedLabels;                                         //@synthesize hideClippedLabels=_hideClippedLabels - In the implementation block
+(unsigned long long)_getSpacingInterval:(id)arg1 ;
-(id)init;
-(id)minValue;
-(unsigned long long)timeInterval;
-(void)setTimeInterval:(unsigned long long)arg1 ;
-(unsigned long long)textStyle;
-(void)setTextStyle:(unsigned long long)arg1 ;
-(id)_labelAtIndex:(unsigned long long)arg1 ;
-(id)maxValue;
-(void)setMaxValue:(id)arg1 ;
-(void)setMinValue:(id)arg1 ;
-(void)invalidateCaches;
-(BOOL)_assertPropertiesValid;
-(id)axisLabels;
-(void)selectLabel:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(id)axisSubLabels;
-(double)axisDescriptorPadding;
-(BOOL)hideClippedLabels;
-(UIFont *)subLabelFont;
-(double)subAxisDescriptorPadding;
-(double)subAxisVerticalPadding;
-(NSDateComponents *)subAxisSpacing;
-(void)setSubTextStyle:(unsigned long long)arg1 ;
-(void)_clearFormatters;
-(id)_getLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3 ;
-(id)_getSubLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3 ;
-(id)_getStartDateFromTimeInterval:(unsigned long long)arg1 ;
-(id)_stringFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3 ;
-(long long)_hourComponentFromDate:(id)arg1 ;
-(id)_newSubLabelFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3 ;
-(id)hourFormatter:(unsigned long long)arg1 ;
-(id)weekdayFormatter:(unsigned long long)arg1 ;
-(id)dayFormatter:(unsigned long long)arg1 ;
-(id)monthFormatter:(unsigned long long)arg1 ;
-(id)yearFormatter:(unsigned long long)arg1 ;
-(unsigned long long)numLabels;
-(void)_generateAxisSubLabels;
-(id)_subLabelAtIndex:(unsigned long long)arg1 ;
-(Class)expectedDataType;
-(id)positionForLabelAtIndex:(unsigned long long)arg1 ;
-(id)textForLabelAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numSubLabels;
-(id)positionForSubLabelAtIndex:(unsigned long long)arg1 ;
-(id)textForSubLabelAtIndex:(unsigned long long)arg1 ;
-(void)setSubLabelFont:(UIFont *)arg1 ;
-(UIColor *)highlightedLabelColor;
-(void)setHighlightedLabelColor:(UIColor *)arg1 ;
-(UIColor *)unhighlightedLabelColor;
-(void)setUnhighlightedLabelColor:(UIColor *)arg1 ;
-(UIColor *)selectedLabelColor;
-(void)setSelectedLabelColor:(UIColor *)arg1 ;
-(UIColor *)highlightedSubLabelColor;
-(void)setHighlightedSubLabelColor:(UIColor *)arg1 ;
-(UIColor *)unhighlightedSubLabelColor;
-(void)setUnhighlightedSubLabelColor:(UIColor *)arg1 ;
-(void)setAxisDescriptorPadding:(double)arg1 ;
-(void)setSubAxisDescriptorPadding:(double)arg1 ;
-(void)setHideClippedLabels:(BOOL)arg1 ;
-(void)setAxisSpacing:(NSDateComponents *)arg1 ;
-(void)setSubAxisSpacing:(NSDateComponents *)arg1 ;
-(NSDateComponents *)axisSpacing;
-(FUDateAnchorRule *)anchorRule;
-(void)setAnchorRule:(FUDateAnchorRule *)arg1 ;
-(unsigned long long)subTextStyle;
-(FUDateAnchorRule *)subAnchorRule;
-(void)setSubAnchorRule:(FUDateAnchorRule *)arg1 ;
-(unsigned long long)subTimeInterval;
-(void)setSubTimeInterval:(unsigned long long)arg1 ;
-(BOOL)generateSubAxisDescriptorOnlyForNoonMidnight;
-(void)setGenerateSubAxisDescriptorOnlyForNoonMidnight:(BOOL)arg1 ;
-(BOOL)subAxisCapitalize;
-(void)setSubAxisCapitalize:(BOOL)arg1 ;
-(void)setSubAxisVerticalPadding:(double)arg1 ;
-(unsigned long long)labelAlignment;
-(void)setLabelAlignment:(unsigned long long)arg1 ;
-(void)_clearCache;
-(void)_generateAxisLabels;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
@end
