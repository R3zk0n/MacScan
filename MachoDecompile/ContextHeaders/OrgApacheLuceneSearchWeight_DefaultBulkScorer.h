// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHWEIGHT_DEFAULTBULKSCORER_H
#define ORGAPACHELUCENESEARCHWEIGHT_DEFAULTBULKSCORER_H



#import "OrgApacheLuceneSearchBulkScorer.h"
#import "OrgApacheLuceneSearchScorer.h"

@interface OrgApacheLuceneSearchWeight_DefaultBulkScorer : OrgApacheLuceneSearchBulkScorer {
    OrgApacheLuceneSearchScorer *scorer_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(NSInteger)cost;
-(int)scoreWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)dealloc;
+(int)scoreRangeWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneSearchScorer:(id)arg1 withOrgApacheLuceneSearchTwoPhaseIterator:(id)arg2 withOrgApacheLuceneUtilBits:(id)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
+(void)scoreAllWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneSearchScorer:(id)arg1 withOrgApacheLuceneSearchTwoPhaseIterator:(id)arg2 withOrgApacheLuceneUtilBits:(id)arg3 ;


@end


#endif