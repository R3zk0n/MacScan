// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSCORINGREWRITE_PARALLELARRAYSTERMCOLLECTOR_H
#define ORGAPACHELUCENESEARCHSCORINGREWRITE_PARALLELARRAYSTERMCOLLECTOR_H

@class TermCollector;


#import "OrgApacheLuceneSearchScoringRewrite_TermFreqBoostByteStart.h"
#import "OrgApacheLuceneUtilBytesRefHash.h"
#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneSearchScoringRewrite.h"
#import "OrgApacheLuceneSearchBoostAttribute-Protocol.h"

@interface OrgApacheLuceneSearchScoringRewrite_ParallelArraysTermCollector : TermCollector {
    OrgApacheLuceneSearchScoringRewrite_TermFreqBoostByteStart *array_;
    OrgApacheLuceneUtilBytesRefHash *terms_;
    OrgApacheLuceneIndexTermsEnum *termsEnum_;
    OrgApacheLuceneSearchScoringRewrite *this$0_;
    id<OrgApacheLuceneSearchBoostAttribute> *boostAtt_;
}




-(void)setNextEnumWithOrgApacheLuceneIndexTermsEnum:(id)arg0 ;
-(BOOL)collectWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchScoringRewrite:(id)arg0 ;
-(void)dealloc;


@end


#endif