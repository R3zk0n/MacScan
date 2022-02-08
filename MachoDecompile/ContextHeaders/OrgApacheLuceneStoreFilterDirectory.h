// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREFILTERDIRECTORY_H
#define ORGAPACHELUCENESTOREFILTERDIRECTORY_H



#import "OrgApacheLuceneStoreDirectory.h"

@interface OrgApacheLuceneStoreFilterDirectory : OrgApacheLuceneStoreDirectory {
    OrgApacheLuceneStoreDirectory *in_;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(id)getDelegate;
-(id)listAll;
-(void)deleteFileWithNSString:(id)arg0 ;
-(NSInteger)fileLengthWithNSString:(id)arg0 ;
-(id)createOutputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)syncWithJavaUtilCollection:(id)arg0 ;
-(void)renameFileWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)openInputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(id)obtainLockWithNSString:(id)arg0 ;
-(void)close;
-(id)description;
-(void)dealloc;
+(id)unwrapWithOrgApacheLuceneStoreDirectory:(id)arg0 ;


@end


#endif