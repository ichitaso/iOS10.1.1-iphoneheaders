/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/_UIPreferredContentSizeRelayingContainer.h>

@class NSString;

@interface _UIPreferredContentSizeRelayingNavigationController : UINavigationController <_UIPreferredContentSizeRelayingContainer> {

	/*^block*/id _preferredContentSizeDidChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,copy) id preferredContentSizeDidChange;              //@synthesize preferredContentSizeDidChange=_preferredContentSizeDidChange - In the implementation block
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setPreferredContentSizeDidChange:(id)arg1 ;
-(id)preferredContentSizeDidChange;
@end
