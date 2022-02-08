// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVFIELDS_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVFIELDS_H



#import "OrgApacheLuceneIndexFields.h"
#import "OrgApacheLuceneCodecsCompressingCompressingTermVectorsReader.h"
#import "IOSIntArray.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsReader_TVFields : OrgApacheLuceneIndexFields {
    OrgApacheLuceneCodecsCompressingCompressingTermVectorsReader *this$0_;
    IOSIntArray *fieldNums_;
    IOSIntArray *fieldFlags_;
    IOSIntArray *fieldNumOffs_;
    IOSIntArray *numTerms_;
    IOSIntArray *fieldLengths_;
    IOSObjectArray *prefixLengths_;
    IOSObjectArray *suffixLengths_;
    IOSObjectArray *termFreqs_;
    IOSObjectArray *positionIndex_;
    IOSObjectArray *positions_;
    IOSObjectArray *startOffsets_;
    IOSObjectArray *lengths_;
    IOSObjectArray *payloadIndex_;
    OrgApacheLuceneUtilBytesRef *suffixBytes_;
    OrgApacheLuceneUtilBytesRef *payloadBytes_;
}




-(id)initWithOrgApacheLuceneCodecsCompressingCompressingTermVectorsReader:(id)arg0 withIntArray:(id)arg1 withIntArray:(id)arg2 withIntArray:(id)arg3 withIntArray:(id)arg4 withIntArray:(id)arg5 withIntArray2:(id)arg6 withIntArray2:(id)arg7 withIntArray2:(id)arg8 withIntArray2:(id)arg9 withIntArray2:(id)arg10 withIntArray2:(id)arg11 withIntArray2:(id)arg12 withOrgApacheLuceneUtilBytesRef:(id)arg13 withIntArray2:(id)arg14 withOrgApacheLuceneUtilBytesRef:(id)arg15 ;
-(id)iterator;
-(id)termsWithNSString:(id)arg0 ;
-(int)size;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif