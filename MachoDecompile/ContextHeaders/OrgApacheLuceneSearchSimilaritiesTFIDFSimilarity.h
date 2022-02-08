// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSIMILARITIESTFIDFSIMILARITY_H
#define ORGAPACHELUCENESEARCHSIMILARITIESTFIDFSIMILARITY_H



#import "OrgApacheLuceneSearchSimilaritiesSimilarity.h"

@interface OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity : OrgApacheLuceneSearchSimilaritiesSimilarity



-(id)init;
-(id)idfExplainWithOrgApacheLuceneSearchCollectionStatistics:(id)arg0 withOrgApacheLuceneSearchTermStatistics:(id)arg1 ;
-(id)idfExplainWithOrgApacheLuceneSearchCollectionStatistics:(id)arg0 withOrgApacheLuceneSearchTermStatisticsArray:(id)arg1 ;
-(NSInteger)computeNormWithOrgApacheLuceneIndexFieldInvertState:(id)arg0 ;
-(id)computeWeightWithFloat:(float)arg0 withOrgApacheLuceneSearchCollectionStatistics:(id)arg1 withOrgApacheLuceneSearchTermStatisticsArray:(id)arg2 ;
-(id)simScorerWithOrgApacheLuceneSearchSimilaritiesSimilarity_SimWeight:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 ;
-(id)explainQueryWithOrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_IDFStats:(id)arg0 ;
-(id)explainFieldWithInt:(int)arg0 withOrgApacheLuceneSearchExplanation:(id)arg1 withOrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_IDFStats:(id)arg2 withOrgApacheLuceneIndexNumericDocValues:(id)arg3 ;
-(id)explainScoreWithInt:(int)arg0 withOrgApacheLuceneSearchExplanation:(id)arg1 withOrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_IDFStats:(id)arg2 withOrgApacheLuceneIndexNumericDocValues:(id)arg3 ;


@end


#endif