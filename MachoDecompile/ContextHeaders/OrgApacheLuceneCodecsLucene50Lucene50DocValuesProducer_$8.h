// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$8_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$8_H



#import "OrgApacheLuceneIndexSortedNumericDocValues.h"
#import "OrgApacheLuceneUtilPackedMonotonicBlockPackedReader.h"
#import "OrgApacheLuceneUtilLongValues.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$8 : OrgApacheLuceneIndexSortedNumericDocValues {
    NSInteger startOffset_;
    NSInteger endOffset_;
    OrgApacheLuceneUtilPackedMonotonicBlockPackedReader *val$ordIndex_;
    OrgApacheLuceneUtilLongValues *val$values_;
}




-(void)setDocumentWithInt:(int)arg0 ;
-(NSInteger)valueAtWithInt:(int)arg0 ;
-(int)count;
-(id)initWithOrgApacheLuceneUtilPackedMonotonicBlockPackedReader:(id)arg0 withOrgApacheLuceneUtilLongValues:(id)arg1 ;
-(void)dealloc;


@end


#endif