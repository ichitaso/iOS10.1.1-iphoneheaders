/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class TSWPSelection, NSString;

@interface TSWPArchivedSelection : TSPObject <TSKArchivedSelection> {

	TSWPSelection* _selection;

}

@property (nonatomic,retain) TSWPSelection * selection;              //@synthesize selection=_selection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)dealloc;
-(TSWPSelection *)selection;
-(void)setSelection:(TSWPSelection *)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

