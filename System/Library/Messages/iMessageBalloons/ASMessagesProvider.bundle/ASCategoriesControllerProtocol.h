/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UICollectionView, NSString;


@protocol ASCategoriesControllerProtocol <NSObject,UICollectionViewDelegate>
@property (assign,nonatomic,__weak) id<ASCategoriesControllerDelegate> delegate; 
@property (nonatomic,readonly) id<ASCategoriesDatasourceProtocol> categoriesDatasource; 
@property (nonatomic,retain) UICollectionView * collectionView; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic) CGSize viewSize; 
@property (nonatomic,retain) id<ASCategoryProtocol> selectedCategory; 
@required
-(void)toggleSelectionHighlight:(BOOL)arg1;
-(void)fetchDatasourceIgnoringCache:(BOOL)arg1;
-(id<ASCategoriesDatasourceProtocol>)categoriesDatasource;
-(id<ASCategoryProtocol>)selectedCategory;
-(void)setSelectedCategory:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<ASCategoriesControllerDelegate>)delegate;
-(NSString *)title;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(id)arg1;
-(CGSize)viewSize;
-(void)setViewSize:(CGSize)arg1;
-(id)initWithDatasource:(id)arg1;

@end

