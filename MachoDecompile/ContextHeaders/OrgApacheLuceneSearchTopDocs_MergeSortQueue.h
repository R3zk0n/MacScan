// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPDOCS_MERGESORTQUEUE_H
#define ORGAPACHELUCENESEARCHTOPDOCS_MERGESORTQUEUE_H



#import "OrgApacheLuceneUtilPriorityQueue.h"
#import "IOSObjectArray.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneSearchTopDocs_MergeSortQueue : OrgApacheLuceneUtilPriorityQueue {
    IOSObjectArray *shardHits_;
    IOSObjectArray *comparators_;
    IOSIntArray *reverseMul_;
}




-(id)initWithOrgApacheLuceneSearchSort:(id)arg0 withOrgApacheLuceneSearchTopDocsArray:(id)arg1 ;
-(BOOL)lessThanWithId:(id)arg0 withId:(id)arg1 ;
-(void)dealloc;


@end


#endif