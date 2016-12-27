/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <MapsWidget/MapsSuggestionsBaseSource.h>
#import <MapsWidget/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSObject, MapsSuggestionsManager, NSString;

@interface MapsSuggestionsFakeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	NSMutableArray* _entriesToSend;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _nowReset;
	MapsSuggestionsManager* _manager;
	unsigned long long _calledUpdateSuggestionEntries;
	unsigned long long _calledReset;
	unsigned long long _totalSent;
	unsigned long long _toSend;

}

@property (assign) unsigned long long calledUpdateSuggestionEntries;               //@synthesize calledUpdateSuggestionEntries=_calledUpdateSuggestionEntries - In the implementation block
@property (assign) unsigned long long calledReset;                                 //@synthesize calledReset=_calledReset - In the implementation block
@property (assign) BOOL nowReset;                                                  //@synthesize nowReset=_nowReset - In the implementation block
@property (assign) unsigned long long totalSent;                                   //@synthesize totalSent=_totalSent - In the implementation block
@property (assign) unsigned long long toSend;                                      //@synthesize toSend=_toSend - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager;              //@synthesize manager=_manager - In the implementation block
-(double)updateSuggestionEntries;
-(BOOL)canProduceEntriesOfType:(unsigned char)arg1 ;
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(void)sendLater:(id)arg1 ;
-(void)sendNow:(id)arg1 ;
-(void)startDebugTest;
-(unsigned long long)calledUpdateSuggestionEntries;
-(void)setCalledUpdateSuggestionEntries:(unsigned long long)arg1 ;
-(unsigned long long)calledReset;
-(void)setCalledReset:(unsigned long long)arg1 ;
-(BOOL)nowReset;
-(void)setNowReset:(BOOL)arg1 ;
-(unsigned long long)totalSent;
-(void)setTotalSent:(unsigned long long)arg1 ;
-(unsigned long long)toSend;
-(void)setToSend:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)reset;
-(id)initWithManager:(id)arg1 ;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
@end
