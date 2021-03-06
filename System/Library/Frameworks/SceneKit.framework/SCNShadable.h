/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SCNProgram, NSDictionary;


@protocol SCNShadable <NSObject>
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@optional
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setProgram:(id)arg1;
-(SCNProgram *)program;
-(NSDictionary *)shaderModifiers;
-(void)setShaderModifiers:(id)arg1;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

