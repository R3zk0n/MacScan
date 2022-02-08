// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOGAIEXCEPTION_H
#define LIBCOREIOGAIEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangRuntimeException.h"

@interface LibcoreIoGaiException : JavaLangRuntimeException {
    int error_;
    NSString *functionName_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withJavaLangThrowable:(id)arg2 ;
-(id)getMessage;
-(id)rethrowAsUnknownHostExceptionWithNSString:(id)arg0 ;
-(id)rethrowAsUnknownHostException;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif