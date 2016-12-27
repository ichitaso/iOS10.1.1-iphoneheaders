/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCWidgetVisibilityDelegate.h>
#import <libobjc.A.dylib/_NCDataSourceManager.h>

@protocol _NCParentDataSourceManager;
@class NSArray, NCWidgetDataSource, NCWidgetVisibilityManager, NSString;

@interface NCWidgetDataSourceManager : NSObject <NCWidgetVisibilityDelegate, _NCDataSourceManager> {

	NCWidgetDataSource* _widgetDataSource;
	NCWidgetVisibilityManager* _widgetVisbilityManager;
	id _plugInDiscoveryToken;
	BOOL _isPublishing;
	/*^block*/id _didStartBlock;
	id<_NCParentDataSourceManager> _parentDataSourceManager;

}

@property (setter=_setPlugInDiscoveryToken:,getter=_plugInDiscoveryToken,nonatomic,retain) id plugInDiscoveryToken;              //@synthesize plugInDiscoveryToken=_plugInDiscoveryToken - In the implementation block
@property (getter=_widgetVisbilityManager,nonatomic,retain) NCWidgetVisibilityManager * widgetVisbilityManager;                  //@synthesize widgetVisbilityManager=_widgetVisbilityManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_NCParentDataSourceManager> parentDataSourceManager;                                             //@synthesize parentDataSourceManager=_parentDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
+(id)_widgetExtensionsDiscoveryAttributes;
+(void)availableWidgetsWithCompletion:(/*^block*/id)arg1 ;
-(void)_start:(/*^block*/id)arg1 ;
-(id)init;
-(void)_stop:(/*^block*/id)arg1 ;
-(NSArray *)dataSources;
-(void)_beginContinuousPlugInDiscovery;
-(void)_endContinuousPlugInDiscovery;
-(void)_updatePublishedWidgetExtensions:(id)arg1 ;
-(BOOL)_shouldPublishWidgetExtension:(id)arg1 ;
-(void)_updateDataSourceWithExtension:(id)arg1 ;
-(void)_revokeExtensionWithIdentifier:(id)arg1 ;
-(id)_widgetVisbilityManager;
-(void)_setPlugInDiscoveryToken:(id)arg1 ;
-(void)widgetVisibilityDidChange;
-(id<_NCParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id<_NCParentDataSourceManager>)arg1 ;
-(id)_plugInDiscoveryToken;
-(void)setWidgetVisbilityManager:(NCWidgetVisibilityManager *)arg1 ;
@end
