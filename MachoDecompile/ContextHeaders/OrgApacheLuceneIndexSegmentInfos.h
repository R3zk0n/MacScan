// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTINFOS_H
#define ORGAPACHELUCENEINDEXSEGMENTINFOS_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilVersion.h"
#import "NSCopying-Protocol.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneIndexSegmentInfos : NSObject <NSCopying, JavaLangIterable>

 {
    int counter_;
    NSInteger version__;
    id<JavaUtilMap> *userData_;
    BOOL pendingCommit_;
    NSInteger generation_;
    NSInteger lastGeneration_;
    id<JavaUtilList> *segments_;
    IOSByteArray *id__;
    OrgApacheLuceneUtilVersion *luceneVersion_;
    OrgApacheLuceneUtilVersion *minSegmentLuceneVersion_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)infoWithInt:(int)arg0 ;
-(id)getSegmentsFileName;
-(NSInteger)getNextPendingGeneration;
-(id)getId;
-(void)writeWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(id)clone;
-(NSInteger)getVersion;
-(NSInteger)getGeneration;
-(NSInteger)getLastGeneration;
-(void)updateGenerationWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(void)updateGenerationVersionAndCounterWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(void)setNextWriteGenerationWithLong:(NSInteger)arg0 ;
-(void)rollbackCommitWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(void)prepareCommitWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(id)filesWithOrgApacheLuceneStoreDirectory:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)filesWithBoolean:(BOOL)arg0 ;
-(id)finishCommitWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(void)commitWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(id)toStringWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(id)getUserData;
-(void)setUserDataWithJavaUtilMap:(id)arg0 ;
-(void)replaceWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(int)totalMaxDoc;
-(void)changed;
-(void)applyMergeChangesWithOrgApacheLuceneIndexMergePolicy_OneMerge:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)createBackupSegmentInfos;
-(void)rollbackSegmentInfosWithJavaUtilList:(id)arg0 ;
-(id)iterator;
-(id)asList;
-(int)size;
-(void)addWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(void)addAllWithJavaLangIterable:(id)arg0 ;
-(void)clear;
-(void)removeWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(void)removeWithInt:(int)arg0 ;
-(BOOL)containsWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(int)indexOfWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(id)getCommitLuceneVersion;
-(id)getMinSegmentLuceneVersion;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(NSInteger)getLastCommitGenerationWithNSStringArray:(id)arg0 ;
+(NSInteger)getLastCommitGenerationWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
+(id)getLastCommitSegmentsFileNameWithNSStringArray:(id)arg0 ;
+(id)getLastCommitSegmentsFileNameWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
+(NSInteger)generationFromSegmentsFileNameWithNSString:(id)arg0 ;
+(id)readCommitWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSString:(id)arg1 ;
+(id)readLatestCommitWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
+(void)setInfoStreamWithJavaIoPrintStream:(id)arg0 ;
+(id)getInfoStream;
+(void)initialize;


@end


#endif