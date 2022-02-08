// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILINTARRAYDOCIDSET_INTARRAYDOCIDSETITERATOR_H
#define ORGAPACHELUCENEUTILINTARRAYDOCIDSET_INTARRAYDOCIDSETITERATOR_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneUtilIntArrayDocIdSet_IntArrayDocIdSetIterator : OrgApacheLuceneSearchDocIdSetIterator {
    IOSIntArray *docs_;
    int length_;
    int i_;
    int doc_;
}




-(id)initWithIntArray:(id)arg0 withInt:(int)arg1 ;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif