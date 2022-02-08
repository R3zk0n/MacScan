// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsTermVectorsReader.h"
#import "OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexReader.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "OrgApacheLuceneCodecsCompressingCompressionMode.h"
#import "OrgApacheLuceneCodecsCompressingDecompressor.h"
#import "OrgApacheLuceneUtilPackedBlockPackedReaderIterator.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsReader : OrgApacheLuceneCodecsTermVectorsReader <JavaIoCloseable>

 {
    OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexReader *indexReader_;
    OrgApacheLuceneStoreIndexInput *vectorsStream_;
    OrgApacheLuceneIndexFieldInfos *fieldInfos_;
    int version__;
    int packedIntsVersion_;
    OrgApacheLuceneCodecsCompressingCompressionMode *compressionMode_;
    OrgApacheLuceneCodecsCompressingDecompressor *decompressor_;
    int chunkSize_;
    int numDocs_;
    BOOL closed_;
    OrgApacheLuceneUtilPackedBlockPackedReaderIterator *reader_;
    NSInteger numChunks_;
    NSInteger numDirtyChunks_;
    NSInteger maxPointer_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneCodecsCompressingCompressingTermVectorsReader:(id)arg0 ;
-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withNSString:(id)arg2 withOrgApacheLuceneIndexFieldInfos:(id)arg3 withOrgApacheLuceneStoreIOContext:(id)arg4 withNSString:(id)arg5 withOrgApacheLuceneCodecsCompressingCompressionMode:(id)arg6 ;
-(id)getCompressionMode;
-(int)getChunkSize;
-(int)getPackedIntsVersion;
-(int)getVersion;
-(id)getIndexReader;
-(id)getVectorsStream;
-(NSInteger)getMaxPointer;
-(NSInteger)getNumChunks;
-(NSInteger)getNumDirtyChunks;
-(void)ensureOpen;
-(void)close;
-(id)clone;
-(id)getWithInt:(int)arg0 ;
-(id)positionIndexWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilPackedPackedInts_Reader:(id)arg2 withIntArray:(id)arg3 ;
-(id)readPositionsWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilPackedPackedInts_Reader:(id)arg2 withOrgApacheLuceneUtilPackedPackedInts_Reader:(id)arg3 withIntArray:(id)arg4 withInt:(int)arg5 withInt:(int)arg6 withIntArray2:(id)arg7 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(void)dealloc;


@end


#endif