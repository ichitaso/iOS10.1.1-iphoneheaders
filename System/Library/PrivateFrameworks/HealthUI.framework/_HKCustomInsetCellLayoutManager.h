/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface _HKCustomInsetCellLayoutManager : UITableViewCellLayoutManager {

	double _topInset;
	double _textLabelLeftInset;

}

@property (assign,nonatomic) double topInset;                        //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double textLabelLeftInset;              //@synthesize textLabelLeftInset=_textLabelLeftInset - In the implementation block
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
-(CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 ;
-(double)textLabelLeftInset;
-(void)setTextLabelLeftInset:(double)arg1 ;
@end

