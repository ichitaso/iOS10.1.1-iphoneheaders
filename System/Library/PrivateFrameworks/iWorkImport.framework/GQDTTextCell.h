/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@class GQDWPLayoutStorage;

@interface GQDTTextCell : GQDTCell {

	CFStringRef mStringValue;
	GQDWPLayoutStorage* mLayoutStorage;

}
-(int)readContentForTextCell:(xmlTextReaderRef)arg1 ;
-(int)readContentForTCell:(xmlTextReaderRef)arg1 ;
-(id)layoutStorage;
-(void)dealloc;
-(CFStringRef)stringValue;
@end

