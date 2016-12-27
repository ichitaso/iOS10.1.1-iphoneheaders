/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class HMIncomingHomeInvitation, CNContact, CNAvatarView, UIView, UILabel, HUPillButton, UIActivityIndicatorView, NSLayoutConstraint;

@interface HUIncomingInvitationTableViewCell : UITableViewCell {

	HMIncomingHomeInvitation* _invitation;
	CNContact* _contact;
	CNAvatarView* _avatarView;
	UIView* _containerView;
	UILabel* _homeNameLabel;
	UILabel* _infoLabel;
	HUPillButton* _declineButton;
	HUPillButton* _acceptButton;
	UIActivityIndicatorView* _spinner;
	NSLayoutConstraint* _declineButtonHiddenConstraint;
	NSLayoutConstraint* _acceptButtonHiddenConstraint;

}

@property (nonatomic,retain) CNContact * contact;                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                       //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                          //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * homeNameLabel;                                         //@synthesize homeNameLabel=_homeNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) HUPillButton * declineButton;                                    //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) HUPillButton * acceptButton;                                     //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                               //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * declineButtonHiddenConstraint;              //@synthesize declineButtonHiddenConstraint=_declineButtonHiddenConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * acceptButtonHiddenConstraint;               //@synthesize acceptButtonHiddenConstraint=_acceptButtonHiddenConstraint - In the implementation block
@property (nonatomic,retain) HMIncomingHomeInvitation * invitation;                           //@synthesize invitation=_invitation - In the implementation block
+(id)_formatDate:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(CNContact *)contact;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)declineButtonPressed:(id)arg1 ;
-(void)acceptButtonPressed:(id)arg1 ;
-(void)showInvitationSpinner;
-(HMIncomingHomeInvitation *)invitation;
-(void)hideInvitationSpinner;
-(UILabel *)homeNameLabel;
-(UILabel *)infoLabel;
-(HUPillButton *)declineButton;
-(NSLayoutConstraint *)acceptButtonHiddenConstraint;
-(NSLayoutConstraint *)declineButtonHiddenConstraint;
-(void)setInvitation:(HMIncomingHomeInvitation *)arg1 ;
-(void)setHomeNameLabel:(UILabel *)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)setDeclineButton:(HUPillButton *)arg1 ;
-(HUPillButton *)acceptButton;
-(void)setAcceptButton:(HUPillButton *)arg1 ;
-(void)setDeclineButtonHiddenConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAcceptButtonHiddenConstraint:(NSLayoutConstraint *)arg1 ;
@end
