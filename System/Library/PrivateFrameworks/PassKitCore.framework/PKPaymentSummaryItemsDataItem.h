/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString, NSArray;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSArray * paymentSummaryItems; 
+(long long)dataType;
-(NSString *)currencyCode;
-(NSArray *)paymentSummaryItems;
-(BOOL)isValidWithError:(id*)arg1 ;
@end
