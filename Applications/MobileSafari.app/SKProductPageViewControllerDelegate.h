/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKProductPageViewControllerDelegate <NSObject>
@optional
-(void)productPage:(id)arg1 didReceiveTitle:(id)arg2;
-(void)productPageDidFinishLoad:(id)arg1;
-(void)productPage:(id)arg1 purchaseBatchFailedWithError:(id)arg2;
-(void)productPage:(id)arg1 willMakePurchases:(id)arg2;
-(void)productPage:(id)arg1 didFinishPurchase:(id)arg2 withError:(id)arg3;
-(void)productPage:(id)arg1 didFinishWithResult:(long long)arg2;
-(void)productPage:(id)arg1 presentProductPage:(id)arg2 animated:(BOOL)arg3;
-(void)productPage:(id)arg1 didFailLoadWithError:(id)arg2;

@end

