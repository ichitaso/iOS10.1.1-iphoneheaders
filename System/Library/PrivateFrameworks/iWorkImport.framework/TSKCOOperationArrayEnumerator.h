/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOIntermediateOperationEnumerator.h>

@class NSMutableArray;

@interface TSKCOOperationArrayEnumerator : NSObject <TSKCOIntermediateOperationEnumerator> {

	NSMutableArray* mOperationArray;
	unsigned long long mNextIndex;

}

@property (nonatomic,readonly) BOOL hasOperations; 
-(id)nextOperation;
-(void)replaceOperation:(id)arg1 ;
-(void)appendOperation:(id)arg1 ;
-(id)nextOperationOnAddress:(id)arg1 ;
-(id)initWithOperationEnumerator:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasOperations;
@end

