// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_$1_$1_H
#define ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_$1_$1_H



#import "OrgApacheLuceneSearchFilterScorer.h"
#import "OrgApacheLuceneSearchScorer.h"

@interface OrgApacheLuceneSearchConstantScoreQuery_$1_$1 : OrgApacheLuceneSearchFilterScorer {
    float val$score_;
    OrgApacheLuceneSearchScorer *val$innerScorer_;
}




-(float)score;
-(int)freq;
-(id)getChildren;
-(id)initWithFloat:(float)arg0 withOrgApacheLuceneSearchScorer:(id)arg1 withOrgApacheLuceneSearchScorer:(id)arg2 ;
-(void)dealloc;


@end


#endif