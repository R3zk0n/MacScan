// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSINGLETONSORTEDSETDOCVALUES_H
#define ORGAPACHELUCENEINDEXSINGLETONSORTEDSETDOCVALUES_H



#import "OrgApacheLuceneIndexRandomAccessOrds.h"
#import "OrgApacheLuceneIndexSortedDocValues.h"

@interface OrgApacheLuceneIndexSingletonSortedSetDocValues : OrgApacheLuceneIndexRandomAccessOrds {
    OrgApacheLuceneIndexSortedDocValues *in_;
    NSInteger currentOrd_;
    NSInteger ord_;
}




-(id)initWithOrgApacheLuceneIndexSortedDocValues:(id)arg0 ;
-(id)getSortedDocValues;
-(NSInteger)nextOrd;
-(void)setDocumentWithInt:(int)arg0 ;
-(id)lookupOrdWithLong:(NSInteger)arg0 ;
-(NSInteger)getValueCount;
-(NSInteger)lookupTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(NSInteger)ordAtWithInt:(int)arg0 ;
-(int)cardinality;
-(id)termsEnum;
-(void)dealloc;


@end


#endif