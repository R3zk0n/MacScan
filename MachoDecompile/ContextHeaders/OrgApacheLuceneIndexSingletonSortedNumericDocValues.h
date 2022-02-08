// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSINGLETONSORTEDNUMERICDOCVALUES_H
#define ORGAPACHELUCENEINDEXSINGLETONSORTEDNUMERICDOCVALUES_H



#import "OrgApacheLuceneIndexSortedNumericDocValues.h"
#import "OrgApacheLuceneIndexNumericDocValues.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneIndexSingletonSortedNumericDocValues : OrgApacheLuceneIndexSortedNumericDocValues {
    OrgApacheLuceneIndexNumericDocValues *in_;
    id<OrgApacheLuceneUtilBits> *docsWithField_;
    NSInteger value_;
    int count_;
}




-(id)initWithOrgApacheLuceneIndexNumericDocValues:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 ;
-(id)getNumericDocValues;
-(id)getDocsWithField;
-(void)setDocumentWithInt:(int)arg0 ;
-(NSInteger)valueAtWithInt:(int)arg0 ;
-(int)count;
-(void)dealloc;


@end


#endif