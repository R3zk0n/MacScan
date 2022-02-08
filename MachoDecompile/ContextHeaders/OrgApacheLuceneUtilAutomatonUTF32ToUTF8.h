// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONUTF32TOUTF8_H
#define ORGAPACHELUCENEUTILAUTOMATONUTF32TOUTF8_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAutomatonAutomaton_Builder.h"
#import "OrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence.h"

@interface OrgApacheLuceneUtilAutomatonUTF32ToUTF8 : NSObject {
    OrgApacheLuceneUtilAutomatonAutomaton_Builder *utf8_;
    OrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence *startUTF8_;
    OrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence *endUTF8_;
    OrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence *tmpUTF8a_;
    OrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence *tmpUTF8b_;
}




-(id)init;
-(void)convertOneEdgeWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)buildWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence:(id)arg2 withOrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence:(id)arg3 withInt:(int)arg4 ;
-(void)startWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)endWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)allWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(id)convertWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
-(void)dealloc;
+(void)initialize;


@end


#endif