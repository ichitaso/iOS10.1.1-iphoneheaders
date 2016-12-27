/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem {

	CoreDAVLeafItem* _prop;
	NSString* _match;
	NSString* _matchTypeAttribute;

}

@property (nonatomic,retain) CoreDAVLeafItem * prop;                     //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSString * match;                           //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSString * matchTypeAttribute;              //@synthesize matchTypeAttribute=_matchTypeAttribute - In the implementation block
-(int)wellKnownPrincipalSearchType;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)matchTypeAttribute;
-(id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2 ;
-(CoreDAVLeafItem *)prop;
-(void)setMatchTypeAttribute:(NSString *)arg1 ;
-(void)setProp:(CoreDAVLeafItem *)arg1 ;
-(void)write:(id)arg1 ;
-(void)setMatch:(NSString *)arg1 ;
-(NSString *)match;
@end
