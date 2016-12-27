/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned alertTimestamp : 1;
	unsigned distanceToIncident : 1;
	unsigned etaTimestamp : 1;
	unsigned alertType : 1;
	unsigned isAutomaticReroute : 1;
} SCD_Struct_MN1;

typedef struct {
	unsigned navigationType : 1;
	unsigned routeIndex : 1;
	unsigned transportType : 1;
	unsigned copyTracesToCrashReporterDirectory : 1;
	unsigned guidancePromptsEnabled : 1;
	unsigned isForReconnecting : 1;
	unsigned isTraceRecording : 1;
	unsigned shouldPrepare : 1;
} SCD_Struct_MN2;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_MN3;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	id field1;
	char* field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned field7;
	unsigned long long field8;
	BOOL field9;
	unsigned long long field10;
	float field11;
	unsigned long long field12;
	id field13;
	int field14;
} SCD_Struct_MN6;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MN7;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_MN8;

typedef struct {
	unsigned short field1[2];
	unsigned short field2[2];
} SCD_Struct_MN9;

typedef struct {
	SCD_Struct_MN7 field1;
	SCD_Struct_MN7 field2;
} SCD_Struct_MN10;

typedef struct {
	SCD_Struct_MN1 field1;
	unsigned long long field2;
	unsigned long long field3;
	int field4;
	int field5;
	int field6;
	unsigned long long field7;
	unsigned long long( field8;
	/*function pointer*/void* field9;
	= field10;
	SCD_Struct_MN6 field11;
	0 field12;
	SCD_Struct_MN8) field13;
	/*function pointer*/void* field14;
	SCD_Struct_MN9 field15;
	unsigned char field16;
	BOOL field17;
	unsigned char field18;
	BOOL field19;
	BOOL field20;
	unsigned char field21;
	BOOL field22;
	unsigned char field23;
	_ field24;
	N field25;
	unsigned short field26;
	R field27;
	a field28;
	n field29;
	g field30;
	e field31;
	BOOL field32;
} SCD_Struct_MN11;

typedef struct {
	long long context;
	double distance;
	BOOL usePrimaryName;
	BOOL useSecondaryName;
	BOOL useDistanceForSecondary;
	BOOL useContinueForSecondary;
	int numPrimarySigns;
	int numSecondarySigns;
} SCD_Struct_MN12;

typedef struct {
	unsigned course : 1;
	unsigned courseAccuracy : 1;
	unsigned distanceFromRoute : 1;
	unsigned horizontalAccuracy : 1;
	unsigned shieldType : 1;
	unsigned timestamp : 1;
	unsigned transitID : 1;
	unsigned locationState : 1;
	unsigned rampType : 1;
	unsigned roadLineType : 1;
	unsigned speedLimit : 1;
	unsigned stepIndex : 1;
	unsigned isGoodMatch : 1;
	unsigned isTunnelProjection : 1;
	unsigned speedLimitIsMPH : 1;
} SCD_Struct_MN13;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_MN14;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	int field1;
	SCD_Struct_MN3 field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	int field11;
	double field12;
	int field13;
	SCD_Struct_MN3 field14;
	double field15;
	int field16;
	unsigned field17;
	int field18;
} SCD_Struct_MN16;

typedef struct {
	unsigned currentPosition : 1;
	unsigned traceDuration : 1;
	unsigned eventType : 1;
	unsigned recordedBookmarkID : 1;
} SCD_Struct_MN17;

typedef struct {
	unsigned index : 1;
	unsigned offset : 1;
} SCD_Struct_MN18;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_MN19;

typedef struct {
	unsigned index;
	float offset;
} SCD_Struct_MN20;
