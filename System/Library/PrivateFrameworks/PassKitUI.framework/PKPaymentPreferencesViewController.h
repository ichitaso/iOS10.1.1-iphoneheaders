/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNPostalAddressEditorDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class PKPassSnapshotter, NSArray, UITableView, NSString;

@interface PKPaymentPreferencesViewController : UIViewController <CNContactPickerDelegate, CNPostalAddressEditorDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {

	PKPassSnapshotter* _passSnapshotter;
	int _style;
	NSArray* _preferences;
	UITableView* _tableView;
	/*^block*/id _handler;
	/*^block*/id _pickedContactPropertyHandler;
	/*^block*/id _pickedContactHandler;

}

@property (nonatomic,copy) id pickedContactPropertyHandler;                 //@synthesize pickedContactPropertyHandler=_pickedContactPropertyHandler - In the implementation block
@property (nonatomic,copy) id pickedContactHandler;                         //@synthesize pickedContactHandler=_pickedContactHandler - In the implementation block
@property (nonatomic,retain) NSArray * preferences;                         //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,readonly) int style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) id handler;                                      //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)style;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITableView *)tableView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setPreferences:(NSArray *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSArray *)preferences;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(id)pk_childrenForAppearance;
-(id)initWithStyle:(int)arg1 preferences:(id)arg2 title:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_isViewTranslucent;
-(BOOL)_isPaymentStyle;
-(void)_updateNavigationBarButtons;
-(void)_updateContactName;
-(id)_cellOfClass:(Class)arg1 ;
-(id)_cellForPreference:(id)arg1 row:(unsigned long long)arg2 ;
-(void)_showAddressEditorForPreference:(id)arg1 contact:(id)arg2 ;
-(void)_showContactsPickerForPreference:(id)arg1 ;
-(void)_setContactHandlersForPreference:(id)arg1 ;
-(BOOL)_showChinaDistrictAddressFlowIfRequiredForPreference:(id)arg1 contact:(id)arg2 labeledValue:(id)arg3 ;
-(void)setPickedContactHandler:(id)arg1 ;
-(void)setPickedContactPropertyHandler:(id)arg1 ;
-(void)postalAddressEditorDidCancel:(id)arg1 ;
-(void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2 ;
-(void)postalAddressEditor:(id)arg1 finishedEditingProperty:(id)arg2 ;
-(id)pickedContactPropertyHandler;
-(id)pickedContactHandler;
@end

