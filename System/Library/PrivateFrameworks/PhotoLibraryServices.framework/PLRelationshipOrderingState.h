/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLRelationshipOrderingState : NSObject {

	id _oids;
	id _foks;
	BOOL _isMutable;

}
-(void)dealloc;
-(id)description;
-(id)initWithObjectIDs:(id)arg1 orderValues:(id)arg2 ;
-(unsigned long long)indexForObjectID:(id)arg1 ;
-(BOOL)setOrderValue:(long long)arg1 forObjectID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)orderKeys;
-(id)objectIDs;
-(unsigned long long)findIndexForObjectID:(id)arg1 newOrderValue:(long long)arg2 hasOrderValueConflictWithObjectID:(id*)arg3 ;
@end
