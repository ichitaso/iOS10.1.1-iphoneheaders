/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _WKDownloadDelegate <NSObject>
@optional
-(void)_downloadDidStart:(id)arg1;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3;
-(void)_downloadDidFinish:(id)arg1;
-(void)_download:(id)arg1 didFailWithError:(id)arg2;
-(void)_downloadDidCancel:(id)arg1;

@end
