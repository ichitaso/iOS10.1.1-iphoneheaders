/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SCNActionable <NSObject>
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
@required
-(id)actionForKey:(id)arg1;
-(void)removeAllActions;
-(BOOL)hasActions;
-(NSArray *)actionKeys;
-(void)runAction:(id)arg1 forKey:(id)arg2;
-(void)removeActionForKey:(id)arg1;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)runAction:(id)arg1;

@end
