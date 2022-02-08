// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXDIRECTORYREADER_H
#define ORGAPACHELUCENEINDEXDIRECTORYREADER_H



#import "OrgApacheLuceneIndexBaseCompositeReader.h"
#import "OrgApacheLuceneStoreDirectory.h"

@interface OrgApacheLuceneIndexDirectoryReader : OrgApacheLuceneIndexBaseCompositeReader {
    OrgApacheLuceneStoreDirectory *directory_;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexLeafReaderArray:(id)arg1 ;
-(id)directory;
-(void)dealloc;
+(id)openWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
+(id)openWithOrgApacheLuceneIndexIndexWriter:(id)arg0 withBoolean:(BOOL)arg1 ;
+(id)openWithOrgApacheLuceneIndexIndexCommit:(id)arg0 ;
+(id)openIfChangedWithOrgApacheLuceneIndexDirectoryReader:(id)arg0 ;
+(id)openIfChangedWithOrgApacheLuceneIndexDirectoryReader:(id)arg0 withOrgApacheLuceneIndexIndexCommit:(id)arg1 ;
+(id)openIfChangedWithOrgApacheLuceneIndexDirectoryReader:(id)arg0 withOrgApacheLuceneIndexIndexWriter:(id)arg1 withBoolean:(BOOL)arg2 ;
+(id)listCommitsWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
+(BOOL)indexExistsWithOrgApacheLuceneStoreDirectory:(id)arg0 ;


@end


#endif