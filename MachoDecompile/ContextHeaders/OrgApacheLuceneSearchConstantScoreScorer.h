// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONSTANTSCORESCORER_H
#define ORGAPACHELUCENESEARCHCONSTANTSCORESCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchTwoPhaseIterator.h"
#import "OrgApacheLuceneSearchDocIdSetIterator.h"

@interface OrgApacheLuceneSearchConstantScoreScorer : OrgApacheLuceneSearchScorer {
    float score_;
    OrgApacheLuceneSearchTwoPhaseIterator *twoPhaseIterator_;
    OrgApacheLuceneSearchDocIdSetIterator *disi_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withFloat:(float)arg1 withOrgApacheLuceneSearchDocIdSetIterator:(id)arg2 ;
-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withFloat:(float)arg1 withOrgApacheLuceneSearchTwoPhaseIterator:(id)arg2 ;
-(id)asTwoPhaseIterator;
-(float)score;
-(int)freq;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif