/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPDrawableAttachment.h>

@class TSWPTOCInfo;

@interface TSWPTOCAttachment : TSWPDrawableAttachment

@property (nonatomic,retain,readonly) TSWPTOCInfo * tocInfo; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(TSWPTOCInfo *)tocInfo;
-(void)loadTOCAttachmentMessage:(const TOCAttachmentArchive*)arg1 fromUnarchiver:(id)arg2 ;
-(void)saveTOCAttachmentMessage:(TOCAttachmentArchive*)arg1 archiver:(id)arg2 ;
-(int)elementKind;
@end

