// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_LZ4FASTCOMPRESSOR_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_LZ4FASTCOMPRESSOR_H



#import "OrgApacheLuceneCodecsCompressingCompressor.h"
#import "OrgApacheLuceneCodecsCompressingLZ4_HashTable.h"

@interface OrgApacheLuceneCodecsCompressingCompressionMode_LZ4FastCompressor : OrgApacheLuceneCodecsCompressingCompressor {
    OrgApacheLuceneCodecsCompressingLZ4_HashTable *ht_;
}




-(id)init;
-(void)compressWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneStoreDataOutput:(id)arg3 ;
-(void)dealloc;


@end


#endif