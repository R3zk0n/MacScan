// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_REQSINGLEOPTSCORER_H
#define ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_REQSINGLEOPTSCORER_H



#import "OrgApacheLuceneSearchReqOptSumScorer.h"

@interface OrgApacheLuceneSearchBooleanTopLevelScorers_ReqSingleOptScorer : OrgApacheLuceneSearchReqOptSumScorer {
    float coordReq_;
    float coordBoth_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 withOrgApacheLuceneSearchScorer:(id)arg1 withFloat:(float)arg2 withFloat:(float)arg3 ;
-(float)score;


@end


#endif