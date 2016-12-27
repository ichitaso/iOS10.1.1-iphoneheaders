/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {

	/*^block*/id _uploadAllFilesCompletion;
	BRContainer* _container;

}

@property (copy) id uploadAllFilesCompletion;              //@synthesize uploadAllFilesCompletion=_uploadAllFilesCompletion - In the implementation block
-(id)init;
-(void)main;
-(id)uploadAllFilesCompletion;
-(void)setUploadAllFilesCompletion:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithContainer:(id)arg1 ;
@end
