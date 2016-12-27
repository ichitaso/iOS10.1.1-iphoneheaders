/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;
@class PKPaymentAuthorizationCoordinator, NSString;

@interface PKPaymentAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKPaymentAuthorizationController* _retainSelf;
	id<PKPaymentAuthorizationControllerDelegate> _delegate;
	PKPaymentAuthorizationCoordinator* _paymentCoordinator;
	id<PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;

}

@property (nonatomic,retain) PKPaymentAuthorizationCoordinator * paymentCoordinator;                           //@synthesize paymentCoordinator=_paymentCoordinator - In the implementation block
@property (assign,nonatomic) id<PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
+(BOOL)canMakePayments;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKPaymentAuthorizationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPaymentAuthorizationControllerDelegate>)delegate;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationControllerPrivateDelegate>)arg1 ;
-(id<PKPaymentAuthorizationControllerPrivateDelegate>)privateDelegate;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentAuthorizationCoordinator *)paymentCoordinator;
-(void)setPaymentCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSession:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
