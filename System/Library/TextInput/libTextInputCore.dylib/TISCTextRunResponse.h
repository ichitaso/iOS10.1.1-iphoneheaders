/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {

	CFArrayRef _ctLines;
	NSMutableArray* _widths;
	CTFontRef _font;

}
+(id)textRunResponseWithFont:(CTFontRef)arg1 ;
+(id)textRunResponseByMergingResponses:(id)arg1 ;
-(void)dealloc;
-(CTFontRef)font;
-(CFArrayRef)ctLines;
-(id)widths;
@end
