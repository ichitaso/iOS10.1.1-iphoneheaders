/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUITableViewRowDelegate
@required
-(void)rowDidChange:(id)arg1 action:(int)arg2;
-(id)sourceURLForRUITableViewRow;
-(void)rowDidEndEditing:(id)arg1;
-(void)rowIsFirstResponder:(id)arg1;
-(id)textFieldRow:(id)arg1 changeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
-(Class)tableCellClassForTableViewRow:(id)arg1;
-(void)row:(id)arg1 activatedElement:(id)arg2;

@end
