/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPSectionedCollection, NSUUID;

@interface _MPModelLibraryRegisteredTransientState : NSObject {

	long long _addState;
	long long _keepLocalState;
	MPSectionedCollection* _modelObjects;
	MPSectionedCollection* _relatedModelObjects;
	NSUUID* _token;

}

@property (assign,nonatomic) long long addState;                                     //@synthesize addState=_addState - In the implementation block
@property (assign,nonatomic) long long keepLocalState;                               //@synthesize keepLocalState=_keepLocalState - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * modelObjects;                     //@synthesize modelObjects=_modelObjects - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * relatedModelObjects;              //@synthesize relatedModelObjects=_relatedModelObjects - In the implementation block
@property (nonatomic,copy) NSUUID * token;                                           //@synthesize token=_token - In the implementation block
-(NSUUID *)token;
-(void)setToken:(NSUUID *)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setAddState:(long long)arg1 ;
-(void)setRelatedModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setKeepLocalState:(long long)arg1 ;
-(long long)addState;
-(MPSectionedCollection *)relatedModelObjects;
-(long long)keepLocalState;
@end
