// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$7_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$7_H



#import "OrgApacheLuceneIndexSortedDocValues.h"
#import "OrgApacheLuceneUtilLongValues.h"
#import "OrgApacheLuceneIndexBinaryDocValues.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$7 : OrgApacheLuceneIndexSortedDocValues {
    OrgApacheLuceneUtilLongValues *val$ordinals_;
    OrgApacheLuceneIndexBinaryDocValues *val$binary_;
    int val$valueCount_;
}




-(int)getOrdWithInt:(int)arg0 ;
-(id)lookupOrdWithInt:(int)arg0 ;
-(int)getValueCount;
-(int)lookupTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)termsEnum;
-(id)initWithOrgApacheLuceneUtilLongValues:(id)arg0 withOrgApacheLuceneIndexBinaryDocValues:(id)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif