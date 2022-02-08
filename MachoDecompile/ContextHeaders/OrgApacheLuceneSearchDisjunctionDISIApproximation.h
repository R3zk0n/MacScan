// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISJUNCTIONDISIAPPROXIMATION_H
#define ORGAPACHELUCENESEARCHDISJUNCTIONDISIAPPROXIMATION_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "OrgApacheLuceneSearchDisiPriorityQueue.h"

@interface OrgApacheLuceneSearchDisjunctionDISIApproximation : OrgApacheLuceneSearchDocIdSetIterator {
    OrgApacheLuceneSearchDisiPriorityQueue *subIterators_;
    NSInteger cost_;
}




-(id)initWithOrgApacheLuceneSearchDisiPriorityQueue:(id)arg0 ;
-(NSInteger)cost;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif