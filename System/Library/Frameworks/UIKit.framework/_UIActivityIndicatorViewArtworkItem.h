/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@class NSString, NSArray;

@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {

	NSString* _artKey;
	NSArray* _images;
	struct {
		unsigned isDiscarded : 1;
		unsigned useCount;
	}  _flags;

}

@property (nonatomic,readonly) NSString * artKey;              //@synthesize artKey=_artKey - In the implementation block
@property (nonatomic,retain) NSArray * images;                 //@synthesize images=_images - In the implementation block
-(void)dealloc;
-(unsigned long long)hash;
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(id)initWithArtKey:(id)arg1 ;
-(NSString *)artKey;
@end
