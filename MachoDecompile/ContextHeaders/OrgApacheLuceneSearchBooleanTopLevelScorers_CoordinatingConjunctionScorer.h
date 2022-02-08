// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_COORDINATINGCONJUNCTIONSCORER_H
#define ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_COORDINATINGCONJUNCTIONSCORER_H



#import "OrgApacheLuceneSearchConjunctionScorer.h"
#import "IOSFloatArray.h"
#import "OrgApacheLuceneSearchScorer.h"

@interface OrgApacheLuceneSearchBooleanTopLevelScorers_CoordinatingConjunctionScorer : OrgApacheLuceneSearchConjunctionScorer {
    IOSFloatArray *coords_;
    int reqCount_;
    OrgApacheLuceneSearchScorer *req_;
    OrgApacheLuceneSearchScorer *opt_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withFloatArray:(id)arg1 withOrgApacheLuceneSearchScorer:(id)arg2 withInt:(int)arg3 withOrgApacheLuceneSearchScorer:(id)arg4 ;
-(float)score;
-(void)dealloc;


@end


#endif