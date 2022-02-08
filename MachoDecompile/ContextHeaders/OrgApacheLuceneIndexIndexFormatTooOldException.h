// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXINDEXFORMATTOOOLDEXCEPTION_H
#define ORGAPACHELUCENEINDEXINDEXFORMATTOOOLDEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaIoIOException.h"
#import "JavaLangInteger.h"

@interface OrgApacheLuceneIndexIndexFormatTooOldException : JavaIoIOException {
    NSString *resourceDescription_;
    NSString *reason_;
    JavaLangInteger *version__;
    JavaLangInteger *minVersion_;
    JavaLangInteger *maxVersion_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)getResourceDescription;
-(id)getReason;
-(id)getVersion;
-(id)getMaxVersion;
-(id)getMinVersion;
-(void)dealloc;


@end


#endif