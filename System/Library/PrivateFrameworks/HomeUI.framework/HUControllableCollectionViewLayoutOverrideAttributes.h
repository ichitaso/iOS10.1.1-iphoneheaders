/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUControllableCollectionViewLayoutOverrideAttributes : NSObject {

	long long _zIndex;
	double _alpha;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) long long zIndex;                         //@synthesize zIndex=_zIndex - In the implementation block
@property (assign,nonatomic) double alpha;                             //@synthesize alpha=_alpha - In the implementation block
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(double)alpha;
-(CGAffineTransform)transform;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
@end

