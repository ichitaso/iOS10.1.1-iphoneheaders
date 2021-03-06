/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDFill, TSCH3DLightingModel, TSCH3DFillSetIdentifier;

@interface TSCHDEPRECATED3DFill : NSObject {

	TSDFill* mFill;
	TSCH3DLightingModel* mLightingModel;
	TSCH3DFillSetIdentifier* mIdentifier;

}
+(id)instanceWithArchive:(const DEPRECATEDChart3DFillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(DEPRECATEDChart3DFillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const DEPRECATEDChart3DFillArchive*)arg1 unarchiver:(id)arg2 ;
-(id)convertToTSDFill;
-(void)dealloc;
@end

