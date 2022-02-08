// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREFILESWITCHDIRECTORY_H
#define ORGAPACHELUCENESTOREFILESWITCHDIRECTORY_H



#import "OrgApacheLuceneStoreDirectory.h"
#import "JavaUtilSet-Protocol.h"

@interface OrgApacheLuceneStoreFileSwitchDirectory : OrgApacheLuceneStoreDirectory {
    OrgApacheLuceneStoreDirectory *secondaryDir_;
    OrgApacheLuceneStoreDirectory *primaryDir_;
    id<JavaUtilSet> *primaryExtensions_;
    BOOL doClose_;
}




-(id)initWithJavaUtilSet:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 withOrgApacheLuceneStoreDirectory:(id)arg2 withBoolean:(BOOL)arg3 ;
-(id)getPrimaryDir;
-(id)getSecondaryDir;
-(id)obtainLockWithNSString:(id)arg0 ;
-(void)close;
-(id)listAll;
-(id)getDirectoryWithNSString:(id)arg0 ;
-(void)deleteFileWithNSString:(id)arg0 ;
-(NSInteger)fileLengthWithNSString:(id)arg0 ;
-(id)createOutputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)syncWithJavaUtilCollection:(id)arg0 ;
-(void)renameFileWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)openInputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)dealloc;
+(id)getExtensionWithNSString:(id)arg0 ;


@end


#endif