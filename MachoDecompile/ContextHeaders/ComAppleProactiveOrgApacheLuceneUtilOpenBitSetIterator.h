// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVEORGAPACHELUCENEUTILOPENBITSETITERATOR_H
#define COMAPPLEPROACTIVEORGAPACHELUCENEUTILOPENBITSETITERATOR_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "IOSLongArray.h"

@interface ComAppleProactiveOrgApacheLuceneUtilOpenBitSetIterator : OrgApacheLuceneSearchDocIdSetIterator {
    IOSLongArray *arr_;
    int words_;
    int i_;
    NSInteger word_;
    int wordShift_;
    int indexArray_;
    int curDocId_;
}




-(id)initWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(id)initWithLongArray:(id)arg0 withInt:(int)arg1 ;
-(void)shift;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(int)docID;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif