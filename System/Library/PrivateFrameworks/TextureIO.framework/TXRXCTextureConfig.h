/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextureIO/TextureIO-Structs.h>
@class TXRXCFileAttributes, NSMutableSet, NSSet;

@interface TXRXCTextureConfig : NSObject {

	TXRXCFileAttributes* _baseFileAttributes;
	NSMutableSet* _fileAttributesList;
	unsigned long long _pixelFormat;
	unsigned long long _mipmapOption;
	unsigned long long _memory;
	unsigned long long _graphicsFeatureSet;
	unsigned long long _idiom;
	unsigned long long _displayColorSpace;
	unsigned long long _scaleFactor;

}

@property (nonatomic,retain) TXRXCFileAttributes * baseFileAttributes;              //@synthesize baseFileAttributes=_baseFileAttributes - In the implementation block
@property (nonatomic,readonly) NSSet * fileAttributesList;                          //@synthesize fileAttributesList=_fileAttributesList - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                        //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long mipmapOption;                       //@synthesize mipmapOption=_mipmapOption - In the implementation block
@property (assign,nonatomic) unsigned long long memory;                             //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic) unsigned long long graphicsFeatureSet;                 //@synthesize graphicsFeatureSet=_graphicsFeatureSet - In the implementation block
@property (assign,nonatomic) unsigned long long idiom;                              //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) unsigned long long displayColorSpace;                  //@synthesize displayColorSpace=_displayColorSpace - In the implementation block
@property (assign,nonatomic) unsigned long long scaleFactor;                        //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(id)init;
-(unsigned long long)idiom;
-(unsigned long long)scaleFactor;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(void)setIdiom:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(unsigned long long)memory;
-(void)setMemory:(unsigned long long)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)mipmapOption;
-(TXRXCFileAttributes *)baseFileAttributes;
-(unsigned long long)graphicsFeatureSet;
-(unsigned long long)displayColorSpace;
-(void)addFileAttributesForLevel:(unsigned long long)arg1 ;
-(void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2 ;
-(void)addFileAttributesForLevel:(unsigned long long)arg1 withOrigin:(unsigned long long)arg2 fileFormat:(unsigned long long)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2 withOrigin:(unsigned long long)arg3 fileFormat:(unsigned long long)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(void)setBaseFileAttributes:(TXRXCFileAttributes *)arg1 ;
-(NSSet *)fileAttributesList;
-(void)setMipmapOption:(unsigned long long)arg1 ;
-(void)setGraphicsFeatureSet:(unsigned long long)arg1 ;
-(void)setDisplayColorSpace:(unsigned long long)arg1 ;
@end

