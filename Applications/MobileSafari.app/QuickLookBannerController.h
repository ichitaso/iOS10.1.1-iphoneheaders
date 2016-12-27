/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/QuickLookBannerViewDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegatePrivate.h>
#import <UIKit/UIToolbarDelegate.h>

@class UIDocumentInteractionController, TabDocument, QuickLookBannerView, NSString;

@interface QuickLookBannerController : NSObject <QuickLookBannerViewDelegate, UIDocumentInteractionControllerDelegatePrivate, UIToolbarDelegate> {

	UIDocumentInteractionController* _documentInteractionController;
	TabDocument* _tabDocument;
	BOOL _isShowingQuickLookOpenInMenu;
	QuickLookBannerView* _bannerView;

}

@property (nonatomic,retain,readonly) QuickLookBannerView * bannerView;                                    //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTabDocument:(id)arg1 ;
-(void)showBannerView;
-(void)hideBannerView;
-(void)_removeBannerViewTimer;
-(void)_addOrRestartBannerViewTimer;
-(void)_savePDFDocumentToFileIfNeeded;
-(id)_urlForQuickLookDocument;
-(void)openInApplication:(id)arg1 ;
-(void)openInOtherApplications:(id)arg1 ;
-(void)dealloc;
-(long long)positionForBar:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(id)documentProxyForPreview:(id)arg1 name:(id)arg2 UTI:(id)arg3 ;
-(id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1 ;
-(QuickLookBannerView *)bannerView;
@end
