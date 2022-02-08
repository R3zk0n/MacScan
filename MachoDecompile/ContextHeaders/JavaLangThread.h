// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTHREAD_H
#define JAVALANGTHREAD_H


#import <Foundation/Foundation.h>

#import "JavaLangThreadLocal_Values.h"
#import "JavaLangClassLoader.h"
#import "JavaLangThreadGroup.h"
#import "AutoreleaseLiteSupport-Protocol.h"
#import "JavaLangRunnable-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface JavaLangThread : NSObject <AutoreleaseLiteSupport, JavaLangRunnable>

 {
    BOOL interrupted_;
    JavaLangThreadLocal_Values *localValues_;
    JavaLangThreadLocal_Values *inheritableValues_;
    id *blocker_;
    uint8_t _autoreleaseLiteLastPoolId;
    id *nsThread_;
    id *vmThread_;
    BOOL isDaemon_;
    BOOL running_;
    JavaLangClassLoader *contextClassLoader_;
    JavaLangThreadGroup *threadGroup_;
    int parkState_;
    id *parkBlocker_;
    id<JavaUtilList> *interruptActions_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)autorelease;
-(id)init;
-(id)initWithJavaLangRunnable:(id)arg0 ;
-(id)initWithJavaLangRunnable:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaLangThreadGroup:(id)arg0 withJavaLangRunnable:(id)arg1 ;
-(id)initWithJavaLangThreadGroup:(id)arg0 withJavaLangRunnable:(id)arg1 withNSString:(id)arg2 withLong:(NSInteger)arg3 ;
-(id)initWithJavaLangThreadGroup:(id)arg0 withJavaLangRunnable:(id)arg1 withNSString:(id)arg2 ;
-(id)initWithJavaLangThreadGroup:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaLangThreadGroup:(id)arg0 withNSString:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)createWithJavaLangThreadGroup:(id)arg0 withJavaLangRunnable:(id)arg1 withNSString:(id)arg2 withLong:(NSInteger)arg3 withBoolean:(BOOL)arg4 ;
-(void)start;
-(void)run;
-(void)run0WithId:(id)arg0 ;
-(void)cancelNativeThread;
-(BOOL)isDaemon;
-(void)setDaemonWithBoolean:(BOOL)arg0 ;
-(NSInteger)getId;
-(id)getName;
-(void)setNameWithNSString:(id)arg0 ;
-(int)getPriority;
-(void)setPriorityWithInt:(int)arg0 ;
-(void)setPriority0WithInt:(int)arg0 ;
-(id)getState;
-(id)getThreadGroup;
-(id)getStackTrace;
-(int)countStackFrames;
-(void)interrupt;
-(BOOL)isInterrupted;
-(void)join;
-(void)joinWithLong:(NSInteger)arg0 ;
-(void)joinWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(BOOL)isAlive;
-(void)checkAccess;
-(void)yield0;
-(id)getContextClassLoader;
-(void)setContextClassLoaderWithJavaLangClassLoader:(id)arg0 ;
-(void)unpark;
-(void)parkForWithLong:(NSInteger)arg0 ;
-(void)parkUntilWithLong:(NSInteger)arg0 ;
-(id)getUncaughtExceptionHandler;
-(void)setUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id)arg0 ;
-(void)pushInterruptAction$WithJavaLangRunnable:(id)arg0 ;
-(void)popInterruptAction$WithJavaLangRunnable:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(void)initializeThreadClass;
+(id)currentThread;
+(int)activeCount;
+(void)dumpStack;
+(int)enumerateWithJavaLangThreadArray:(id)arg0 ;
+(BOOL)interrupted;
+(void)sleepWithLong:(NSInteger)arg0 ;
+(void)sleepWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(void)yield;
+(NSInteger)getNextThreadId;
+(BOOL)holdsLockWithId:(id)arg0 ;
+(id)getDefaultUncaughtExceptionHandler;
+(void)setDefaultUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id)arg0 ;
+(id)getAllStackTraces;
+(void)initialize;
+(id)__annotations_countStackFrames;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif