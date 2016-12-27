/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/MobileMail.axbundle/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/__MFApplicationSceneControllerAccessibility_super.h>

@interface MFApplicationSceneControllerAccessibility : __MFApplicationSceneControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)tiltedTabViewDidDismiss:(id)arg1 ;
-(void)_setActiveActorItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)tiltedTabViewDidPresent:(id)arg1 ;
-(void)_axPrepareActorLabel:(id)arg1 index:(long long)arg2 ;
-(id)_accessibilityMailPresentedViewController;
-(id)_accessibilityPrimaryViewController;
-(void)presentModalViewController:(id)arg1 animated:(BOOL)arg2 options:(id)arg3 ;
-(void)_accessibilitySetMailPresentedViewController:(id)arg1 ;
-(void)dismissViewController:(UIViewController*)arg1 animated:(BOOL)arg2 options:(id)arg3 ;
-(void)_accessibilityUpdateDraftElements;
-(id)_actorItemForActorViewController:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_accessibilityUpdateDraftLabelForBorrowedView:(id)arg1 withActorAtIndex:(long long)arg2 ;
-(id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2 ;
-(id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_accessibilitySpeakThisViewController;
-(void)_accessibilityLoadAccessibilityInformation;
@end
