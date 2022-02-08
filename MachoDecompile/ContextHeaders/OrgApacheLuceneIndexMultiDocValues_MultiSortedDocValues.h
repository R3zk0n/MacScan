// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_MULTISORTEDDOCVALUES_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_MULTISORTEDDOCVALUES_H



#import "OrgApacheLuceneIndexSortedDocValues.h"
#import "IOSIntArray.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexMultiDocValues_OrdinalMap.h"

@interface OrgApacheLuceneIndexMultiDocValues_MultiSortedDocValues : OrgApacheLuceneIndexSortedDocValues {
    IOSIntArray *docStarts_;
    IOSObjectArray *values_;
    OrgApacheLuceneIndexMultiDocValues_OrdinalMap *mapping_;
}




-(id)initWithOrgApacheLuceneIndexSortedDocValuesArray:(id)arg0 withIntArray:(id)arg1 withOrgApacheLuceneIndexMultiDocValues_OrdinalMap:(id)arg2 ;
-(int)getOrdWithInt:(int)arg0 ;
-(id)lookupOrdWithInt:(int)arg0 ;
-(int)getValueCount;
-(void)dealloc;


@end


#endif