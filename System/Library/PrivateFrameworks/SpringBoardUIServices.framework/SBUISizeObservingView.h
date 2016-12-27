/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFView.h>

@protocol SBUISizeObservingViewDelegate;
@interface SBUISizeObservingView : SBFView {

	BOOL _delegateInterestedInSizeChanges;
	id<SBUISizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBUISizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBUISizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<SBUISizeObservingViewDelegate>)delegate;
@end
