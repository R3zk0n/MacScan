// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_CONSTANTBULKSCORER_H
#define ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_CONSTANTBULKSCORER_H



#import "OrgApacheLuceneSearchBulkScorer.h"
#import "OrgApacheLuceneSearchWeight.h"

@interface OrgApacheLuceneSearchConstantScoreQuery_ConstantBulkScorer : OrgApacheLuceneSearchBulkScorer {
    OrgApacheLuceneSearchBulkScorer *bulkScorer_;
    OrgApacheLuceneSearchWeight *weight_;
    float theScore_;
}




-(id)initWithOrgApacheLuceneSearchConstantScoreQuery:(id)arg0 withOrgApacheLuceneSearchBulkScorer:(id)arg1 withOrgApacheLuceneSearchWeight:(id)arg2 withFloat:(float)arg3 ;
-(int)scoreWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)wrapCollectorWithOrgApacheLuceneSearchLeafCollector:(id)arg0 ;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif