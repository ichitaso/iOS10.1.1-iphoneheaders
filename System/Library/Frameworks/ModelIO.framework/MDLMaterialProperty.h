/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, MDLTextureSampler, MDLMaterialPropertyNode;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying> {

	NSString* _string;
	NSString* _name;
	NSURL* _url;
	MDLTextureSampler* _textureSampler;
	 _float;
	SCD_Struct_MD1 _matrix;
	CGColorRef _color;
	unsigned long long _semantic;
	MDLMaterialPropertyNode* _node;
	MDLMaterialProperty* _overrider;
	MDLMaterialProperty* _overridee;
	unsigned long long _type;
	NSURL* _URLValue;
	SCD_Struct_MD1 _matrix4x4;

}

@property (assign,nonatomic) unsigned long long semantic; 
@property (nonatomic,readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSURL * URLValue;                                       //@synthesize URLValue=_URLValue - In the implementation block
@property (nonatomic,retain) MDLTextureSampler * textureSamplerValue; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  float2Value; 
@property (assign,nonatomic)  float3Value; 
@property (assign,nonatomic)  float4Value; 
@property (assign,nonatomic) SCD_Struct_MD1 matrix4x4;                             //@synthesize matrix4x4=_matrix4x4 - In the implementation block
@property (assign,nonatomic) float luminance; 
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)floatValue;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(NSString *)stringValue;
-(void)setUrl:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setProperties:(id)arg1 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-()float2Value;
-(SCD_Struct_MD1)matrix4x4;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(SCD_Struct_MD1)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(CGColorRef)arg3 ;
-(void)setTextureSamplerValue:(MDLTextureSampler *)arg1 ;
-(void)setLuminance:(float)arg1 ;
-(void)setFloat2Value:;
-(void)setFloat3Value:;
-(void)setFloat4Value:;
-(void)setMatrix4x4Value:(SCD_Struct_MD1)arg1 ;
-(void)setURLValue:(NSURL *)arg1 ;
-(void)setMatrix4x4:(SCD_Struct_MD1)arg1 ;
-(MDLTextureSampler *)textureSamplerValue;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3 ;
-(NSURL *)URLValue;
-()float4Value;
-()float3Value;
-(unsigned long long)semantic;
-(void)setSemantic:(unsigned long long)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(float)luminance;
@end

