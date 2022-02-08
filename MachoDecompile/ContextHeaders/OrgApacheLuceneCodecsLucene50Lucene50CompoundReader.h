// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50COMPOUNDREADER_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50COMPOUNDREADER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDirectory.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50CompoundReader : OrgApacheLuceneStoreDirectory {
    OrgApacheLuceneStoreDirectory *directory_;
    NSString *segmentName_;
    id<JavaUtilMap> *entries_;
    OrgApacheLuceneStoreIndexInput *handle_;
    int version__;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneStoreIOContext:(id)arg2 ;
-(id)readEntriesWithByteArray:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 withNSString:(id)arg2 ;
-(void)close;
-(id)openInputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(id)listAll;
-(void)deleteFileWithNSString:(id)arg0 ;
-(void)renameFileWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(NSInteger)fileLengthWithNSString:(id)arg0 ;
-(id)createOutputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)syncWithJavaUtilCollection:(id)arg0 ;
-(id)obtainLockWithNSString:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif