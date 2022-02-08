// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREFSDIRECTORY_H
#define ORGAPACHELUCENESTOREFSDIRECTORY_H



#import "OrgApacheLuceneStoreBaseDirectory.h"
#import "OrgLukhnosPortmobileFilePath.h"

@interface OrgApacheLuceneStoreFSDirectory : OrgApacheLuceneStoreBaseDirectory {
    OrgLukhnosPortmobileFilePath *directory_;
}




-(id)initWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgApacheLuceneStoreLockFactory:(id)arg1 ;
-(id)listAll;
-(NSInteger)fileLengthWithNSString:(id)arg0 ;
-(void)deleteFileWithNSString:(id)arg0 ;
-(id)createOutputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)ensureCanWriteWithNSString:(id)arg0 ;
-(void)syncWithJavaUtilCollection:(id)arg0 ;
-(void)renameFileWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)close;
-(id)getDirectory;
-(id)description;
-(void)fsyncWithNSString:(id)arg0 ;
-(void)dealloc;
+(id)openWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(id)openWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgApacheLuceneStoreLockFactory:(id)arg1 ;
+(id)listAllWithOrgLukhnosPortmobileFilePath:(id)arg0 ;


@end


#endif