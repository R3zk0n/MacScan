// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOERRNOEXCEPTION_H
#define LIBCOREIOERRNOEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangException.h"

@interface LibcoreIoErrnoException : JavaLangException {
    int errno__;
    NSString *functionName_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withJavaLangThrowable:(id)arg2 ;
-(id)getMessage;
-(id)rethrowAsIOException;
-(id)rethrowAsSocketException;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif