/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUTableCell.h>
#import <UIKit/UITextContentViewDelegate.h>

@protocol SUTextViewCellDelegate;
@class UIScrollView, SUTextContentView, NSString;

@interface SUTextViewCell : SUTableCell <UITextContentViewDelegate> {

	id<SUTextViewCellDelegate> _delegate;
	UIScrollView* _scrollView;
	SUTextContentView* _textContentView;

}

@property (assign,nonatomic) id<SUTextViewCellDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SUTextContentView * textContentView;              //@synthesize textContentView=_textContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SUTextViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<SUTextViewCellDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)textContentViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textContentViewShouldEndEditing:(id)arg1 ;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(SUTextContentView *)textContentView;
@end

