/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBarItem.h>

@class NSString, UIImage, UITabBarButton, _UITabBarItemAppearanceStorage, UIColor;

@interface UITabBarItem : UIBarItem {

	NSString* _title;
	SEL _action;
	id _target;
	UIImage* _templateImage;
	UIImage* _selectedTemplateImage;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	UIEdgeInsets _imageInsets;
	NSString* _badgeValue;
	UITabBarButton* _view;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	}  _tabBarItemFlags;
	long long __barMetrics;
	long long __imageStyle;
	UIColor* __tintColor;

}

@property (assign,setter=_setBarMetrics:,nonatomic) long long _barMetrics;                        //@synthesize _barMetrics=__barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) long long _imageStyle;                        //@synthesize _imageStyle=__imageStyle - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                          //@synthesize _tintColor=__tintColor - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) BOOL _selected; 
@property (nonatomic,retain) UIImage * selectedImage; 
@property (nonatomic,copy) NSString * badgeValue;                                                 //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) UIColor * badgeColor; 
+(id)_appearanceBlindViewClasses;
-(void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3 ;
-(id)init;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)view;
-(id)title;
-(SEL)action;
-(void)setView:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)image;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)_updateView;
-(BOOL)isSystemItem;
-(long long)systemItem;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(UIColor *)_tintColor;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 ;
-(UIImage *)selectedImage;
-(id)unselectedImage;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2 ;
-(id)_internalTitle;
-(NSString *)badgeValue;
-(id)_internalTemplateImage;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(BOOL)_isSelected;
-(long long)_barMetrics;
-(long long)_imageStyle;
-(void)_setBarMetrics:(long long)arg1 ;
-(void)_setImageStyle:(long long)arg1 ;
-(void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2 ;
-(void)_updateButtonForTintColor:(id)arg1 selected:(BOOL)arg2 ;
-(id)_updateImageWithTintColor:(id)arg1 isSelected:(BOOL)arg2 getImageOffset:(UIOffset*)arg3 ;
-(UIEdgeInsets)imageInsets;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(BOOL)hasTitle;
-(id)resolvedTitle;
-(id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(id)_createViewForTabBar:(id)arg1 asProxyView:(BOOL)arg2 ;
-(void)_setSelected:(BOOL)arg1 ;
-(void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3 ;
-(void)_updateViewAndPositionItems:(BOOL)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(UIColor *)badgeColor;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(void)_updateToMatchCurrentState;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)_setInternalTitle:(id)arg1 ;
-(void)_setInternalTemplateImage:(id)arg1 ;
-(id)_internalTemplateImages;
-(void)_updateViewBadge;
-(id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 ;
-(void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2 ;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
-(void)setAnimatedBadge:(BOOL)arg1 ;
-(BOOL)animatedBadge;
-(void)setUnselectedImage:(id)arg1 ;
@end
