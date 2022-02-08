// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGEXCEPTIONININITIALIZERERROR_H
#define JAVALANGEXCEPTIONININITIALIZERERROR_H



#import "JavaLangLinkageError.h"
#import "JavaLangThrowable.h"

@interface JavaLangExceptionInInitializerError : JavaLangLinkageError {
    JavaLangThrowable *exception_;
}




-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaLangThrowable:(id)arg0 ;
-(id)getException;
-(id)getCause;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif