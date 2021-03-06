/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/UserEventPlugins/com.apple.netsvcproxy.plugin/com.apple.netsvcproxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NPUtilities : NSObject
+(long long)protocolTypeFromPath:(id)arg1 endpoint:(id)arg2 ;
+(long long)interfaceTypeOfInterface:(id)arg1 ;
+(id)endpointFromString:(id)arg1 defaultPortString:(id)arg2 ;
+(id)copyDataFromKeychainWithIdentifier:(id)arg1 accountName:(id)arg2 ;
+(void)saveDataToKeychain:(id)arg1 withIdentifier:(id)arg2 accountName:(id)arg3 ;
+(void)removeDataFromKeychainWithIdentifier:(id)arg1 ;
+(id)createConnectionInfoFromConnection:(id)arg1 ;
+(BOOL)hasPacketDrop:(id)arg1 ;
+(id)hexDumpBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(void)parseXTimeout:(id)arg1 hardTTLInSeconds:(double*)arg2 ;
+(id)parseXHost:(id)arg1 ;
+(unsigned long long)parseXRTT:(id)arg1 ;
+(id)copyCurrentNetworkCharacteristicsForPath:(id)arg1 ;
+(id)connectionInfoToDict:(id)arg1 dictionary:(id)arg2 ;
+(BOOL)printDictionaryAsJson:(id)arg1 debugName:(id)arg2 ;
+(id)getInterfaceTypeString:(int)arg1 ;
@end

