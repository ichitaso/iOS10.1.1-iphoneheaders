/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurant, NSDateComponents, NSString, INRestaurantGuest, INRestaurantOffer;


@protocol INBookRestaurantReservationIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (nonatomic,copy) NSDateComponents * bookingDateComponents; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSString * bookingIdentifier; 
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) INRestaurantOffer * selectedOffer; 
@property (nonatomic,copy) NSString * guestProvidedSpecialRequestText; 
@required
-(id)init;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1;
-(INRestaurant *)restaurant;
-(INRestaurantGuest *)guest;
-(void)setGuest:(id)arg1;
-(void)setRestaurant:(id)arg1;
-(INRestaurantOffer *)selectedOffer;
-(NSString *)guestProvidedSpecialRequestText;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(id)arg1;
-(void)setSelectedOffer:(id)arg1;
-(void)setGuestProvidedSpecialRequestText:(id)arg1;
-(NSDateComponents *)bookingDateComponents;
-(void)setBookingDateComponents:(id)arg1;

@end

