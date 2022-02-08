// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTHREAD_SYSTEMUNCAUGHTEXCEPTIONHANDLER_H
#define JAVALANGTHREAD_SYSTEMUNCAUGHTEXCEPTIONHANDLER_H


#import <Foundation/Foundation.h>

#import "JavaLangThread_UncaughtExceptionHandler-Protocol.h"

@interface JavaLangThread_SystemUncaughtExceptionHandler : NSObject <JavaLangThread_UncaughtExceptionHandler>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)uncaughtExceptionWithJavaLangThread:(id)arg0 withJavaLangThrowable:(id)arg1 ;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif