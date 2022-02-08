// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_COMPRESSEDBINARYDOCVALUES_COMPRESSEDBINARYTERMSENUM_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_COMPRESSEDBINARYDOCVALUES_COMPRESSEDBINARYTERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_CompressedBinaryDocValues.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSIntArray.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_CompressedBinaryDocValues_CompressedBinaryTermsEnum : OrgApacheLuceneIndexTermsEnum {
    OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_CompressedBinaryDocValues *this$0_;
    NSInteger currentOrd_;
    NSInteger currentBlockStart_;
    OrgApacheLuceneStoreIndexInput *input_;
    IOSIntArray *offsets_;
    IOSByteArray *buffer_;
    OrgApacheLuceneUtilBytesRef *term_;
    OrgApacheLuceneUtilBytesRef *firstTerm_;
    OrgApacheLuceneUtilBytesRef *scratch_;
}




-(id)initWithOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_CompressedBinaryDocValues:(id)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 ;
-(void)readHeader;
-(void)readByteAddresses;
-(void)readShortAddresses;
-(void)readFirstTerm;
-(void)readTermWithInt:(int)arg0 ;
-(id)next;
-(NSInteger)binarySearchIndexWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(NSInteger)binarySearchBlockWithOrgApacheLuceneUtilBytesRef:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(id)term;
-(NSInteger)ord;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif