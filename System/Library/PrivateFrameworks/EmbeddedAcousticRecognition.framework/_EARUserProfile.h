/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARUserProfile : NSObject {

	map<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > > > >* _userData;
	shared_ptr<quasar::LmeDataFactory>* _dataFactory;
	shared_ptr<sdapi::SdapiTokenizer>* _tokenizer;
	shared_ptr<quasar::G2P>* _g2p;
	shared_ptr<quasar::PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > >* _pronCache;
	BasicTextSanitizer* _sanitizer;
	shared_ptr<quasar::LmeData>* _quasarLmeData;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiOverrides:(id)arg3 withSdapiConfig:(id)arg4 ;
-(id)initWithConfiguration:(id)arg1 language:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9 ;
-(id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10 ;
-(void)addWordWithParts:(id)arg1 templateName:(id)arg2 ;
-(void)removeAllWords;
-(id)dataProfile;
-(void)readUserProfile:(id)arg1 ;
-(id)pronunciationsForOrthography:(id)arg1 ;
-(id)sanitizedStringWithString:(id)arg1 ;
@end

