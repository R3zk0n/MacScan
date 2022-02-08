// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSORTEDDOCVALUES_H
#define ORGAPACHELUCENEINDEXSORTEDDOCVALUES_H



#import "OrgApacheLuceneIndexBinaryDocValues.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneIndexSortedDocValues : OrgApacheLuceneIndexBinaryDocValues {
    OrgApacheLuceneUtilBytesRef *empty_;
}




-(id)init;
-(id)getWithInt:(int)arg0 ;
-(int)lookupTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)termsEnum;
-(void)dealloc;


@end


#endif