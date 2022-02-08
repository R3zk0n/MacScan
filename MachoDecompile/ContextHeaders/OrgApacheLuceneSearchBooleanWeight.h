// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANWEIGHT_H
#define ORGAPACHELUCENESEARCHBOOLEANWEIGHT_H



#import "OrgApacheLuceneSearchWeight.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity.h"
#import "OrgApacheLuceneSearchBooleanQuery.h"
#import "JavaUtilArrayList.h"
#import "IOSFloatArray.h"

@interface OrgApacheLuceneSearchBooleanWeight : OrgApacheLuceneSearchWeight {
    OrgApacheLuceneSearchSimilaritiesSimilarity *similarity_;
    OrgApacheLuceneSearchBooleanQuery *query_;
    JavaUtilArrayList *weights_;
    int maxCoord_;
    BOOL disableCoord_;
    BOOL needsScores_;
    IOSFloatArray *coords_;
    int bulkScorerSize_;
}




-(id)initWithOrgApacheLuceneSearchBooleanQuery:(id)arg0 withOrgApacheLuceneSearchIndexSearcher:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 ;
-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(float)getValueForNormalization;
-(float)coordWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;
-(id)booleanScorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)bulkScorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)reqWithJavaUtilList:(id)arg0 withJavaUtilList:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)exclWithOrgApacheLuceneSearchScorer:(id)arg0 withJavaUtilList:(id)arg1 ;
-(id)optWithJavaUtilList:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif