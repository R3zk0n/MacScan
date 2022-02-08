// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSYSTEM_H
#define JAVALANGSYSTEM_H


#import <Foundation/Foundation.h>


@interface JavaLangSystem : NSObject



-(id)init;
+(void)setTimeInfoConsts;
+(void)setInWithJavaIoInputStream:(id)arg0 ;
+(void)setOutWithJavaIoPrintStream:(id)arg0 ;
+(void)setErrWithJavaIoPrintStream:(id)arg0 ;
+(NSInteger)currentTimeMillis;
+(int)identityHashCodeWithId:(id)arg0 ;
+(void)arraycopyWithId:(id)arg0 withInt:(int)arg1 withId:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(NSInteger)nanoTime;
+(void)exitWithInt:(int)arg0 ;
+(id)getProperties;
+(id)getPropertyWithNSString:(id)arg0 ;
+(id)getPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)setPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(void)setPropertiesWithJavaUtilProperties:(id)arg0 ;
+(id)clearPropertyWithNSString:(id)arg0 ;
+(id)getenvWithNSString:(id)arg0 ;
+(id)getenv;
+(id)getSecurityManager;
+(id)lineSeparator;
+(void)load__WithNSString:(id)arg0 ;
+(void)loadLibraryWithNSString:(id)arg0 ;
+(void)runFinalization;
+(void)runFinalizersOnExitWithBoolean:(BOOL)arg0 ;
+(void)logEWithNSString:(id)arg0 ;
+(void)logEWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
+(void)logIWithNSString:(id)arg0 ;
+(void)logIWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
+(void)logWWithNSString:(id)arg0 ;
+(void)logWWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
+(void)logWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withJavaLangThrowable:(id)arg2 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif