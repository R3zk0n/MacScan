// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXCORRUPTINDEXEXCEPTION_H
#define ORGAPACHELUCENEINDEXCORRUPTINDEXEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaIoIOException.h"

@interface OrgApacheLuceneIndexCorruptIndexException : JavaIoIOException {
    NSString *message_;
    NSString *resourceDescription_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreDataInput:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreDataOutput:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreDataInput:(id)arg1 withJavaLangThrowable:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreDataOutput:(id)arg1 withJavaLangThrowable:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withJavaLangThrowable:(id)arg2 ;
-(id)getResourceDescription;
-(id)getOriginalMessage;
-(void)dealloc;


@end


#endif