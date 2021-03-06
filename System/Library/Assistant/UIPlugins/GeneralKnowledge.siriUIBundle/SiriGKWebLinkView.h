/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel, SAGKLinkedAnswer;

@interface SiriGKWebLinkView : SiriGKView {

	UILabel* _titleLabel;
	UILabel* _urlLabel;
	UILabel* _descriptionLabel;
	SAGKLinkedAnswer* _answer;

}
-(id)initWithLinkedAnswer:(id)arg1 safariBackURL:(id)arg2 ;
-(double)_baselineOffset;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

