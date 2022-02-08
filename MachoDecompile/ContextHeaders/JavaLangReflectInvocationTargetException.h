// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTINVOCATIONTARGETEXCEPTION_H
#define JAVALANGREFLECTINVOCATIONTARGETEXCEPTION_H



#import "JavaLangReflectiveOperationException.h"
#import "JavaLangThrowable.h"

@interface JavaLangReflectInvocationTargetException : JavaLangReflectiveOperationException {
    JavaLangThrowable *target_;
}




-(id)init;
-(id)initWithJavaLangThrowable:(id)arg0 ;
-(id)initWithJavaLangThrowable:(id)arg0 withNSString:(id)arg1 ;
-(id)getTargetException;
-(id)getCause;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif