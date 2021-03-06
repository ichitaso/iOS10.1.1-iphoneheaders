/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL, NSData, NSFileWrapper;

@interface QLZipArchive : NSObject {

	archiveRef _archive;
	NSURL* _url;
	NSData* _data;
	NSFileWrapper* _fileWrapper;

}
-(void)dealloc;
-(id)fileWrapper;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)readCurrentDataWithEntry:(archive_entryRef)arg1 error:(id*)arg2 ;
-(BOOL)_reopenWithError:(id*)arg1 ;
-(id)libarchiveError;
-(void)enumerateEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end

