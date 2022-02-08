// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_LZ4HIGHCOMPRESSOR_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_LZ4HIGHCOMPRESSOR_H



#import "OrgApacheLuceneCodecsCompressingCompressor.h"
#import "OrgApacheLuceneCodecsCompressingLZ4_HCHashTable.h"

@interface OrgApacheLuceneCodecsCompressingCompressionMode_LZ4HighCompressor : OrgApacheLuceneCodecsCompressingCompressor {
    OrgApacheLuceneCodecsCompressingLZ4_HCHashTable *ht_;
}




-(id)init;
-(void)compressWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneStoreDataOutput:(id)arg3 ;
-(void)dealloc;


@end


#endif