// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGERROR_H
#define JAVALANGERROR_H



#import "JavaLangThrowable.h"

@interface JavaLangError : JavaLangThrowable



-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
-(id)initWithJavaLangThrowable:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif