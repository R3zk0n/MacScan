// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_BOOSTEDSCORER_H
#define ORGAPACHELUCENESEARCHBOOLEANTOPLEVELSCORERS_BOOSTEDSCORER_H



#import "OrgApacheLuceneSearchFilterScorer.h"

@interface OrgApacheLuceneSearchBooleanTopLevelScorers_BoostedScorer : OrgApacheLuceneSearchFilterScorer {
    float boost_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 withFloat:(float)arg1 ;
-(float)score;
-(id)getChildren;


@end


#endif