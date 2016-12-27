/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSExtension;

@interface DKDiagnosticAttributes : NSObject {

	BOOL _headless;
	BOOL _restricted;
	NSNumber* _identifier;
	NSString* _name;
	NSString* _version;
	NSNumber* _freeSpaceRequired;
	NSExtension* _extension;

}

@property (nonatomic,readonly) NSExtension * extension;                          //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSNumber * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSNumber * freeSpaceRequired;                     //@synthesize freeSpaceRequired=_freeSpaceRequired - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;                  //@synthesize headless=_headless - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
-(NSString *)name;
-(NSNumber *)identifier;
-(NSExtension *)extension;
-(NSString *)version;
-(BOOL)isRestricted;
-(id)initWithExtension:(id)arg1 ;
-(BOOL)isHeadless;
-(id)initWithIdentifier:(id)arg1 version:(id)arg2 freeSpaceRequired:(id)arg3 name:(id)arg4 headless:(BOOL)arg5 ;
-(NSNumber *)freeSpaceRequired;
@end
