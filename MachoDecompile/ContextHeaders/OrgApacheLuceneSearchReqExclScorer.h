// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHREQEXCLSCORER_H
#define ORGAPACHELUCENESEARCHREQEXCLSCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "OrgApacheLuceneSearchTwoPhaseIterator.h"

@interface OrgApacheLuceneSearchReqExclScorer : OrgApacheLuceneSearchScorer {
    OrgApacheLuceneSearchScorer *reqScorer_;
    OrgApacheLuceneSearchDocIdSetIterator *reqApproximation_;
    OrgApacheLuceneSearchDocIdSetIterator *exclApproximation_;
    OrgApacheLuceneSearchTwoPhaseIterator *reqTwoPhaseIterator_;
    OrgApacheLuceneSearchTwoPhaseIterator *exclTwoPhaseIterator_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 withOrgApacheLuceneSearchScorer:(id)arg1 ;
-(int)nextDoc;
-(int)toNonExcludedWithInt:(int)arg0 ;
-(int)docID;
-(int)freq;
-(NSInteger)cost;
-(float)score;
-(id)getChildren;
-(int)advanceWithInt:(int)arg0 ;
-(id)asTwoPhaseIterator;
-(void)dealloc;


@end


#endif