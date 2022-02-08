// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDVALUEHITQUEUE_H
#define ORGAPACHELUCENESEARCHFIELDVALUEHITQUEUE_H



#import "OrgApacheLuceneUtilPriorityQueue.h"
#import "IOSObjectArray.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneSearchFieldValueHitQueue : OrgApacheLuceneUtilPriorityQueue {
    IOSObjectArray *fields_;
    IOSObjectArray *comparators_;
    IOSIntArray *reverseMul_;
}




-(id)initWithOrgApacheLuceneSearchSortFieldArray:(id)arg0 withInt:(int)arg1 ;
-(id)getComparators;
-(id)getReverseMul;
-(id)getComparatorsWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)fillFieldsWithOrgApacheLuceneSearchFieldValueHitQueue_Entry:(id)arg0 ;
-(id)getFields;
-(void)dealloc;
+(id)createWithOrgApacheLuceneSearchSortFieldArray:(id)arg0 withInt:(int)arg1 ;


@end


#endif