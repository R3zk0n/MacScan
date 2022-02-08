// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_DEFLATECOMPRESSOR_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSIONMODE_DEFLATECOMPRESSOR_H



#import "OrgApacheLuceneCodecsCompressingCompressor.h"
#import "JavaUtilZipDeflater.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneCodecsCompressingCompressionMode_DeflateCompressor : OrgApacheLuceneCodecsCompressingCompressor {
    JavaUtilZipDeflater *compressor_;
    IOSByteArray *compressed_;
}




-(id)initWithInt:(int)arg0 ;
-(void)compressWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneStoreDataOutput:(id)arg3 ;
-(void)dealloc;


@end


#endif