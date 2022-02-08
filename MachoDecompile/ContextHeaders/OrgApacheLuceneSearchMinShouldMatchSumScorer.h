// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHMINSHOULDMATCHSUMSCORER_H
#define ORGAPACHELUCENESEARCHMINSHOULDMATCHSUMSCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "IOSFloatArray.h"
#import "OrgApacheLuceneSearchDisiWrapper.h"
#import "OrgApacheLuceneSearchDisiPriorityQueue.h"
#import "IOSObjectArray.h"
#import "JavaUtilCollection-Protocol.h"

@interface OrgApacheLuceneSearchMinShouldMatchSumScorer : OrgApacheLuceneSearchScorer {
    int minShouldMatch_;
    IOSFloatArray *coord_;
    OrgApacheLuceneSearchDisiWrapper *lead_;
    int doc_;
    int freq_;
    OrgApacheLuceneSearchDisiPriorityQueue *head_;
    IOSObjectArray *tail_;
    int tailSize_;
    id<JavaUtilCollection> *childScorers_;
    NSInteger cost_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withJavaUtilCollection:(id)arg1 withInt:(int)arg2 withFloatArray:(id)arg3 ;
-(NSInteger)cost;
-(id)getChildren;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(void)addLeadWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;
-(void)pushBackLeads;
-(void)advanceTailWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;
-(void)advanceTail;
-(void)setDocAndFreq;
-(int)doNext;
-(void)updateFreq;
-(int)freq;
-(float)score;
-(int)docID;
-(id)insertTailWithOverFlowWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;
-(void)addTailWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;
-(id)popTail;
-(void)dealloc;


@end


#endif