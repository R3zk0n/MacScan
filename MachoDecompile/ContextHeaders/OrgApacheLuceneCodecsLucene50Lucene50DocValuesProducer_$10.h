// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$10_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$10_H



#import "OrgApacheLuceneIndexRandomAccessOrds.h"
#import "OrgApacheLuceneUtilLongValues.h"
#import "OrgApacheLuceneUtilPackedMonotonicBlockPackedReader.h"
#import "OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_LongBinaryDocValues.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$10 : OrgApacheLuceneIndexRandomAccessOrds {
    NSInteger startOffset_;
    NSInteger offset_;
    NSInteger endOffset_;
    OrgApacheLuceneUtilLongValues *val$ordinals_;
    OrgApacheLuceneUtilPackedMonotonicBlockPackedReader *val$ordIndex_;
    OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_LongBinaryDocValues *val$binary_;
    NSInteger val$valueCount_;
}




-(NSInteger)nextOrd;
-(void)setDocumentWithInt:(int)arg0 ;
-(id)lookupOrdWithLong:(NSInteger)arg0 ;
-(NSInteger)getValueCount;
-(NSInteger)lookupTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)termsEnum;
-(NSInteger)ordAtWithInt:(int)arg0 ;
-(int)cardinality;
-(id)initWithOrgApacheLuceneUtilLongValues:(id)arg0 withOrgApacheLuceneUtilPackedMonotonicBlockPackedReader:(id)arg1 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_LongBinaryDocValues:(id)arg2 withLong:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif