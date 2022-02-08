// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$5_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$5_H

@class LongBinaryDocValues;


#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$5 : LongBinaryDocValues {
    OrgApacheLuceneStoreIndexInput *val$data_;
    int val$length_;
    IOSByteArray *val$buffer_;
    OrgApacheLuceneUtilBytesRef *val$term_;
}




-(id)getWithLong:(NSInteger)arg0 ;
-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 withByteArray:(id)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 ;
-(void)dealloc;


@end


#endif