// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISJUNCTIONSCORER_H
#define ORGAPACHELUCENESEARCHDISJUNCTIONSCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchDisiPriorityQueue.h"
#import "OrgApacheLuceneSearchDisiWrapper.h"

@interface OrgApacheLuceneSearchDisjunctionScorer : OrgApacheLuceneSearchScorer {
    BOOL needsScores_;
    OrgApacheLuceneSearchDisiPriorityQueue *subScorers_;
    NSInteger cost_;
    OrgApacheLuceneSearchDisiWrapper *topScorers_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withJavaUtilList:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)asTwoPhaseIterator;
-(NSInteger)cost;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(int)freq;
-(float)score;
-(id)getChildren;
-(void)dealloc;


@end


#endif