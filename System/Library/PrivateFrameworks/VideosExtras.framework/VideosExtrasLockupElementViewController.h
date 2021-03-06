/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <VideosExtras/VideosExtrasViewElementViewController.h>

@class VideosExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, MPUContentSizeLayoutConstraint, IKLockupElement, NSString;

@interface VideosExtrasLockupElementViewController : VideosExtrasViewElementViewController {

	VideosExtrasConstrainedArtworkContainerView* _artworkContainerView;
	UIView* _textContainmentView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;
	NSLayoutConstraint* _artworkContainerTopConstraint;
	NSLayoutConstraint* _artworkContainerXConstraint;
	NSLayoutConstraint* _artworkContainerWidthConstraint;
	NSLayoutConstraint* _artworkContainerHeightConstraint;
	CGSize _artworkSize;
	NSLayoutConstraint* _textTopConstraint;
	NSLayoutConstraint* _textHeightConstraint;
	NSLayoutConstraint* _textCenterYConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	NSLayoutConstraint* _textTrailingConstraint;
	NSLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _titleVerticalConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	MPUContentSizeLayoutConstraint* _descriptionBaselineConstraint;

}

@property (readonly) IKLockupElement * viewElement; 
@property (readonly) NSString * descriptionTextStyle; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithViewElement:(id)arg1 ;
-(void)_handlePress:(id)arg1 ;
-(void)_prepareLayout;
-(NSString *)descriptionTextStyle;
-(void)_configureTitleLabelForTextElement:(id)arg1 ;
-(void)_configureSubtitleLabelForTextElement:(id)arg1 ;
-(void)_configureDescriptionLabelForTextElement:(id)arg1 ;
-(void)_configureArtworkViewForImageElement:(id)arg1 overlays:(id)arg2 ;
@end

