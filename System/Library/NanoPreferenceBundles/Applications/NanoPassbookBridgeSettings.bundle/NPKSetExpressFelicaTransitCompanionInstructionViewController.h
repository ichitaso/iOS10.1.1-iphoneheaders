/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassbookBridgeSettings/NPKBridgeInstructionViewController.h>

@class NSString;

@interface NPKSetExpressFelicaTransitCompanionInstructionViewController : NPKBridgeInstructionViewController {

	unsigned long long _messageType;
	NSString* _cardName;

}

@property (assign,nonatomic) unsigned long long messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) NSString * cardName;                         //@synthesize cardName=_cardName - In the implementation block
-(id)_errorAcknowledgeButtonTitle;
-(id)_unlockRequiredMessage;
-(id)_unlockRequiredTitle;
-(id)_instructionMessage;
-(id)_instructionTitle;
-(void)handleSetExpressFelicaTransitUnlockRequired;
-(void)handleSetExpressFelicaTransitError;
-(id)_errorTitle;
-(NSString *)cardName;
-(void)setCardName:(NSString *)arg1 ;
-(id)_errorMessage;
-(unsigned long long)messageType;
-(void)setMessageType:(unsigned long long)arg1 ;
@end
