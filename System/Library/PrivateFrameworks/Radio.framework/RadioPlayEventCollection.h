/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSMapTable;

@interface RadioPlayEventCollection : NSObject <NSCopying, NSMutableCopying> {

	NSString* _deviceName;
	NSMapTable* _stationInformationToPlayEvents;

}

@property (nonatomic,copy,readonly) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)playInfoDictionary;
-(id)initWithDeviceName:(id)arg1 ;
-(NSString *)deviceName;
@end

