// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOGGINGLOGGER_H
#define JAVAUTILLOGGINGLOGGER_H


#import <Foundation/Foundation.h>

#import "JavaUtilLoggingLogger.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilLoggingFilter-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface JavaUtilLoggingLogger : NSObject {
    JavaUtilLoggingLogger *parent_;
    uint8_t levelObjVal_;
    uint8_t levelIntVal_;
    id<JavaUtilList> *children_;
    uint8_t name_;
    id<JavaUtilLoggingFilter> *filter_;
    uint8_t resourceBundleName_;
    uint8_t resourceBundle_;
    id<JavaUtilList> *handlers_;
    BOOL notifyParentHandlers_;
    BOOL isNamed_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)initResourceBundleWithNSString:(id)arg0 ;
-(void)addHandlerWithJavaUtilLoggingHandler:(id)arg0 ;
-(void)setManagerWithJavaUtilLoggingLogManager:(id)arg0 ;
-(id)getHandlers;
-(void)removeHandlerWithJavaUtilLoggingHandler:(id)arg0 ;
-(id)getFilter;
-(void)setFilterWithJavaUtilLoggingFilter:(id)arg0 ;
-(id)getLevel;
-(void)setLevelWithJavaUtilLoggingLevel:(id)arg0 ;
-(BOOL)getUseParentHandlers;
-(void)setUseParentHandlersWithBoolean:(BOOL)arg0 ;
-(id)getParent;
-(void)setParentWithJavaUtilLoggingLogger:(id)arg0 ;
-(id)getName;
-(id)getResourceBundle;
-(id)getResourceBundleName;
-(BOOL)internalIsLoggableWithJavaUtilLoggingLevel:(id)arg0 ;
-(BOOL)isLoggableWithJavaUtilLoggingLevel:(id)arg0 ;
-(void)setResourceBundleWithJavaUtilLoggingLogRecord:(id)arg0 ;
-(void)enteringWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)enteringWithNSString:(id)arg0 withNSString:(id)arg1 withId:(id)arg2 ;
-(void)enteringWithNSString:(id)arg0 withNSString:(id)arg1 withNSObjectArray:(id)arg2 ;
-(void)exitingWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)exitingWithNSString:(id)arg0 withNSString:(id)arg1 withId:(id)arg2 ;
-(void)throwingWithNSString:(id)arg0 withNSString:(id)arg1 withJavaLangThrowable:(id)arg2 ;
-(void)severeWithNSString:(id)arg0 ;
-(void)warningWithNSString:(id)arg0 ;
-(void)infoWithNSString:(id)arg0 ;
-(void)configWithNSString:(id)arg0 ;
-(void)fineWithNSString:(id)arg0 ;
-(void)finerWithNSString:(id)arg0 ;
-(void)finestWithNSString:(id)arg0 ;
-(void)logWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 ;
-(void)logWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withId:(id)arg2 ;
-(void)logWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSObjectArray:(id)arg2 ;
-(void)logWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withJavaLangThrowable:(id)arg2 ;
-(void)logWithJavaUtilLoggingLogRecord:(id)arg0 ;
-(void)logpWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 ;
-(void)logpWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withId:(id)arg4 ;
-(void)logpWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSObjectArray:(id)arg4 ;
-(void)logpWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJavaLangThrowable:(id)arg4 ;
-(void)logrbWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)logrbWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withId:(id)arg5 ;
-(void)logrbWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSObjectArray:(id)arg5 ;
-(void)logrbWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withJavaLangThrowable:(id)arg5 ;
-(void)reset;
-(void)dealloc;
-(void)__javaClone;
+(id)loadResourceBundleWithNSString:(id)arg0 ;
+(id)getAnonymousLogger;
+(id)getAnonymousLoggerWithNSString:(id)arg0 ;
+(id)getLoggerWithNSString:(id)arg0 ;
+(id)getLoggerWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)getGlobal;
+(void)initialize;
+(id)__annotations_global_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif