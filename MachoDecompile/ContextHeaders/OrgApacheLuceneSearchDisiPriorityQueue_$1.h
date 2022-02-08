// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISIPRIORITYQUEUE_$1_H
#define ORGAPACHELUCENESEARCHDISIPRIORITYQUEUE_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchDisiPriorityQueue.h"
#import "JavaUtilIterator-Protocol.h"

@interface OrgApacheLuceneSearchDisiPriorityQueue_$1 : NSObject <JavaUtilIterator>

 {
    OrgApacheLuceneSearchDisiPriorityQueue *this$0_;
    int i_;
    int val$size_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithOrgApacheLuceneSearchDisiPriorityQueue:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif