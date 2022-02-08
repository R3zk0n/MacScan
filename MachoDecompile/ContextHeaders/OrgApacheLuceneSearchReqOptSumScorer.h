// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHREQOPTSUMSCORER_H
#define ORGAPACHELUCENESEARCHREQOPTSUMSCORER_H



#import "OrgApacheLuceneSearchScorer.h"

@interface OrgApacheLuceneSearchReqOptSumScorer : OrgApacheLuceneSearchScorer {
    OrgApacheLuceneSearchScorer *reqScorer_;
    OrgApacheLuceneSearchScorer *optScorer_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 withOrgApacheLuceneSearchScorer:(id)arg1 ;
-(id)asTwoPhaseIterator;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(int)docID;
-(float)score;
-(int)freq;
-(id)getChildren;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif