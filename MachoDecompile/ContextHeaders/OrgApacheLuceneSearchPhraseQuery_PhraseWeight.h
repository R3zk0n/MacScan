// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHPHRASEQUERY_PHRASEWEIGHT_H
#define ORGAPACHELUCENESEARCHPHRASEQUERY_PHRASEWEIGHT_H



#import "OrgApacheLuceneSearchWeight.h"
#import "OrgApacheLuceneSearchPhraseQuery.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity_SimWeight.h"
#import "IOSObjectArray.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneSearchPhraseQuery_PhraseWeight : OrgApacheLuceneSearchWeight {
    OrgApacheLuceneSearchPhraseQuery *this$0_;
    OrgApacheLuceneSearchSimilaritiesSimilarity *similarity_;
    OrgApacheLuceneSearchSimilaritiesSimilarity_SimWeight *stats_;
    BOOL needsScores_;
    IOSObjectArray *states_;
    IOSObjectArray *terms_;
    IOSIntArray *positions_;
}




-(id)initWithOrgApacheLuceneSearchPhraseQuery:(id)arg0 withOrgApacheLuceneSearchIndexSearcher:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(id)description;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(BOOL)termNotInReaderWithOrgApacheLuceneIndexLeafReader:(id)arg0 withOrgApacheLuceneIndexTerm:(id)arg1 ;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif