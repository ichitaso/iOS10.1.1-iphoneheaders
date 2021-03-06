/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSUserDefaults.h>

@protocol IKJSUserDefaults <JSExport>
@required
-(id)getData:(id)arg1;
-(void)setData:(id)arg1 :(id)arg2;
-(void)removeData:(id)arg1;

@end


@protocol IKAppUserDefaultsStoring;
@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults> {

	id<IKAppUserDefaultsStoring> _userDefaultsStorage;

}

@property (assign,nonatomic,__weak) id<IKAppUserDefaultsStoring> userDefaultsStorage;              //@synthesize userDefaultsStorage=_userDefaultsStorage - In the implementation block
-(id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2 ;
-(id)getData:(id)arg1 ;
-(void)setData:(id)arg1 :(id)arg2 ;
-(void)removeData:(id)arg1 ;
-(void)setUserDefaultsStorage:(id<IKAppUserDefaultsStoring>)arg1 ;
-(id<IKAppUserDefaultsStoring>)userDefaultsStorage;
@end

