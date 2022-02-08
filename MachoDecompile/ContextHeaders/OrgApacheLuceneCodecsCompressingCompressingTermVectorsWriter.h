// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSWRITER_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSWRITER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsTermVectorsWriter.h"
#import "OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexWriter.h"
#import "OrgApacheLuceneStoreIndexOutput.h"
#import "OrgApacheLuceneCodecsCompressingCompressionMode.h"
#import "OrgApacheLuceneCodecsCompressingCompressor.h"
#import "OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter_DocData.h"
#import "OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter_FieldData.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilGrowableByteArrayDataOutput.h"
#import "OrgApacheLuceneUtilPackedBlockPackedWriter.h"
#import "JavaUtilDeque-Protocol.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter : OrgApacheLuceneCodecsTermVectorsWriter {
    NSString *segment_;
    OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexWriter *indexWriter_;
    OrgApacheLuceneStoreIndexOutput *vectorsStream_;
    OrgApacheLuceneCodecsCompressingCompressionMode *compressionMode_;
    OrgApacheLuceneCodecsCompressingCompressor *compressor_;
    int chunkSize_;
    NSInteger numChunks_;
    NSInteger numDirtyChunks_;
    int numDocs_;
    id<JavaUtilDeque> *pendingDocs_;
    OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter_DocData *curDoc_;
    OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter_FieldData *curField_;
    OrgApacheLuceneUtilBytesRef *lastTerm_;
    IOSIntArray *positionsBuf_;
    IOSIntArray *startOffsetsBuf_;
    IOSIntArray *lengthsBuf_;
    IOSIntArray *payloadLengthsBuf_;
    OrgApacheLuceneUtilGrowableByteArrayDataOutput *termSuffixes_;
    OrgApacheLuceneUtilGrowableByteArrayDataOutput *payloadBytes_;
    OrgApacheLuceneUtilPackedBlockPackedWriter *writer_;
}




-(id)addDocDataWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withNSString:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 withNSString:(id)arg4 withOrgApacheLuceneCodecsCompressingCompressionMode:(id)arg5 withInt:(int)arg6 withInt:(int)arg7 ;
-(void)close;
-(void)startDocumentWithInt:(int)arg0 ;
-(void)finishDocument;
-(void)startFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 ;
-(void)finishField;
-(void)startTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 withInt:(int)arg1 ;
-(void)addPositionWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 ;
-(BOOL)triggerFlush;
-(void)flush;
-(int)flushNumFieldsWithInt:(int)arg0 ;
-(id)flushFieldNums;
-(void)flushFieldsWithInt:(int)arg0 withIntArray:(id)arg1 ;
-(void)flushFlagsWithInt:(int)arg0 withIntArray:(id)arg1 ;
-(void)flushNumTermsWithInt:(int)arg0 ;
-(void)flushTermLengths;
-(void)flushTermFreqs;
-(void)flushPositions;
-(void)flushOffsetsWithIntArray:(id)arg0 ;
-(void)flushPayloadLengths;
-(void)finishWithOrgApacheLuceneIndexFieldInfos:(id)arg0 withInt:(int)arg1 ;
-(void)addProxWithInt:(int)arg0 withOrgApacheLuceneStoreDataInput:(id)arg1 withOrgApacheLuceneStoreDataInput:(id)arg2 ;
-(int)mergeWithOrgApacheLuceneIndexMergeState:(id)arg0 ;
-(BOOL)tooDirtyWithOrgApacheLuceneCodecsCompressingCompressingTermVectorsReader:(id)arg0 ;
-(void)dealloc;
+(void)initialize;


@end


#endif