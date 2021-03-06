/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface EMNumberFormatter : NSObject {

	CFNumberFormatterRef _genericFormatter;
	CFNumberFormatterRef _doubleFormatter;
	CFNumberFormatterRef _percentFormatter;
	CFNumberFormatterRef _bigNumberFormatter;
	CFNumberFormatterRef _currencyFormatter;
	CFDateFormatterRef _dateFormatter;
	NSString* _excelFormatString;
	NSString* _baseICUFormatString;
	BOOL _isNegativeRed;
	unsigned short _currencySymbol;
	int _formatType;

}
+(id)formatterForFormat:(id)arg1 ;
-(void)dealloc;
-(CFDateFormatterRef)_dateFormatter;
-(id)formatDefault:(double)arg1 ;
-(unsigned long long)optimalNumberOfDigitsForValue:(double)arg1 ;
-(id)formatDefault:(double)arg1 showingNumberOfDigits:(unsigned long long)arg2 ;
-(BOOL)isNegativeRed;
-(int)formatType;
-(id)formatValue:(double)arg1 inWorkbook:(id)arg2 ;
-(id)formatPercent:(double)arg1 ;
-(id)formatDate:(id)arg1 ;
-(id)initWithExcelFormatString:(id)arg1 ;
-(id)initForGeneralFormatting;
-(void)_parseExcelFormatString:(id)arg1 ;
-(id)convertedGenericNumberFormatWithFormat:(id)arg1 ;
-(id)_icuFormatStringForDateFormat;
-(id)_icuFormatStringForCurrencyFormat;
-(void)convertGenericNumberFormat:(id)arg1 ;
-(CFNumberFormatterRef)_doubleFormatter;
-(CFNumberFormatterRef)_percentFormatter;
-(CFNumberFormatterRef)_bigNumberFormatter;
-(CFNumberFormatterRef)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)arg1 ;
-(CFNumberFormatterRef)_currencyFormatter;
-(id)formatPhoneNumber:(double)arg1 ;
-(id)formatCurrency:(double)arg1 ;
-(id)formatFraction:(double)arg1 ;
-(id)formatDoubleValue:(double)arg1 ;
@end

