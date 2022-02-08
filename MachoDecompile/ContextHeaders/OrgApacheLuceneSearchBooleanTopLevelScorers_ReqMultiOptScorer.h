// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_REQMULTIOPTSCORER_H
#define ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_REQMULTIOPTSCORER_H



#import "OrgApacheLuceneSearchReqOptSumScorer.h"
#import "IOSFloatArray.h"

@interface OrgApacheLuceneSearchBooleanTopLevelScorers_ReqMultiOptScorer : OrgApacheLuceneSearchReqOptSumScorer {
    int requiredCount_;
    IOSFloatArray *coords_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 withOrgApacheLuceneSearchScorer:(id)arg1 withInt:(int)arg2 withFloatArray:(id)arg3 ;
-(float)score;
-(void)dealloc;


@end


#endif