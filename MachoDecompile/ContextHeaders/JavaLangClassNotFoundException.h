// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGCLASSNOTFOUNDEXCEPTION_H
#define JAVALANGCLASSNOTFOUNDEXCEPTION_H



#import "JavaLangReflectiveOperationException.h"
#import "JavaLangThrowable.h"

@interface JavaLangClassNotFoundException : JavaLangReflectiveOperationException {
    JavaLangThrowable *ex_;
}




-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
-(id)getException;
-(id)getCause;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif