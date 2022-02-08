// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_BLOCKSTATE_$1_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_BLOCKSTATE_$1_H



#import "OrgApacheLuceneStoreDataInput.h"
#import "OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_BlockState.h"

@interface OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_BlockState_$1 : OrgApacheLuceneStoreDataInput {
    OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_BlockState *this$0_;
    int decompressed_;
    int val$length_;
}




-(void)fillBuffer;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithOrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_BlockState:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif