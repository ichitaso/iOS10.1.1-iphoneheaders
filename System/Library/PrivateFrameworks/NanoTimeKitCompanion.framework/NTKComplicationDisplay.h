/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKComplicationDisplay <NSObject>
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@optional
-(void)setHighlighted:(BOOL)arg1;
-(BOOL)isHighlighted;
-(void)setEditing:(BOOL)arg1;
-(void)setMaxSize:(CGSize)arg1;
-(BOOL)shouldUseTemplateColors;
-(void)setShouldUseTemplateColors:(BOOL)arg1;

@required
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id)arg1;

@end
