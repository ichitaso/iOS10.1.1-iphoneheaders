/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBIconLayoutOverrideStrategy : NSObject {

	UIEdgeInsets _layoutInsets;
	BOOL _preservesCurrentListOrigin;

}

@property (nonatomic,readonly) UIEdgeInsets layoutInsets;                    //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (nonatomic,readonly) BOOL preservesCurrentListOrigin;              //@synthesize preservesCurrentListOrigin=_preservesCurrentListOrigin - In the implementation block
-(BOOL)preservesCurrentListOrigin;
-(id)initWithLayoutInsets:(UIEdgeInsets)arg1 perservingCurrentListOrigin:(BOOL)arg2 ;
-(UIEdgeInsets)layoutInsets;
@end

