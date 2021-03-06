/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PageImagePoolPrivate;

@interface PageImagePool : NSObject {

	PageImagePoolPrivate* _private;

}
-(void)dealloc;
-(void)_update;
-(void)_cleanup;
-(id)initWithDocumentView:(id)arg1 ;
-(BOOL)_hasWork;
-(void)updateActivePageIndex:(int)arg1 ;
-(void)cancelPageImagePool;
-(void)forceWebKitMainThread:(BOOL)arg1 ;
-(void)forceUpdateWithDuration:(double)arg1 forActivePageIndex:(int)arg2 ;
-(void)setWillForceUpdateWithDuration;
-(void)forceUpdateWithDuration:(double)arg1 ;
-(id)backgroundImageForPageIndex:(int)arg1 ;
-(void)didInsertPageAtIndex:(unsigned long long)arg1 ;
-(void)didRemovePageAtIndex:(unsigned long long)arg1 ;
-(void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2 ;
-(int)_maxPageRange;
-(int)_expectedQualityAtPageIndex:(int)arg1 ;
-(id)_pageImagesForQuality:(int)arg1 ;
-(void)_drawPageImage:(int)arg1 forQuality:(int)arg2 ;
-(BOOL)_hasAnyImageAtPageIndex:(unsigned long long)arg1 ;
-(void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(BOOL)arg2 ;
-(BOOL)_findPageIndexNeedingUpdate:(int*)arg1 forQuality:(int*)arg2 ;
-(BOOL)_pagesInActiveRange:(int)arg1 areOfQuality:(int)arg2 ;
-(BOOL)_pageAtIndex:(int)arg1 isOfQuality:(int)arg2 ;
-(int)_inclusivePageRangeForQuality:(int)arg1 ;
-(int)_imageCount;
-(BOOL)drawProgressCallback;
@end

