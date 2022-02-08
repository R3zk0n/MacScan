// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVTERMSENUM_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVTERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneStoreByteArrayDataInput.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsReader_TVTermsEnum : OrgApacheLuceneIndexTermsEnum {
    int numTerms_;
    int startPos_;
    int ord_;
    IOSIntArray *prefixLengths_;
    IOSIntArray *suffixLengths_;
    IOSIntArray *termFreqs_;
    IOSIntArray *positionIndex_;
    IOSIntArray *positions_;
    IOSIntArray *startOffsets_;
    IOSIntArray *lengths_;
    IOSIntArray *payloadIndex_;
    OrgApacheLuceneStoreByteArrayDataInput *in_;
    OrgApacheLuceneUtilBytesRef *payloads_;
    OrgApacheLuceneUtilBytesRef *term_;
}




-(id)init;
-(void)resetWithInt:(int)arg0 withInt:(int)arg1 withIntArray:(id)arg2 withIntArray:(id)arg3 withIntArray:(id)arg4 withIntArray:(id)arg5 withIntArray:(id)arg6 withIntArray:(id)arg7 withIntArray:(id)arg8 withIntArray:(id)arg9 withOrgApacheLuceneUtilBytesRef:(id)arg10 withOrgApacheLuceneStoreByteArrayDataInput:(id)arg11 ;
-(void)reset;
-(id)next;
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