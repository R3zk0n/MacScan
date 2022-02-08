// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$6_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$6_H

@class LongBinaryDocValues;


#import "OrgApacheLuceneUtilPackedMonotonicBlockPackedReader.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$6 : LongBinaryDocValues {
    OrgApacheLuceneUtilPackedMonotonicBlockPackedReader *val$addresses_;
    OrgApacheLuceneStoreIndexInput *val$data_;
    IOSByteArray *val$buffer_;
    OrgApacheLuceneUtilBytesRef *val$term_;
}




-(id)getWithLong:(NSInteger)arg0 ;
-(id)initWithOrgApacheLuceneUtilPackedMonotonicBlockPackedReader:(id)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 withByteArray:(id)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 ;
-(void)dealloc;


@end


#endif