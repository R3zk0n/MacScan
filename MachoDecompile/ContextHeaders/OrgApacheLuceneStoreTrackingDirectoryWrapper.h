// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORETRACKINGDIRECTORYWRAPPER_H
#define ORGAPACHELUCENESTORETRACKINGDIRECTORYWRAPPER_H



#import "OrgApacheLuceneStoreFilterDirectory.h"
#import "JavaUtilSet-Protocol.h"

@interface OrgApacheLuceneStoreTrackingDirectoryWrapper : OrgApacheLuceneStoreFilterDirectory {
    id<JavaUtilSet> *createdFileNames_;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(void)deleteFileWithNSString:(id)arg0 ;
-(id)createOutputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)copyFromWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 ;
-(void)renameFileWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getCreatedFiles;
-(void)dealloc;


@end


#endif