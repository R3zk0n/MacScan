// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPDOCS_SCOREMERGESORTQUEUE_H
#define ORGAPACHELUCENESEARCHTOPDOCS_SCOREMERGESORTQUEUE_H



#import "OrgApacheLuceneUtilPriorityQueue.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchTopDocs_ScoreMergeSortQueue : OrgApacheLuceneUtilPriorityQueue {
    IOSObjectArray *shardHits_;
}




-(id)initWithOrgApacheLuceneSearchTopDocsArray:(id)arg0 ;
-(BOOL)lessThanWithId:(id)arg0 withId:(id)arg1 ;
-(void)dealloc;


@end


#endif