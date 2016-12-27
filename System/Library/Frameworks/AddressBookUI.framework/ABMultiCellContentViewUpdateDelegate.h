/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABMultiCellContentViewUpdateDelegate <ABTabOrderDelegate,ABDatePickerPresentationDelegate>
@required
-(BOOL)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2;
-(void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2;
-(void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
-(void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2 forKey:(id)arg3;
-(void)multiCellContentViewDidEndEditing:(id)arg1;
-(void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2;
-(void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2;
-(void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2;
-(void)multiCellContentView:(id)arg1 willResizeAnimated:(BOOL)arg2;
-(void)multiCellContentView:(id)arg1 didResizeAnimated:(BOOL)arg2;
-(void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1;
-(void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1;

@end
