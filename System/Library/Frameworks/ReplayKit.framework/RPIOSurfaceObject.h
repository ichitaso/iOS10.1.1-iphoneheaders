/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {

	IOSurfaceRef _ioSurface;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(IOSurfaceRef)ioSurface;
-(void)setIOSurface:(IOSurfaceRef)arg1 ;
@end
