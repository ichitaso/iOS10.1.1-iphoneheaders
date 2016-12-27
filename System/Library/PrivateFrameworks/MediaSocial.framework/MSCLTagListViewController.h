/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MSCLTagListDelegate;
@class SKUIResourceLoader, MSCLConfiguration, NSArray, UIImage, SSVLoadURLOperation, NSString, UITableView;

@interface MSCLTagListViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {

	SKUIResourceLoader* _artworkLoader;
	MSCLConfiguration* _configuration;
	NSArray* _defaultTagSuggestions;
	id<MSCLTagListDelegate> _delegate;
	UIImage* _placeholderImage;
	SSVLoadURLOperation* _loadTagsOperation;
	NSArray* _matchedTagSuggestions;
	NSString* _tagString;
	UITableView* _tableView;

}

@property (nonatomic,readonly) MSCLConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLTagListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MSCLTagListDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MSCLTagListDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(MSCLConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_imageDataConsumer;
-(id)existingTagForString:(id)arg1 ;
-(void)reloadWithTagString:(id)arg1 ;
-(void)_reloadWithMatchedTags:(id)arg1 ;
-(void)_loadThumbnailsForTags:(id)arg1 reason:(long long)arg2 ;
-(id)_activeTagSuggestions;
@end
