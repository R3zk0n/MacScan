// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDVALUEHITQUEUE_ONECOMPARATORFIELDVALUEHITQUEUE_H
#define ORGAPACHELUCENESEARCHFIELDVALUEHITQUEUE_ONECOMPARATORFIELDVALUEHITQUEUE_H



#import "OrgApacheLuceneSearchFieldValueHitQueue.h"
#import "OrgApacheLuceneSearchFieldComparator.h"

@interface OrgApacheLuceneSearchFieldValueHitQueue_OneComparatorFieldValueHitQueue : OrgApacheLuceneSearchFieldValueHitQueue {
    int oneReverseMul_;
    OrgApacheLuceneSearchFieldComparator *oneComparator_;
}




-(id)initWithOrgApacheLuceneSearchSortFieldArray:(id)arg0 withInt:(int)arg1 ;
-(BOOL)lessThanWithId:(id)arg0 withId:(id)arg1 ;
-(void)dealloc;


@end


#endif