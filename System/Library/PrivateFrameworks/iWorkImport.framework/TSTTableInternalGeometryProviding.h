/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTTableInternalGeometryProviding <NSObject>
@property (nonatomic,readonly) unsigned short numberOfRows; 
@property (nonatomic,readonly) unsigned short numberOfColumns; 
@property (nonatomic,readonly) unsigned short numberOfHeaderRows; 
@property (nonatomic,readonly) unsigned short numberOfFooterRows; 
@property (nonatomic,readonly) unsigned short numberOfHeaderColumns; 
@required
-(unsigned short)numberOfFooterRows;
-(unsigned short)numberOfHeaderRows;
-(unsigned short)numberOfHeaderColumns;
-(unsigned short)numberOfColumns;
-(unsigned short)numberOfRows;

@end

