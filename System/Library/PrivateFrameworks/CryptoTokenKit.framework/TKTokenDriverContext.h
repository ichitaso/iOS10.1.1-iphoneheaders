/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/TKTokenDriverProtocol.h>

@class TKTokenDriver, NSString;

@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol> {

	TKTokenDriver* _driver;
	NSString* _tokenID;

}

@property (retain) TKTokenDriver * driver;              //@synthesize driver=_driver - In the implementation block
@property (retain) NSString * tokenID;                  //@synthesize tokenID=_tokenID - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)dealloc;
-(NSString *)tokenID;
-(void)setTokenID:(NSString *)arg1 ;
-(void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(TKTokenDriver *)driver;
-(void)setDriver:(TKTokenDriver *)arg1 ;
@end

