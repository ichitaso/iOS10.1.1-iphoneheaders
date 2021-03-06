/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class KNUIState;

@interface KNArchivedUIState : TSPObject {

	KNUIState* mUIState;

}

@property (nonatomic,readonly) KNUIState * uiState; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(KNUIState *)uiState;
-(id)initWithUIState:(id)arg1 context:(id)arg2 ;
-(BOOL)validateMobileViewStateWithDocumentRoot:(id)arg1 ;
-(BOOL)validateDesktopViewStateWithDocumentRoot:(id)arg1 ;
-(void)dealloc;
@end

