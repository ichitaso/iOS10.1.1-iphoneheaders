/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, SUScriptObject;

@interface SUScriptNativeObject : NSObject {

	NSLock* _lock;
	id _nativeObject;
	SUScriptObject* _scriptObject;
	BOOL _weak;

}

@property (assign,nonatomic) id object; 
@property (assign) SUScriptObject * scriptObject; 
+(void)clearWeakReferencesToObject:(id)arg1 ;
+(void)makeReferencesToObjectWeak:(id)arg1 ;
+(id)objectWithNativeObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)object;
-(void)lock;
-(void)unlock;
-(void)setObject:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(SUScriptObject *)scriptObject;
-(void)setScriptObject:(SUScriptObject *)arg1 ;
-(void)_nativeObjectBecameWeakNotification:(id)arg1 ;
@end

