/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSOrderedSet;


@protocol PXPlacesMapLayoutItem <NSObject>
@property (assign) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) NSOrderedSet * geotaggables; 
@required
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(CLLocationCoordinate2D)coordinate;
-(NSOrderedSet *)geotaggables;
-(BOOL)isEqualToLayoutItem:(id)arg1;

@end
