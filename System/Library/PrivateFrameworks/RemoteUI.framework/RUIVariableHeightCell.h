/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@interface RUIVariableHeightCell : RemoteUITableViewCell {

	BOOL _supportsAccessory;

}

@property (assign,nonatomic) BOOL supportsAccessory;              //@synthesize supportsAccessory=_supportsAccessory - In the implementation block
-(void)layoutSubviews;
-(double)height;
-(double)contentWidth;
-(CGSize)textLabelSizeForWidth:(double)arg1 ;
-(CGSize)detailLabelSizeForWidth:(double)arg1 ;
-(BOOL)supportsAccessory;
-(void)setSupportsAccessory:(BOOL)arg1 ;
@end

