// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTWOPHASEITERATOR_$1_H
#define ORGAPACHELUCENESEARCHTWOPHASEITERATOR_$1_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "OrgApacheLuceneSearchTwoPhaseIterator.h"

@interface OrgApacheLuceneSearchTwoPhaseIterator_$1 : OrgApacheLuceneSearchDocIdSetIterator {
    OrgApacheLuceneSearchDocIdSetIterator *val$approximation_;
    OrgApacheLuceneSearchTwoPhaseIterator *val$twoPhaseIterator_;
}




-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(int)doNextWithInt:(int)arg0 ;
-(NSInteger)cost;
-(id)initWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 withOrgApacheLuceneSearchTwoPhaseIterator:(id)arg1 ;
-(void)dealloc;


@end


#endif