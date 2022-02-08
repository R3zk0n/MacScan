// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVTERMS_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVTERMS_H



#import "OrgApacheLuceneIndexTerms.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsReader_TVTerms : OrgApacheLuceneIndexTerms {
    int numTerms_;
    int flags_;
    IOSIntArray *prefixLengths_;
    IOSIntArray *suffixLengths_;
    IOSIntArray *termFreqs_;
    IOSIntArray *positionIndex_;
    IOSIntArray *positions_;
    IOSIntArray *startOffsets_;
    IOSIntArray *lengths_;
    IOSIntArray *payloadIndex_;
    OrgApacheLuceneUtilBytesRef *termBytes_;
    OrgApacheLuceneUtilBytesRef *payloadBytes_;
}




-(id)initWithOrgApacheLuceneCodecsCompressingCompressingTermVectorsReader:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withIntArray:(id)arg3 withIntArray:(id)arg4 withIntArray:(id)arg5 withIntArray:(id)arg6 withIntArray:(id)arg7 withIntArray:(id)arg8 withIntArray:(id)arg9 withIntArray:(id)arg10 withOrgApacheLuceneUtilBytesRef:(id)arg11 withOrgApacheLuceneUtilBytesRef:(id)arg12 ;
-(id)iterator;
-(NSInteger)size;
-(NSInteger)getSumTotalTermFreq;
-(NSInteger)getSumDocFreq;
-(int)getDocCount;
-(BOOL)hasFreqs;
-(BOOL)hasOffsets;
-(BOOL)hasPositions;
-(BOOL)hasPayloads;
-(void)dealloc;


@end


#endif