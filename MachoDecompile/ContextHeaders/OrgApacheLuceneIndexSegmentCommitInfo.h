// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTCOMMITINFO_H
#define ORGAPACHELUCENEINDEXSEGMENTCOMMITINFO_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexSegmentInfo.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneIndexSegmentCommitInfo : NSObject {
    OrgApacheLuceneIndexSegmentInfo *info_;
    int delCount_;
    NSInteger delGen_;
    NSInteger nextWriteDelGen_;
    NSInteger fieldInfosGen_;
    NSInteger nextWriteFieldInfosGen_;
    NSInteger docValuesGen_;
    NSInteger nextWriteDocValuesGen_;
    id<JavaUtilMap> *dvUpdatesFiles_;
    id<JavaUtilSet> *fieldInfosFiles_;
    id<JavaUtilMap> *genUpdatesFiles_;
    uint8_t sizeInBytes_;
    NSInteger bufferedDeletesGen_;
}




-(id)initWithOrgApacheLuceneIndexSegmentInfo:(id)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 withLong:(NSInteger)arg4 ;
-(void)setGenUpdatesFilesWithJavaUtilMap:(id)arg0 ;
-(id)getDocValuesUpdatesFiles;
-(void)setDocValuesUpdatesFilesWithJavaUtilMap:(id)arg0 ;
-(id)getFieldInfosFiles;
-(void)setFieldInfosFilesWithJavaUtilSet:(id)arg0 ;
-(void)advanceDelGen;
-(void)advanceNextWriteDelGen;
-(NSInteger)getNextWriteDelGen;
-(void)setNextWriteDelGenWithLong:(NSInteger)arg0 ;
-(void)advanceFieldInfosGen;
-(void)advanceNextWriteFieldInfosGen;
-(NSInteger)getNextWriteFieldInfosGen;
-(void)setNextWriteFieldInfosGenWithLong:(NSInteger)arg0 ;
-(void)advanceDocValuesGen;
-(void)advanceNextWriteDocValuesGen;
-(NSInteger)getNextWriteDocValuesGen;
-(void)setNextWriteDocValuesGenWithLong:(NSInteger)arg0 ;
-(NSInteger)sizeInBytes;
-(id)files;
-(NSInteger)getBufferedDeletesGen;
-(void)setBufferedDeletesGenWithLong:(NSInteger)arg0 ;
-(BOOL)hasDeletions;
-(BOOL)hasFieldUpdates;
-(NSInteger)getNextFieldInfosGen;
-(NSInteger)getFieldInfosGen;
-(NSInteger)getNextDocValuesGen;
-(NSInteger)getDocValuesGen;
-(NSInteger)getNextDelGen;
-(NSInteger)getDelGen;
-(int)getDelCount;
-(void)setDelCountWithInt:(int)arg0 ;
-(id)toStringWithOrgApacheLuceneStoreDirectory:(id)arg0 withInt:(int)arg1 ;
-(id)toStringWithInt:(int)arg0 ;
-(id)description;
-(id)clone;
-(void)dealloc;


@end


#endif