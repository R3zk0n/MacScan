// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDOCIDSETITERATOR_$2_H
#define ORGAPACHELUCENESEARCHDOCIDSETITERATOR_$2_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"

@interface OrgApacheLuceneSearchDocIdSetIterator_$2 : OrgApacheLuceneSearchDocIdSetIterator {
    int doc_;
    int val$maxDoc_;
}




-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(id)initWithInt:(int)arg0 ;


@end


#endif