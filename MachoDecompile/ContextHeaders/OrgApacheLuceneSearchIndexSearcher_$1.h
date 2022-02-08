// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHINDEXSEARCHER_$1_H
#define ORGAPACHELUCENESEARCHINDEXSEARCHER_$1_H



#import "OrgApacheLuceneSearchSimilaritiesSimilarity.h"

@interface OrgApacheLuceneSearchIndexSearcher_$1 : OrgApacheLuceneSearchSimilaritiesSimilarity



-(NSInteger)computeNormWithOrgApacheLuceneIndexFieldInvertState:(id)arg0 ;
-(id)computeWeightWithFloat:(float)arg0 withOrgApacheLuceneSearchCollectionStatistics:(id)arg1 withOrgApacheLuceneSearchTermStatisticsArray:(id)arg2 ;
-(id)simScorerWithOrgApacheLuceneSearchSimilaritiesSimilarity_SimWeight:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 ;
-(id)init;


@end


#endif