// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXINDEXWRITER_H
#define ORGAPACHELUCENEINDEXINDEXWRITER_H

@class OrgApacheLuceneUtilInfoStream, OrgApacheLuceneIndexBufferedUpdatesStream;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexFieldInfos_FieldNumbers.h"
#import "JavaUtilConcurrentAtomicAtomicLong.h"
#import "OrgApacheLuceneIndexIndexWriter_ReaderPool.h"
#import "JavaIoCloseable-Protocol.h"
#import "OrgApacheLuceneIndexTwoPhaseCommit-Protocol.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneIndexIndexWriter : NSObject <JavaIoCloseable, OrgApacheLuceneIndexTwoPhaseCommit, OrgApacheLuceneUtilAccountable>

 {
    OrgApacheLuceneUtilInfoStream *infoStream_;
    OrgApacheLuceneIndexFieldInfos_FieldNumbers *globalFieldNumberMap_;
    OrgApacheLuceneIndexBufferedUpdatesStream *bufferedUpdatesStream_;
    JavaUtilConcurrentAtomicAtomicLong *pendingNumDocs_;
    uint8_t tragedy_;
    OrgApacheLuceneIndexIndexWriter_ReaderPool *readerPool_;
    BOOL enableTestPoints_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)maxDoc;
-(NSInteger)ramBytesUsed;
-(void)close;
-(void)prepareCommit;
-(void)rollback;
-(void)commit;
-(id)getChildResources;
-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexIndexWriterConfig:(id)arg1 ;
-(id)getReader;
-(id)getReaderWithBoolean:(BOOL)arg0 ;
-(BOOL)isClosed;
-(BOOL)nrtIsCurrentWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(void)incRefDeleterWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(void)decRefDeleterWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(BOOL)getKeepFullyDeletedSegments;
-(int)numDeletedDocsWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(id)getMergingSegments;
-(id)segString;
-(id)segStringWithJavaLangIterable:(id)arg0 ;
-(id)segStringWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(id)getDirectory;
-(void)checkpoint;
-(void)checkpointNoSIS;
-(void)changed;
-(void)publishFrozenUpdatesWithOrgApacheLuceneIndexFrozenBufferedUpdates:(id)arg0 ;
-(void)publishFlushedSegmentWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withOrgApacheLuceneIndexFrozenBufferedUpdates:(id)arg1 withOrgApacheLuceneIndexFrozenBufferedUpdates:(id)arg2 ;
-(BOOL)hasUncommittedChanges;
-(void)createCompoundFileWithOrgApacheLuceneUtilInfoStream:(id)arg0 withOrgApacheLuceneStoreTrackingDirectoryWrapper:(id)arg1 withOrgApacheLuceneIndexSegmentInfo:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 ;
-(void)forceMergeWithInt:(int)arg0 ;
-(void)forceMergeWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)holdsFullFlushLock;
-(id)newSegmentName;
-(id)getCommitData;
-(void)setCommitDataWithJavaUtilMap:(id)arg0 ;
-(id)getNextMerge;
-(BOOL)hasPendingMerges;
-(void)mergeFinishWithOrgApacheLuceneIndexMergePolicy_OneMerge:(id)arg0 ;
-(void)mergeWithOrgApacheLuceneIndexMergePolicy_OneMerge:(id)arg0 ;
-(void)applyDeletesAndPurgeWithBoolean:(BOOL)arg0 ;
-(void)doAfterSegmentFlushedWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(int)purgeWithBoolean:(BOOL)arg0 ;
-(void)flushFailedWithOrgApacheLuceneIndexSegmentInfo:(id)arg0 ;
-(void)deleteNewFilesWithJavaUtilCollection:(id)arg0 ;
-(void)ensureOpen;
-(void)ensureOpenWithBoolean:(BOOL)arg0 ;
-(id)toLiveInfosWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(void)updateDocumentWithOrgApacheLuceneIndexTerm:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)updateDocumentsWithOrgApacheLuceneIndexTerm:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(BOOL)tryDeleteDocumentWithOrgApacheLuceneIndexIndexReader:(id)arg0 withInt:(int)arg1 ;
-(void)deleteDocumentsWithOrgApacheLuceneIndexTermArray:(id)arg0 ;
-(void)deleteDocumentsWithOrgApacheLuceneSearchQueryArray:(id)arg0 ;
-(void)deleteAll;
-(void)addDocumentWithJavaLangIterable:(id)arg0 ;
-(void)addDocumentsWithJavaLangIterable:(id)arg0 ;
-(void)addIndexesWithOrgApacheLuceneStoreDirectoryArray:(id)arg0 ;
-(void)addIndexesWithOrgApacheLuceneIndexCodecReaderArray:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(void)setMaxDocsWithInt:(int)arg0 ;
+(int)getActualMaxDocs;
+(void)setDiagnosticsWithOrgApacheLuceneIndexSegmentInfo:(id)arg0 withNSString:(id)arg1 ;


@end


#endif