// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSTANDARDDIRECTORYREADER_READERCOMMIT_H
#define ORGAPACHELUCENEINDEXSTANDARDDIRECTORYREADER_READERCOMMIT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexIndexCommit.h"
#import "OrgApacheLuceneStoreDirectory.h"
#import "OrgApacheLuceneIndexStandardDirectoryReader.h"
#import "JavaUtilCollection-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneIndexStandardDirectoryReader_ReaderCommit : OrgApacheLuceneIndexIndexCommit {
    id<JavaUtilCollection> *files_;
    OrgApacheLuceneStoreDirectory *dir_;
    NSInteger generation_;
    id<JavaUtilMap> *userData_;
    NSString *segmentsFileName_;
    int segmentCount_;
    OrgApacheLuceneIndexStandardDirectoryReader *reader_;
}




-(id)initWithOrgApacheLuceneIndexStandardDirectoryReader:(id)arg0 withOrgApacheLuceneIndexSegmentInfos:(id)arg1 withOrgApacheLuceneStoreDirectory:(id)arg2 ;
-(id)description;
-(int)getSegmentCount;
-(id)getSegmentsFileName;
-(id)getFileNames;
-(id)getDirectory;
-(NSInteger)getGeneration;
-(BOOL)isDeleted;
-(id)getUserData;
-(void)delete__;
-(id)getReader;
-(void)dealloc;


@end


#endif