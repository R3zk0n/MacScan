// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_DEFLATEDECOMPRESSOR_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_DEFLATEDECOMPRESSOR_H



#import "OrgApacheLuceneCodecsCompressingDecompressor.h"
#import "JavaUtilZipInflater.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneCodecsCompressingCompressionMode_DeflateDecompressor : OrgApacheLuceneCodecsCompressingDecompressor {
    JavaUtilZipInflater *decompressor_;
    IOSByteArray *compressed_;
}




-(id)init;
-(void)decompressWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withOrgApacheLuceneUtilBytesRef:(id)arg4 ;
-(id)clone;
-(void)dealloc;


@end


#endif