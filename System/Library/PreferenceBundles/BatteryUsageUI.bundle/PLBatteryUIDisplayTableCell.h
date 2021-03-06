/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol PLBatteryUIDisplayTableCellDelegate;
@class UILabel, NSString;

@interface PLBatteryUIDisplayTableCell : PSTableCell {

	int _type;
	UILabel* _prevLabel;
	BOOL _interactiveButton;
	BOOL _ttrButton;
	NSString* _IssueDomain;
	NSString* _IssueType;
	NSString* _IssueProcess;
	NSString* _IssueAttachments;
	id<PLBatteryUIDisplayTableCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBatteryUIDisplayTableCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(long long)cellStyle;
-(id)urlEncodedString:(id)arg1 ;
-(void)ttrPressed;
-(void)layoutSubviews;
-(void)setDelegate:(id<PLBatteryUIDisplayTableCellDelegate>)arg1 ;
-(id<PLBatteryUIDisplayTableCellDelegate>)delegate;
-(void)refresh:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end

