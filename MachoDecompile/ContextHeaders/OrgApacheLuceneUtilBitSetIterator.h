// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBITSETITERATOR_H
#define ORGAPACHELUCENEUTILBITSETITERATOR_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "OrgApacheLuceneUtilBitSet.h"

@interface OrgApacheLuceneUtilBitSetIterator : OrgApacheLuceneSearchDocIdSetIterator {
    OrgApacheLuceneUtilBitSet *bits_;
    int length_;
    NSInteger cost_;
    int doc_;
}




-(id)initWithOrgApacheLuceneUtilBitSet:(id)arg0 withLong:(NSInteger)arg1 ;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(void)dealloc;
+(id)getFixedBitSetOrNullWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
+(id)getSparseFixedBitSetOrNullWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;


@end


#endif