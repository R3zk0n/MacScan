// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSWRITER_FIELDDATA_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSWRITER_FIELDDATA_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter_FieldData : NSObject {
    OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter *this$0_;
    BOOL hasPositions_;
    BOOL hasOffsets_;
    BOOL hasPayloads_;
    int fieldNum_;
    int flags_;
    int numTerms_;
    IOSIntArray *freqs_;
    IOSIntArray *prefixLengths_;
    IOSIntArray *suffixLengths_;
    int posStart_;
    int offStart_;
    int payStart_;
    int totalPositions_;
    int ord_;
}




-(id)initWithOrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 ;
-(void)addTermWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)addPositionWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)dealloc;


@end


#endif