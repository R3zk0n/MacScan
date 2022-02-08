// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$9_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$9_H



#import "OrgApacheLuceneIndexSortedNumericDocValues.h"
#import "OrgApacheLuceneUtilLongValues.h"
#import "IOSIntArray.h"
#import "IOSLongArray.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$9 : OrgApacheLuceneIndexSortedNumericDocValues {
    int startOffset_;
    int endOffset_;
    OrgApacheLuceneUtilLongValues *val$ordinals_;
    IOSIntArray *val$offsets_;
    IOSLongArray *val$table_;
}




-(void)setDocumentWithInt:(int)arg0 ;
-(NSInteger)valueAtWithInt:(int)arg0 ;
-(int)count;
-(id)initWithOrgApacheLuceneUtilLongValues:(id)arg0 withIntArray:(id)arg1 withLongArray:(id)arg2 ;
-(void)dealloc;


@end


#endif