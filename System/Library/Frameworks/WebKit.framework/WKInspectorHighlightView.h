/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface WKInspectorHighlightView : UIView {

	NSMutableArray* _layers;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)update:(const Highlight*)arg1 ;
-(void)_removeAllLayers;
-(void)_createLayers:(unsigned long long)arg1 ;
-(void)_layoutForNodeHighlight:(const Highlight*)arg1 offset:(unsigned)arg2 ;
-(void)_layoutForNodeListHighlight:(const Highlight*)arg1 ;
-(void)_layoutForRectsHighlight:(const Highlight*)arg1 ;
@end

