// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXINDEXFORMATTOONEWEXCEPTION_H
#define ORGAPACHELUCENEINDEXINDEXFORMATTOONEWEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaIoIOException.h"

@interface OrgApacheLuceneIndexIndexFormatTooNewException : JavaIoIOException {
    NSString *resourceDescription_;
    int version__;
    int minVersion_;
    int maxVersion_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)getResourceDescription;
-(int)getVersion;
-(int)getMaxVersion;
-(int)getMinVersion;
-(void)dealloc;


@end


#endif