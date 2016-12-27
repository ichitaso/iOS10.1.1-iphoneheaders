/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDFitnessFriendsManagerReadyObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class CNContactStore, NSMutableDictionary, NSHashTable, NSObject, NSSet, NSString;

@interface HDFitnessFriendsContactsManager : NSObject <HDFitnessFriendsManagerReadyObserver> {

	CNContactStore* _contactStore;
	NSMutableDictionary* _contactsByUUID;
	NSMutableDictionary* _placeholderContactsByUUID;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _contactsQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _persistQueue;
	NSObject*<OS_dispatch_group> _contactsTransactionBarrier;

}

@property (nonatomic,copy) NSSet * contacts; 
@property (nonatomic,readonly) NSSet * placeholderContacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)contactWithUUID:(id)arg1 ;
-(id)_contactStoreContactWithIdentifier:(id)arg1 ;
-(void)_setContacts:(id)arg1 waitForTransaction:(BOOL)arg2 ;
-(NSSet *)contacts;
-(id)_findMatchingContactStoreContactForDestinations:(id)arg1 ;
-(void)_waitForTransaction;
-(void)_notifyObservers;
-(void)_persistContacts;
-(void)_beginTransaction;
-(void)_endTransaction;
-(void)setContacts:(NSSet *)arg1 ;
-(NSSet *)placeholderContacts;
-(id)placeholderContactWithUUID:(id)arg1 ;
-(id)contactMatchingCriteriaBlock:(/*^block*/id)arg1 ;
-(id)contactWithDestinations:(id)arg1 ;
-(id)createContactWithDestinations:(id)arg1 ;
-(void)saveContact:(id)arg1 ;
-(void)setContactsUsingTransaction:(/*^block*/id)arg1 ;
-(void)savePlaceholderContact:(id)arg1 ;
-(void)removePlaceholderContact:(id)arg1 ;
@end
