/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUScanOptions, SUDescriptor, NSError;

@interface SUScanRequest : NSObject {

	SUScanOptions* _options;
	/*^block*/id _callback;
	SUDescriptor* _result;
	NSError* _error;

}

@property (nonatomic,retain) SUScanOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id callback;                            //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) SUDescriptor * result;                //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                      //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(SUScanOptions *)options;
-(void)setOptions:(SUScanOptions *)arg1 ;
-(SUDescriptor *)result;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setResult:(SUDescriptor *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

