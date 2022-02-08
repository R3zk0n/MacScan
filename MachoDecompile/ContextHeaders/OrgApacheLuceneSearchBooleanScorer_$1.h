// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANSCORER_$1_H
#define ORGAPACHELUCENESEARCHBOOLEANSCORER_$1_H



#import "OrgApacheLuceneSearchBulkScorer.h"

@interface OrgApacheLuceneSearchBooleanScorer_$1 : OrgApacheLuceneSearchBulkScorer {
    OrgApacheLuceneSearchBulkScorer *val$scorer_;
}




-(int)scoreWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(NSInteger)cost;
-(id)initWithOrgApacheLuceneSearchBulkScorer:(id)arg0 ;
-(void)dealloc;


@end


#endif