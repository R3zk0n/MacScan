// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSWRITER_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSWRITER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsStoredFieldsWriter.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexWriter.h"
#import "OrgApacheLuceneStoreIndexOutput.h"
#import "OrgApacheLuceneCodecsCompressingCompressor.h"
#import "OrgApacheLuceneCodecsCompressingCompressionMode.h"
#import "OrgApacheLuceneUtilGrowableByteArrayDataOutput.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneCodecsCompressingCompressingStoredFieldsWriter : OrgApacheLuceneCodecsStoredFieldsWriter {
    IOSByteArray *scratchBytes_;
    NSString *segment_;
    OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexWriter *indexWriter_;
    OrgApacheLuceneStoreIndexOutput *fieldsStream_;
    OrgApacheLuceneCodecsCompressingCompressor *compressor_;
    OrgApacheLuceneCodecsCompressingCompressionMode *compressionMode_;
    int chunkSize_;
    int maxDocsPerChunk_;
    OrgApacheLuceneUtilGrowableByteArrayDataOutput *bufferedDocs_;
    IOSIntArray *numStoredFields_;
    IOSIntArray *endOffsets_;
    int docBase_;
    int numBufferedDocs_;
    NSInteger numChunks_;
    NSInteger numDirtyChunks_;
    int numStoredFieldsInDoc_;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withNSString:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 withNSString:(id)arg4 withOrgApacheLuceneCodecsCompressingCompressionMode:(id)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 ;
-(void)close;
-(void)startDocument;
-(void)finishDocument;
-(void)writeHeaderWithInt:(int)arg0 withInt:(int)arg1 withIntArray:(id)arg2 withIntArray:(id)arg3 withBoolean:(BOOL)arg4 ;
-(BOOL)triggerFlush;
-(void)flush;
-(void)writeFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneIndexIndexableField:(id)arg1 ;
-(void)finishWithOrgApacheLuceneIndexFieldInfos:(id)arg0 withInt:(int)arg1 ;
-(int)mergeWithOrgApacheLuceneIndexMergeState:(id)arg0 ;
-(BOOL)tooDirtyWithOrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader:(id)arg0 ;
-(void)dealloc;
+(void)writeZFloatWithOrgApacheLuceneStoreDataOutput:(id)arg0 withFloat:(float)arg1 ;
+(void)writeZDoubleWithOrgApacheLuceneStoreDataOutput:(id)arg0 withDouble:(CGFloat)arg1 ;
+(void)writeTLongWithOrgApacheLuceneStoreDataOutput:(id)arg0 withLong:(NSInteger)arg1 ;
+(void)initialize;


@end


#endif