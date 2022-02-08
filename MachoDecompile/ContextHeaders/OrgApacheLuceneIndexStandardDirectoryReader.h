// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSTANDARDDIRECTORYREADER_H
#define ORGAPACHELUCENEINDEXSTANDARDDIRECTORYREADER_H



#import "OrgApacheLuceneIndexDirectoryReader.h"
#import "OrgApacheLuceneIndexIndexWriter.h"
#import "OrgApacheLuceneIndexSegmentInfos.h"

@interface OrgApacheLuceneIndexStandardDirectoryReader : OrgApacheLuceneIndexDirectoryReader {
    OrgApacheLuceneIndexIndexWriter *writer_;
    OrgApacheLuceneIndexSegmentInfos *segmentInfos_;
    BOOL applyAllDeletes_;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexLeafReaderArray:(id)arg1 withOrgApacheLuceneIndexIndexWriter:(id)arg2 withOrgApacheLuceneIndexSegmentInfos:(id)arg3 withBoolean:(BOOL)arg4 ;
-(id)description;
-(id)doOpenIfChanged;
-(id)doOpenIfChangedWithOrgApacheLuceneIndexIndexCommit:(id)arg0 ;
-(id)doOpenIfChangedWithOrgApacheLuceneIndexIndexWriter:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)doOpenFromWriterWithOrgApacheLuceneIndexIndexCommit:(id)arg0 ;
-(id)doOpenNoWriterWithOrgApacheLuceneIndexIndexCommit:(id)arg0 ;
-(id)doOpenFromCommitWithOrgApacheLuceneIndexIndexCommit:(id)arg0 ;
-(id)doOpenIfChangedWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(NSInteger)getVersion;
-(BOOL)isCurrent;
-(void)doClose;
-(id)getIndexCommit;
-(void)dealloc;
+(id)openWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexIndexCommit:(id)arg1 ;
+(id)openWithOrgApacheLuceneIndexIndexWriter:(id)arg0 withOrgApacheLuceneIndexSegmentInfos:(id)arg1 withBoolean:(BOOL)arg2 ;


@end


#endif