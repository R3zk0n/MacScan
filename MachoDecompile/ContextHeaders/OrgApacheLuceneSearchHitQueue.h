// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHHITQUEUE_H
#define ORGAPACHELUCENESEARCHHITQUEUE_H



#import "OrgApacheLuceneUtilPriorityQueue.h"

@interface OrgApacheLuceneSearchHitQueue : OrgApacheLuceneUtilPriorityQueue



-(id)initWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(id)getSentinelObject;
-(BOOL)lessThanWithId:(id)arg0 withId:(id)arg1 ;


@end


#endif