// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTITERMSENUM_TERMMERGEQUEUE_H
#define ORGAPACHELUCENEINDEXMULTITERMSENUM_TERMMERGEQUEUE_H



#import "OrgApacheLuceneUtilPriorityQueue.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneIndexMultiTermsEnum_TermMergeQueue : OrgApacheLuceneUtilPriorityQueue {
    IOSIntArray *stack_;
}




-(id)initWithInt:(int)arg0 ;
-(BOOL)lessThanWithId:(id)arg0 withId:(id)arg1 ;
-(int)fillTopWithOrgApacheLuceneIndexMultiTermsEnum_TermsEnumWithSliceArray:(id)arg0 ;
-(id)getWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif