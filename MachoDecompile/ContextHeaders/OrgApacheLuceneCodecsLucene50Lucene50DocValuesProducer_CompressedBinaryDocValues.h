// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_COMPRESSEDBINARYDOCVALUES_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_COMPRESSEDBINARYDOCVALUES_H

@class LongBinaryDocValues;


#import "OrgApacheLuceneUtilPackedMonotonicBlockPackedReader.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_CompressedBinaryDocValues_CompressedBinaryTermsEnum.h"
#import "OrgApacheLuceneUtilPagedBytes_Reader.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_CompressedBinaryDocValues : LongBinaryDocValues {
    NSInteger numValues_;
    NSInteger numIndexValues_;
    int maxTermLength_;
    OrgApacheLuceneUtilPackedMonotonicBlockPackedReader *addresses_;
    OrgApacheLuceneStoreIndexInput *data_;
    OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_CompressedBinaryDocValues_CompressedBinaryTermsEnum *termsEnum_;
    OrgApacheLuceneUtilPagedBytes_Reader *reverseTerms_;
    OrgApacheLuceneUtilPackedMonotonicBlockPackedReader *reverseAddresses_;
    NSInteger numReverseIndexValues_;
}




-(id)initWithOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry:(id)arg0 withOrgApacheLuceneUtilPackedMonotonicBlockPackedReader:(id)arg1 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_ReverseTermsIndex:(id)arg2 withOrgApacheLuceneStoreIndexInput:(id)arg3 ;
-(id)getWithLong:(NSInteger)arg0 ;
-(NSInteger)lookupTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)getTermsEnum;
-(id)getTermsEnumWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
-(void)dealloc;


@end


#endif