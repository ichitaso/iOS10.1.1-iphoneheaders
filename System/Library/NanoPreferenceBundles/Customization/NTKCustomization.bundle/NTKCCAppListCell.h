/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol NTKCCAppListCellDelegate;
@class NTKCompanionApp, NTKCCGalleryCollection, NTKCCIconView, UILabel, UICollectionView, UICollectionViewFlowLayout, NSString;

@interface NTKCCAppListCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {

	NTKCompanionApp* _app;
	NTKCCGalleryCollection* _collection;
	id<NTKCCAppListCellDelegate> _delegate;
	NTKCCIconView* _icon;
	UILabel* _title;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	CGSize _faceSize;

}

@property (nonatomic,retain) NTKCCIconView * icon;                                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                         //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                       //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) CGSize faceSize;                                           //@synthesize faceSize=_faceSize - In the implementation block
@property (nonatomic,retain) NTKCompanionApp * app;                                     //@synthesize app=_app - In the implementation block
@property (nonatomic,retain) NTKCCGalleryCollection * collection;                       //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCCAppListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)rowHeight;
+(id)reuseIdentifier;
-(CGPoint)_contentInsetPoint;
-(double)_spacing;
-(void)updateIcon;
-(void)_fontSizeDidChange;
-(void)setFaceSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<NTKCCAppListCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(UILabel *)arg1 ;
-(id<NTKCCAppListCellDelegate>)delegate;
-(CGPoint)contentOffset;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UILabel *)title;
-(void)setContentOffset:(CGPoint)arg1 ;
-(UICollectionViewFlowLayout *)layout;
-(UICollectionView *)collectionView;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setIcon:(NTKCCIconView *)arg1 ;
-(NTKCCIconView *)icon;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)faceSize;
-(NTKCompanionApp *)app;
-(NTKCCGalleryCollection *)collection;
-(void)setCollection:(NTKCCGalleryCollection *)arg1 ;
-(void)setApp:(NTKCompanionApp *)arg1 ;
@end
