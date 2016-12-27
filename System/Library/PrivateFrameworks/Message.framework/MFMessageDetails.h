/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageLibrary, NSString;

@interface MFMessageDetails : NSObject {

	MFMessageLibrary* library;
	unsigned libraryID;
	unsigned long long messageFlags;
	unsigned uid;
	unsigned encoding;
	BOOL isInvalid;
	unsigned mailboxID;
	long long conversationHash;
	long long messageIDHash;
	unsigned dateReceived;
	unsigned dateSent;
	NSString* externalID;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)uid;
-(unsigned)libraryID;
-(unsigned long long)messageFlags;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(unsigned)mailboxID;
-(id)mailbox;
-(long long)messageIDHash;
-(id)remoteID;
-(id)copyMessageInfo;
-(id)externalID;
-(id)messageID;
@end
