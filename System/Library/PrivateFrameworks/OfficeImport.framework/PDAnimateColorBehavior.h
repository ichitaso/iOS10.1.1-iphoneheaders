/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {

	BOOL mHasBy;
	double mBy[3];
	BOOL mHasFrom;
	OADColor* mFrom;
	BOOL mHasTo;
	OADColor* mTo;
	BOOL mHasColorSpace;
	int mColorSpace;
	BOOL mHasColorDirection;
	int mDirection;

}
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(int)colorSpace;
-(void)setFrom:(id)arg1 ;
-(BOOL)hasFrom;
-(void)setTo:(id)arg1 ;
-(BOOL)hasTo;
-(id)from;
-(id)to;
-(double*)by;
-(void)setBy:(double)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasColorSpace;
-(void)setColorSpace:(int)arg1 ;
-(BOOL)hasColorDirection;
@end

