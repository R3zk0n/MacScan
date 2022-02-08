// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGEPOLICY_MERGEEXCEPTION_H
#define ORGAPACHELUCENEINDEXMERGEPOLICY_MERGEEXCEPTION_H



#import "JavaLangRuntimeException.h"
#import "OrgApacheLuceneStoreDirectory.h"

@interface OrgApacheLuceneIndexMergePolicy_MergeException : JavaLangRuntimeException {
    OrgApacheLuceneStoreDirectory *dir_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 ;
-(id)initWithJavaLangThrowable:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 ;
-(id)getDirectory;
-(void)dealloc;


@end


#endif