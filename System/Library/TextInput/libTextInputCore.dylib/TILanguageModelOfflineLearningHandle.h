/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputMode, NSDate, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject {

	BOOL _valid;
	TIInputMode* _inputMode;
	NSDate* _lastAdaptationDate;
	TILanguageModelAdaptationContext* _currentAdaptationContext;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                                              //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSDate * lastAdaptationDate;                                              //@synthesize lastAdaptationDate=_lastAdaptationDate - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * currentAdaptationContext;              //@synthesize currentAdaptationContext=_currentAdaptationContext - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
+(id)handleForInputMode:(id)arg1 ;
+(id)handleForLanguageLikelihood;
-(void)dealloc;
-(BOOL)isValid;
-(TIInputMode *)inputMode;
-(void)load;
-(void)didFinishLearning;
-(id)initWithInputMode:(id)arg1 ;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(TILanguageModelAdaptationContext *)currentAdaptationContext;
-(void)setLastAdaptationDate:(NSDate *)arg1 ;
-(NSDate *)lastAdaptationDate;
-(void)setCurrentAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(void)setValid:(BOOL)arg1 ;
@end

