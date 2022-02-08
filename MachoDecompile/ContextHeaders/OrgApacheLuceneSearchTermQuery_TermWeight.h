// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTERMQUERY_TERMWEIGHT_H
#define ORGAPACHELUCENESEARCHTERMQUERY_TERMWEIGHT_H



#import "OrgApacheLuceneSearchWeight.h"
#import "OrgApacheLuceneSearchTermQuery.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity_SimWeight.h"
#import "OrgApacheLuceneIndexTermContext.h"

@interface OrgApacheLuceneSearchTermQuery_TermWeight : OrgApacheLuceneSearchWeight {
    OrgApacheLuceneSearchTermQuery *this$0_;
    OrgApacheLuceneSearchSimilaritiesSimilarity *similarity_;
    OrgApacheLuceneSearchSimilaritiesSimilarity_SimWeight *stats_;
    OrgApacheLuceneIndexTermContext *termStates_;
    BOOL needsScores_;
}




-(id)initWithOrgApacheLuceneSearchTermQuery:(id)arg0 withOrgApacheLuceneSearchIndexSearcher:(id)arg1 withBoolean:(BOOL)arg2 withOrgApacheLuceneIndexTermContext:(id)arg3 ;
-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(id)description;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)getTermsEnumWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(BOOL)termNotInReaderWithOrgApacheLuceneIndexLeafReader:(id)arg0 withOrgApacheLuceneIndexTerm:(id)arg1 ;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif