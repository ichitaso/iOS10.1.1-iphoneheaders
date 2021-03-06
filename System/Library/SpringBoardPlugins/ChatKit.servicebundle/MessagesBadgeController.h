/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MessagesBadgeController : NSObject {

	long long _madridCount;
	long long _lastMadridFailure;
	BOOL _showingFailure;
	BOOL _disableDBFullDialog;
	unsigned _acknowledgmentSoundID;

}

@property (assign,nonatomic) unsigned acknowledgmentSoundID;              //@synthesize acknowledgmentSoundID=_acknowledgmentSoundID - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_updateBadge;
-(void)_handleIsUnexpectedlyLoggedOutChanged:(id)arg1 ;
-(void)updateBadge;
-(void)_saveMadridFailureID:(long long)arg1 ;
-(unsigned)acknowledgmentSoundID;
-(void)setAcknowledgmentSoundID:(unsigned)arg1 ;
-(void)_displayDatabaseFullWarning;
-(long long)_savedMadridFailureID;
-(void)_madridUnreadCountChanged:(id)arg1 ;
-(void)_madridFailureCountChanged:(id)arg1 ;
-(void)_madridMessageSent:(id)arg1 ;
-(void)_databaseBecameFull;
-(void)_databaseBecameNoLongerFull;
-(void)_clearFailureBadge;
@end

