// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISJUNCTIONMAXQUERY_DISJUNCTIONMAXWEIGHT_H
#define ORGAPACHELUCENESEARCHDISJUNCTIONMAXQUERY_DISJUNCTIONMAXWEIGHT_H



#import "OrgApacheLuceneSearchWeight.h"
#import "JavaUtilArrayList.h"
#import "OrgApacheLuceneSearchDisjunctionMaxQuery.h"

@interface OrgApacheLuceneSearchDisjunctionMaxQuery_DisjunctionMaxWeight : OrgApacheLuceneSearchWeight {
    JavaUtilArrayList *weights_;
    OrgApacheLuceneSearchDisjunctionMaxQuery *this$0_;
    BOOL needsScores_;
}




-(id)initWithOrgApacheLuceneSearchDisjunctionMaxQuery:(id)arg0 withOrgApacheLuceneSearchIndexSearcher:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif