// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXDOCVALUES_$3_H
#define ORGAPACHELUCENEINDEXDOCVALUES_$3_H



#import "OrgApacheLuceneIndexSortedDocValues.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneIndexDocValues_$3 : OrgApacheLuceneIndexSortedDocValues {
    OrgApacheLuceneUtilBytesRef *val$empty_;
}




-(int)getOrdWithInt:(int)arg0 ;
-(id)lookupOrdWithInt:(int)arg0 ;
-(int)getValueCount;
-(id)initWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)dealloc;


@end


#endif