// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_H



#import "OrgApacheLuceneCodecsStoredFieldsReader.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexReader.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneCodecsCompressingCompressionMode.h"
#import "OrgApacheLuceneCodecsCompressingDecompressor.h"
#import "OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_BlockState.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader : OrgApacheLuceneCodecsStoredFieldsReader <AutoreleaseLiteSupport>

 {
    uint8_t _autoreleaseLiteLastPoolId;
    int version__;
    OrgApacheLuceneIndexFieldInfos *fieldInfos_;
    OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexReader *indexReader_;
    NSInteger maxPointer_;
    OrgApacheLuceneStoreIndexInput *fieldsStream_;
    int chunkSize_;
    int packedIntsVersion_;
    OrgApacheLuceneCodecsCompressingCompressionMode *compressionMode_;
    OrgApacheLuceneCodecsCompressingDecompressor *decompressor_;
    int numDocs_;
    BOOL merging_;
    OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_BlockState *state_;
    NSInteger numChunks_;
    NSInteger numDirtyChunks_;
    BOOL closed_;
}




-(id)autorelease;
-(id)initWithOrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withNSString:(id)arg2 withOrgApacheLuceneIndexFieldInfos:(id)arg3 withOrgApacheLuceneStoreIOContext:(id)arg4 withNSString:(id)arg5 withOrgApacheLuceneCodecsCompressingCompressionMode:(id)arg6 ;
-(void)ensureOpen;
-(void)close;
-(id)documentWithInt:(int)arg0 ;
-(void)visitDocumentWithInt:(int)arg0 withOrgApacheLuceneIndexStoredFieldVisitor:(id)arg1 ;
-(id)clone;
-(id)getMergeInstance;
-(int)getVersion;
-(id)getCompressionMode;
-(id)getIndexReader;
-(NSInteger)getMaxPointer;
-(id)getFieldsStream;
-(int)getChunkSize;
-(NSInteger)getNumChunks;
-(NSInteger)getNumDirtyChunks;
-(int)getPackedIntsVersion;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(id)description;
-(void)dealloc;
+(float)readZFloatWithOrgApacheLuceneStoreDataInput:(id)arg0 ;
+(CGFloat)readZDoubleWithOrgApacheLuceneStoreDataInput:(id)arg0 ;
+(NSInteger)readTLongWithOrgApacheLuceneStoreDataInput:(id)arg0 ;


@end


#endif