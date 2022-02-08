// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$11_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$11_H



#import "OrgApacheLuceneIndexRandomAccessOrds.h"
#import "OrgApacheLuceneUtilLongValues.h"
#import "IOSIntArray.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_LongBinaryDocValues.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$11 : OrgApacheLuceneIndexRandomAccessOrds {
    int offset_;
    int startOffset_;
    int endOffset_;
    OrgApacheLuceneUtilLongValues *val$ordinals_;
    IOSIntArray *val$offsets_;
    IOSLongArray *val$table_;
    OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_LongBinaryDocValues *val$binary_;
    NSInteger val$valueCount_;
}




-(void)setDocumentWithInt:(int)arg0 ;
-(NSInteger)ordAtWithInt:(int)arg0 ;
-(NSInteger)nextOrd;
-(int)cardinality;
-(id)lookupOrdWithLong:(NSInteger)arg0 ;
-(NSInteger)getValueCount;
-(NSInteger)lookupTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)termsEnum;
-(id)initWithOrgApacheLuceneUtilLongValues:(id)arg0 withIntArray:(id)arg1 withLongArray:(id)arg2 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_LongBinaryDocValues:(id)arg3 withLong:(NSInteger)arg4 ;
-(void)dealloc;


@end


#endif