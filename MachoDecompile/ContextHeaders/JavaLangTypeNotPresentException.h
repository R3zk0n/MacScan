// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTYPENOTPRESENTEXCEPTION_H
#define JAVALANGTYPENOTPRESENTEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangRuntimeException.h"

@interface JavaLangTypeNotPresentException : JavaLangRuntimeException {
    NSString *typeName_;
}




-(id)initWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
-(id)typeName;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif