/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDText;

@interface WDBlock : NSObject {

	WDText* mText;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)text;
-(id)initWithText:(id)arg1 ;
-(id)document;
-(int)blockType;
-(int)textType;
-(void)clearProperties;
-(id)runIterator;
-(id)newRunIterator;
@end

