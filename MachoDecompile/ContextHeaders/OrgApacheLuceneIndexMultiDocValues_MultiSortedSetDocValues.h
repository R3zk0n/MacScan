// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_MULTISORTEDSETDOCVALUES_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_MULTISORTEDSETDOCVALUES_H



#import "OrgApacheLuceneIndexSortedSetDocValues.h"
#import "IOSIntArray.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexMultiDocValues_OrdinalMap.h"
#import "OrgApacheLuceneUtilLongValues.h"

@interface OrgApacheLuceneIndexMultiDocValues_MultiSortedSetDocValues : OrgApacheLuceneIndexSortedSetDocValues {
    IOSIntArray *docStarts_;
    IOSObjectArray *values_;
    OrgApacheLuceneIndexMultiDocValues_OrdinalMap *mapping_;
    int currentSubIndex_;
    OrgApacheLuceneUtilLongValues *currentGlobalOrds_;
}




-(id)initWithOrgApacheLuceneIndexSortedSetDocValuesArray:(id)arg0 withIntArray:(id)arg1 withOrgApacheLuceneIndexMultiDocValues_OrdinalMap:(id)arg2 ;
-(NSInteger)nextOrd;
-(void)setDocumentWithInt:(int)arg0 ;
-(id)lookupOrdWithLong:(NSInteger)arg0 ;
-(NSInteger)getValueCount;
-(void)dealloc;


@end


#endif