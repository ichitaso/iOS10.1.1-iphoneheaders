/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSceneLayerHostContainerViewDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSceneHostManagerDelegate;
@class FBSceneLayerManager, FBScene, NSString, UIColor, FBSceneLayerHostContainerView, FBSceneHostWrapperView, FBOrderedRequesters, NSMutableDictionary, NSMutableSet, NSHashTable;

@interface FBSceneHostManager : NSObject <FBSceneLayerHostContainerViewDelegate, BSDescriptionProviding> {

	FBSceneLayerManager* _layerManager;
	FBScene* _scene;
	NSString* _identifier;
	UIColor* _defaultBackgroundColorWhileHosting;
	UIColor* _defaultBackgroundColorWhileNotHosting;
	unsigned long long _defaultHostedLayerTypes;
	FBSceneLayerHostContainerView* _hostView;
	FBSceneHostWrapperView* _activeWrapperView;
	BOOL _suspended;
	BOOL _invalidated;
	FBOrderedRequesters* _hostRequesters;
	NSMutableDictionary* _hostWrapperViewsByRequester;
	NSMutableSet* _disableHostingAssertions;
	NSHashTable* _observers;
	id<FBSceneHostManagerDelegate> _delegate;
	struct {
		unsigned delegateOverrideRequester : 1;
		unsigned DEPRECATED_delegateOverrideRequester : 1;
		unsigned delegateShouldEnableContextHostingForRequester : 1;
		unsigned DEPRECATED_delegateShouldEnableContextHostingForRequester : 1;
	}  _flags;

}

@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) id<FBSceneHostManagerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) FBScene * scene;                                   //@synthesize scene=_scene - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                    //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy) UIColor * defaultBackgroundColorWhileHosting; 
@property (nonatomic,copy) UIColor * defaultBackgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned long long defaultHostedLayerTypes;                 //@synthesize defaultHostedLayerTypes=_defaultHostedLayerTypes - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended;                        //@synthesize suspended=_suspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSuspended;
-(void)setDelegate:(id<FBSceneHostManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBSceneHostManagerDelegate>)delegate;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDefaultHostedLayerTypes:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_wrapperViewForRequester:(id)arg1 ;
-(id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 ;
-(void)enableHostingForRequester:(id)arg1 priority:(long long)arg2 ;
-(id)_overrideRequesterIfNecessary:(id)arg1 ;
-(void)_updateActiveHostRequester;
-(id)succinctDescription;
-(void)suspendLayerHosting;
-(void)disableHostingForRequester:(id)arg1 ;
-(id)_activeHostRequester;
-(id)visibleLayersForRequester:(id)arg1 ;
-(void)setLayer:(id)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3 ;
-(id)_hostViewForRequester:(id)arg1 ;
-(id)snapshotContextForRequester:(id)arg1 ;
-(id)_snapshotContextForFrame:(CGRect)arg1 excludedContextIDs:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(id)snapshotViewWithContext:(id)arg1 ;
-(void)_activateRequester:(id)arg1 ;
-(void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2 ;
-(id)_snapshotContextForFrame:(CGRect)arg1 excludedLayers:(id)arg2 opaque:(BOOL)arg3 ;
-(id)visibleLayers;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)sceneLayerHostContainerViewHostedLayersDidChange:(id)arg1 ;
-(id)initWithLayerManager:(id)arg1 scene:(id)arg2 ;
-(void)setDefaultBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColorWhileHosting;
-(void)setDefaultBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColorWhileNotHosting;
-(id)hostViewForRequester:(id)arg1 ;
-(id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2 ;
-(id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 ;
-(id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 appearanceStyle:(unsigned long long)arg3 ;
-(void)resumeLayerHosting;
-(void)orderRequesterFront:(id)arg1 ;
-(void)setContextId:(unsigned)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3 ;
-(id)disableHostingForReason:(id)arg1 ;
-(id)snapshotViewForSnapshot:(id)arg1 ;
-(id)snapshotViewWithFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 ;
-(id)snapshotUIImageForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(CGImageRef)snapshotCGImageRefForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(IOSurfaceRef)snapshotIOSurfaceForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(id)visibleContexts;
-(unsigned long long)defaultHostedLayerTypes;
-(BOOL)isInvalidated;
-(FBScene *)scene;
@end
