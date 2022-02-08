// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDOCIDSETITERATOR_$1_H
#define ORGAPACHELUCENESEARCHDOCIDSETITERATOR_$1_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"

@interface OrgApacheLuceneSearchDocIdSetIterator_$1 : OrgApacheLuceneSearchDocIdSetIterator {
    BOOL exhausted_;
}




-(int)advanceWithInt:(int)arg0 ;
-(int)docID;
-(int)nextDoc;
-(NSInteger)cost;
-(id)init;


@end


#endif