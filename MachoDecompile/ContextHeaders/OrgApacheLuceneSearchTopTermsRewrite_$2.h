// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPTERMSREWRITE_$2_H
#define ORGAPACHELUCENESEARCHTOPTERMSREWRITE_$2_H

@class TermCollector;


#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneSearchTopTermsRewrite_ScoreTerm.h"
#import "OrgApacheLuceneUtilBytesRefBuilder.h"
#import "JavaUtilPriorityQueue.h"
#import "OrgApacheLuceneSearchMaxNonCompetitiveBoostAttribute-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "OrgApacheLuceneSearchBoostAttribute-Protocol.h"

@interface OrgApacheLuceneSearchTopTermsRewrite_$2 : TermCollector {
    id<OrgApacheLuceneSearchMaxNonCompetitiveBoostAttribute> *maxBoostAtt_;
    id<JavaUtilMap> *visitedTerms_;
    OrgApacheLuceneIndexTermsEnum *termsEnum_;
    id<OrgApacheLuceneSearchBoostAttribute> *boostAtt_;
    OrgApacheLuceneSearchTopTermsRewrite_ScoreTerm *st_;
    OrgApacheLuceneUtilBytesRefBuilder *lastTerm_;
    JavaUtilPriorityQueue *val$stQueue_;
    int val$maxSize_;
}




-(void)setNextEnumWithOrgApacheLuceneIndexTermsEnum:(id)arg0 ;
-(BOOL)compareToLastTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(BOOL)collectWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)initWithJavaUtilPriorityQueue:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif