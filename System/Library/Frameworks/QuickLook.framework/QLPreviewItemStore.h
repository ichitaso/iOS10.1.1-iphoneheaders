/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLPreviewItemProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@protocol QLPreviewItemProvider;
@class NSPointerArray, QLDataSource;

@interface QLPreviewItemStore : NSObject <QLPreviewItemProvider, QLPreviewControllerDataSource> {

	NSPointerArray* _cache;
	id<QLPreviewItemProvider> _itemProvider;
	QLDataSource* _internalItemProvider;
	BOOL _isArchive;
	NSRange _possibleRange;

}

@property (assign,nonatomic,__weak) id<QLPreviewItemProvider> itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (readonly) unsigned long long numberOfItems; 
@property (readonly) NSRange possibleRange;                                              //@synthesize possibleRange=_possibleRange - In the implementation block
@property (readonly) BOOL isArchive;                                                     //@synthesize isArchive=_isArchive - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)numberOfItems;
-(void)_commonInit;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(BOOL)isArchive;
-(void)clearCache;
-(void)clearItems;
-(id)initWithPreviewItems:(id)arg1 ;
-(NSRange)possibleRange;
-(void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithContentsOfPreviewItem:(id)arg1 ;
-(void)reloadWithNumberOfPreviewItems:(unsigned long long)arg1 ;
-(long long)indexOfPreviewItem:(id)arg1 ;
-(id<QLPreviewItemProvider>)itemProvider;
-(void)setItemProvider:(id<QLPreviewItemProvider>)arg1 ;
@end

