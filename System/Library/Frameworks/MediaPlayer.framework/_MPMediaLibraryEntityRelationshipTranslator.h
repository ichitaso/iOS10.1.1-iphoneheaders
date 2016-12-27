/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject {

	BOOL _transient;
	ModelPropertyBase* _foreignPropertyBase;
	Class _relationshipModelClass;

}

@property (assign,nonatomic) ModelPropertyBase* foreignPropertyBase;                           //@synthesize foreignPropertyBase=_foreignPropertyBase - In the implementation block
@property (assign,nonatomic) Class relationshipModelClass;                                     //@synthesize relationshipModelClass=_relationshipModelClass - In the implementation block
@property (assign,nonatomic) BOOL transient;                                                   //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) MPMediaLibraryEntityTranslator * entityTranslator; 
-(Class)relationshipModelClass;
-(MPMediaLibraryEntityTranslator *)entityTranslator;
-(ModelPropertyBase*)foreignPropertyBase;
-(void)setForeignPropertyBase:(ModelPropertyBase*)arg1 ;
-(void)setRelationshipModelClass:(Class)arg1 ;
-(BOOL)transient;
-(void)setTransient:(BOOL)arg1 ;
@end
